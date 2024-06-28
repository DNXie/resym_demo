#include "clang/AST/ASTContext.h"
#include "clang/AST/ParentMapContext.h"
#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/Rewrite/Core/Rewriter.h"
#include "clang/Lex/Lexer.h"
#include <iostream>
#include "propagation_rule.hh"
using namespace clang;
using namespace std;



struct MemoryAccessInfo {
    string varName;
    int offset;
    string lhsType;
    unsigned lhsPointeeSize;
    unsigned exprPointeeSize;
    string exprPointeeType;
    int lineNum;
    string expr;
};

BeyondAccessVisitor::BeyondAccessVisitor(ASTContext &C, Rewriter &R): 
            context(C), rewriter(R) {
                // DBG_OUT << "enter constructor \n";
            }

BeyondAccessVisitor::~BeyondAccessVisitor() {
    for (MemoryAccessInfo* info : memberAccess) {
        delete info;
    }
}

bool BeyondAccessVisitor::VisitBinaryOperator(BinaryOperator *bo) {
    MemoryAccessInfo* info = nullptr;
    // DBG_OUT << "enter bi op \n";
    if (bo->getOpcode() == BO_Add) {
        // DBG_OUT << "BinaryOperator is an additive operation: " << rewriter.getRewrittenText(bo->getSourceRange()) << endl;
         info = parse_addition(bo);
         if (info){
            memberAccess.push_back(info);
         }
    }
    return true;
}

bool BeyondAccessVisitor::VisitArraySubscriptExpr(ArraySubscriptExpr *ase) {
    MemoryAccessInfo* info = nullptr;
    // Get the base and index expressions
    Expr *base = ase->getBase()->IgnoreParenImpCasts();
    Expr *index = ase->getIdx()->IgnoreParenImpCasts();

    // Check if the base is a DeclRefExpr to get the variable name
    if (DeclRefExpr *dref = dyn_cast<DeclRefExpr>(base)) {

        if (dref->getDecl()->getType()->isArrayType()) {
            // DBG_OUT << "ignore "<<rewriter.getRewrittenText(ase->getSourceRange())<< endl;
            return true;  // Base is an array, ignore
        }

        // Check if the index is an integer literal to get the offset
        if (IntegerLiteral *il = dyn_cast<IntegerLiteral>(index)) {
            int offset = il->getValue().getSExtValue();
            if (offset >=0){  // also collect a[0]
                info = new MemoryAccessInfo();
                info->varName = dref->getDecl()->getNameAsString();
                info->lhsType = dref->getDecl()->getType().getAsString();
                info->lhsPointeeSize = getPointeeSizeInBytes(dref);   // pointee size

                QualType pointeeType = dref->getDecl()->getType()->getPointeeType();
                info->exprPointeeType = pointeeType.getAsString();
                CharUnits pointeeSize = context.getTypeSizeInChars(pointeeType);
                info->exprPointeeSize = pointeeSize.getQuantity();


                info->offset = offset;
                info->lineNum = getLineNumber(ase);
                info->expr = rewriter.getRewrittenText(ase->getSourceRange());
            }
        }
    } 
    if (info){
        memberAccess.push_back(info);
        DBG_OUT << "\tVar: " << info->varName << "\tOffset: " << info->offset << "\tType: " << info->lhsType << "\tSize: " << info->lhsPointeeSize << "\tLine: " << info->lineNum << "\tExpr: "<< info->expr << "\n";
    }
    return true;
}

unsigned BeyondAccessVisitor::getLineNumber(Expr *expr) {
    FullSourceLoc FullLoc(expr->getBeginLoc(), context.getSourceManager());
    return FullLoc.getSpellingLineNumber();
}
    
bool BeyondAccessVisitor::isDeclArg(DeclRefExpr *dref){
    if (ParmVarDecl *pvd = dyn_cast<ParmVarDecl>(dref->getDecl())) {
        return true;
    }
    return false;
}

bool BeyondAccessVisitor::isExprPtr(DeclRefExpr *expr){
    return expr->getDecl()->getType()->isPointerType();
}

bool BeyondAccessVisitor::isExprPtr(CStyleCastExpr *expr){
    return expr->getType()->isPointerType();
}

bool BeyondAccessVisitor::isExprPtr(const CStyleCastExpr *expr){
    return expr->getType()->isPointerType();
}

unsigned BeyondAccessVisitor::getPointeeSizeInBytes(DeclRefExpr *dref){
    QualType qt = dref->getDecl()->getType();
    return getPointeeSizeInBytesHelper(qt);
}

unsigned BeyondAccessVisitor::getPointeeSizeInBytes(CStyleCastExpr *expr){
    QualType qt = expr->getType();
    return getPointeeSizeInBytesHelper(qt);
}

unsigned BeyondAccessVisitor::getPointeeSizeInBytes(const CStyleCastExpr *expr){
    QualType qt = expr->getType();
    return getPointeeSizeInBytesHelper(qt);
}

unsigned BeyondAccessVisitor::getPointeeSizeInBytesHelper(QualType qt){
    const Type* type = qt.getTypePtr();
    if (type && type->isPointerType()) {
        QualType pointeeType = type->getPointeeType();
        CharUnits size = context.getTypeSizeInChars(pointeeType);
        return size.getQuantity();
    }
    return 0; // Return 0 if not a pointer type
}

unsigned BeyondAccessVisitor::getTypeSizeInBytes(DeclRefExpr *dref){
    QualType qt = dref->getDecl()->getType();
    return getTypeSizeInBytesHelper(qt);
}

unsigned BeyondAccessVisitor::getTypeSizeInBytes(CStyleCastExpr *expr){
    QualType qt = expr->getType();
    return getTypeSizeInBytesHelper(qt);
}

unsigned BeyondAccessVisitor::getTypeSizeInBytesHelper(QualType qt){
    CharUnits size = context.getTypeSizeInChars(qt);
    return size.getQuantity();
}

const CStyleCastExpr* BeyondAccessVisitor::getParentCastExpr(Expr *expr) {
    // const Stmt *parentStmt = context.getParents(*bo)[0].get<Stmt>();
    const Stmt* currentStmt = expr;
    while (true){
        const auto& parents = context.getParents(*currentStmt);
        if (parents.empty()){
            return nullptr;
        }
        const Stmt* parentStmt = parents[0].get<Stmt>();
        if (!parentStmt){
            return nullptr;
        }
        if (isa<ParenExpr>(parentStmt)){
            currentStmt = cast<ParenExpr>(parentStmt);
            continue;
        }
        if (const CStyleCastExpr *castExpr = dyn_cast<CStyleCastExpr>(parentStmt)) {
            return castExpr;
        }
        return nullptr;
    }
}

pair<unsigned, string> BeyondAccessVisitor::getExprPointeeDetails(const Expr *expr) {
    QualType exprType = expr->getType();
    if (exprType->isPointerType()) {
        QualType pointeeType = exprType->getPointeeType();
        CharUnits size = context.getTypeSizeInChars(pointeeType);
        return make_pair(size.getQuantity(), pointeeType.getAsString());
    }
    return make_pair(0, ""); // Return 0 and empty string if not a pointer type
}

pair<unsigned, string> BeyondAccessVisitor::getExprPointeeDetails(BinaryOperator *bo) {
    QualType exprType = bo->getType();
    if (exprType->isPointerType()) {
        QualType pointeeType = exprType->getPointeeType();
        CharUnits size = context.getTypeSizeInChars(pointeeType);
        return make_pair(size.getQuantity(), pointeeType.getAsString());
    }
    return make_pair(0, ""); // Return 0 and empty string if not a pointer type
}

MemoryAccessInfo* BeyondAccessVisitor::parse_addition(BinaryOperator *bo){
    /*
    For binary operator:
    if rhs is not a constant -> discard
    if lhs is an identifier 
        if lhs is a ptr type -> keep
        if lhs is not a ptr type
            if the bo_expr is cast to a ptr type -> keep
            else -> discard
    if lhs is a cast 
        if cast is to a ptr type -> keep
        else: discard
    */

    MemoryAccessInfo* info = nullptr;
    Expr *lhs = bo->getLHS()->IgnoreParenImpCasts();
    Expr *rhs = bo->getRHS()->IgnoreParenImpCasts();

    if (!isa<IntegerLiteral>(rhs)) {
        return info;  // Discard if RHS is not a constant
    }

    // Check if LHS is an identifier
    if (DeclRefExpr *dref = dyn_cast<DeclRefExpr>(lhs)) {
        if (isExprPtr(dref)){
            DBG_OUT << "branch1\n";
            info = new MemoryAccessInfo();
            info->varName = dref->getDecl()->getNameAsString();
            info->offset = cast<IntegerLiteral>(rhs)->getValue().getSExtValue();
            info->lhsType = dref->getDecl()->getType().getAsString();
            info->lhsPointeeSize = getPointeeSizeInBytes(dref);
            info->expr = rewriter.getRewrittenText(bo->getSourceRange());
            auto exprPointeeDetails = getExprPointeeDetails(bo);
            info->exprPointeeSize = exprPointeeDetails.first;
            info->exprPointeeType = exprPointeeDetails.second;
        }
        else {
            DBG_OUT << "branch2\n";
            const CStyleCastExpr* castExpr = getParentCastExpr(bo);
            if (castExpr && isExprPtr(castExpr)) {
                info = new MemoryAccessInfo();
                info->varName = dref->getDecl()->getNameAsString();
                info->offset = cast<IntegerLiteral>(rhs)->getValue().getSExtValue();
                info->lhsType = dref->getDecl()->getType().getAsString();    // the original id type
                info->lhsPointeeSize = getPointeeSizeInBytes(dref);
                info->expr = rewriter.getRewrittenText(castExpr->getSourceRange());
                // auto exprCopy = new clang::CStyleCastExpr(*castExpr);
                auto exprPointeeDetails = getExprPointeeDetails(castExpr);
                // delete exprCopy; // Remember to release memory later!

                // auto exprPointeeDetails = getExprPointeeDetails(const_cast<clang::Expr*>(castExpr));
                info->exprPointeeSize = exprPointeeDetails.first;
                info->exprPointeeType = exprPointeeDetails.second;
            }   
        }
    }

    // Check if LHS is a cast expression
    else if (CStyleCastExpr *castExpr = dyn_cast<CStyleCastExpr>(lhs)) {
        Expr *subExpr = castExpr->getSubExpr()->IgnoreParenImpCasts();
        if (DeclRefExpr *dref = dyn_cast<DeclRefExpr>(subExpr)) {
            if (isExprPtr(castExpr)){
                DBG_OUT << "branch3\n";
                info = new MemoryAccessInfo();
                info->varName = dref->getDecl()->getNameAsString();
                info->offset = cast<IntegerLiteral>(rhs)->getValue().getSExtValue();
                info->lhsType = castExpr->getType().getAsString();
                info->lhsPointeeSize = getPointeeSizeInBytes(castExpr);
                info->expr = rewriter.getRewrittenText(bo->getSourceRange());
                auto exprPointeeDetails = getExprPointeeDetails(bo);
                info->exprPointeeSize = exprPointeeDetails.first;
                info->exprPointeeType = exprPointeeDetails.second;
            }
        }
    }

    if (info){
        info->lineNum = getLineNumber(bo);
        
        DBG_OUT << "\tVar: " << info->varName << "\tOffset: " << info->offset << "\tType: " << info->lhsType << "\tSize: " << info->lhsPointeeSize << "\tExpr Type: " << info->exprPointeeType << "\tExpr Size: " << info->exprPointeeSize << "\tLine: " << info->lineNum << "\tExpr: "<< info->expr << "\n";
    }


    return info;
}


bool BeyondAccessVisitor::isAddSubMulDivBinaryOp(const Stmt* stmt) {
    if (const BinaryOperator *bo = dyn_cast<BinaryOperator>(stmt)) {
        BinaryOperatorKind op = bo->getOpcode();
        return op == BO_Add || op == BO_Sub || op == BO_Mul || op == BO_Div;
    }
    return false;
}


bool BeyondAccessVisitor::VisitDeclRefExpr(DeclRefExpr *dref) {
    // First, Filtering out some cases so they aren't counted twice

    auto parents = context.getParentMapContext().getParents(*dref);

    if (!parents.empty()) {
        const Stmt* parentStmt = parents[0].get<Stmt>();
        /*
        print debug info
        if (getLineNumber(dref) == 52){
             // Get the source range of the parent statement
            SourceRange range = parentStmt->getSourceRange();
            // Convert the source range to a string
            std::string parentStmtStr = Lexer::getSourceText(CharSourceRange::getTokenRange(range), context.getSourceManager(), context.getLangOpts()).str();

            // Debug: Print the parent statement expression
            DBG_OUT << getLineNumber(dref) << " Parent Statement Expression: " << parentStmtStr << "\n";
            // Get the grandparent node
            auto grandParents = context.getParentMapContext().getParents(*parentStmt);
            if (!grandParents.empty()) {
                const Stmt* grandParentStmt = grandParents[0].get<Stmt>();

                // Check if the grandparent statement exists
                if (grandParentStmt) {
                    // Get the source range of the grandparent statement
                    SourceRange grandParentRange = grandParentStmt->getSourceRange();
                    // Convert the source range to a string
                    std::string grandParentStmtStr = Lexer::getSourceText(CharSourceRange::getTokenRange(grandParentRange), context.getSourceManager(), context.getLangOpts()).str();

                    // Debug: Print the grandparent statement expression
                    DBG_OUT << getLineNumber(dref)<< " Grandparent Statement Expression: " << grandParentStmtStr << "\n";
                }
            }
        }
        */

        const auto &grandParents = context.getParents(*parentStmt);
        if (!grandParents.empty()) {
            const Stmt* grandParentStmt = grandParents[0].get<Stmt>();

            // Check if grandparent is a cast and great-grandparent is a binary operation
            if (const CStyleCastExpr *grandCastExpr = dyn_cast<CStyleCastExpr>(grandParentStmt)) {
                DBG_OUT << getLineNumber(dref) << ": grandparent is a cast\n";
                const auto &greatGrandParents = context.getParents(*grandCastExpr);
                if (!greatGrandParents.empty() && isAddSubMulDivBinaryOp(greatGrandParents[0].get<Stmt>())) {
                    DBG_OUT << getLineNumber(dref) << ": greatGrandParents is a plus\n";
                    return true; // Part of a cast followed by a binary operation
                }
            }
            // Check if grandparent is a binary operation
            else if (isAddSubMulDivBinaryOp(grandParentStmt)) {
                DBG_OUT << getLineNumber(dref) << ": grandParentStmt is a plus\n";
                return true; // Part of a binary operation
            }
            else if (isa<ArraySubscriptExpr>(grandParentStmt)) {
                DBG_OUT << getLineNumber(dref) << ": grandParentStmt is a array subscription\n";
                return true; // Skip processing
            }
        }
        
    }
    

    // Second, begin processing
    /*
    if it is a cast expr
        if cast to ptr type -> collect
    elif (not a cast AND) vat itself is a ptr -> collect 
    */
    MemoryAccessInfo* info = nullptr;
    // check if it is a cast first (it could affect the PointeeSize)
    // check grandparent
    if (!parents.empty()) {
        const Stmt* parentStmt = parents[0].get<Stmt>();
        const auto &grandParents = context.getParents(*parentStmt);
        if (!grandParents.empty()) {
            const Stmt* grandParentStmt = grandParents[0].get<Stmt>();
            if (const CStyleCastExpr *grandCastExpr = dyn_cast<CStyleCastExpr>(grandParentStmt)){
                if (isExprPtr(grandCastExpr)) {
                    // if grandparent is cast AND cast to pointer type
                    info = new MemoryAccessInfo();
                    info->varName = dref->getDecl()->getNameAsString();
                    info->offset = 0;
                    info->lhsType = grandCastExpr->getType().getAsString();
                    info->lhsPointeeSize = getPointeeSizeInBytes(grandCastExpr);
                    info->expr = rewriter.getRewrittenText(grandCastExpr->getSourceRange());
                }
                
            }
            else if (isExprPtr(dref)){
                // if it not a cast AND var is of pointer type
                info = new MemoryAccessInfo();
                info->varName = dref->getDecl()->getNameAsString();
                info->offset = 0; // Direct use implies no offset
                info->lhsType = dref->getDecl()->getType().getAsString();
                info->lhsPointeeSize = getPointeeSizeInBytes(dref);
                info->expr = rewriter.getRewrittenText(dref->getSourceRange());
            }

        }
    }

    
    if (info){
        info->lineNum = getLineNumber(dref);
        info->exprPointeeSize = info->lhsPointeeSize;
        info->exprPointeeType = info->lhsType;

        memberAccess.push_back(info);
        DBG_OUT << "\t[Direct use] \tVar: " << info->varName << "\tOffset: " << info->offset << "\tType: " << info->lhsType << "\tSize: " << info->lhsPointeeSize << "\tExpr Type: " << info->exprPointeeType << "\tExpr Size: " << info->exprPointeeSize << "\tLine: " << info->lineNum << "\tExpr: "<< info->expr << "\n";
    }
    return true;

}
    

// Define how to convert a MemoryAccessInfo object to JSON
void to_json(nlohmann::json &j, const MemoryAccessInfo &info) {
    j = nlohmann::json{
        {"varName", info.varName},
        {"offset", info.offset},
        {"lhsType", info.lhsType},
        {"lhsPointeeSize", info.lhsPointeeSize},
        {"exprPointeeSize", info.exprPointeeSize},
        {"exprPointeeType", info.exprPointeeType},
        {"lineNum", info.lineNum},
        {"expr", info.expr}
    };
}

nlohmann::json BeyondAccessVisitor::dumpAccessToJson(){
    nlohmann::json j;
    // Convert each MemoryAccessInfo object in the memberAccess vector to JSON
    for (const auto &info : memberAccess) {
        j.push_back(*info);
    }

    return j;
}