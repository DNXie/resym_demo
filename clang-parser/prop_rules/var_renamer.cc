#include <string>
#include <unordered_map>


#include "clang/AST/ASTContext.h"
#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/Rewrite/Core/Rewriter.h"
#include "clang/Lex/Lexer.h"
#include <iostream>
#include "propagation_rule.hh"
using namespace clang;
using namespace std;




VariableRenamer::VariableRenamer(Rewriter &R, const unordered_map<string, string>& nm)  : rewriter(R), nameMap(nm) {}


bool VariableRenamer::VisitVarDecl(VarDecl *v){
    string varname = v->getNameAsString();
    
    // rename
    if (nameMap.count(varname)){
        // passing range would affect the ";" at the end
        // SourceRange range(v->getLocation(), v->getLocation().getLocWithOffset(varname.length()));
        // rewriter.ReplaceText(range, nameMap.at(varname));
        rewriter.ReplaceText(v->getLocation(), varname.length(), nameMap.at(varname));
        DBG_OUT << "Renaming from " << varname << " to " << nameMap.at(varname) << "\n";
    }

    return true;
}

bool VariableRenamer::VisitDeclRefExpr(DeclRefExpr *e){
    string varname = e->getNameInfo().getAsString();
    if (nameMap.count(varname)){
        rewriter.ReplaceText(e->getLocation(), varname.length(), nameMap.at(varname));
    }

    return true;
}

