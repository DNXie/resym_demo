#ifndef CONSUMER_HH
#define CONSUMER_HH

#include "configUtils.hh"
#include "clang/AST/ASTConsumer.h"
#include "propagation_rule.hh"
// #include <nlohmann/json.hpp>

using namespace clang;
using namespace std;

class MyConsumer : public ASTConsumer {
public:
  explicit MyConsumer(ASTContext &C, Rewriter &R) : context(C), rewriter(R) {}

protected:
  Rewriter &rewriter;
  ASTContext &context;
};

class MyRenameConsumer : public MyConsumer {
// constructor
public:
    explicit MyRenameConsumer(ASTContext &C, Rewriter &R, const unordered_map<string, string>& nameMap)
    : MyConsumer(C, R), varRenamer(R, nameMap), context(C), rewriter(R) {
     
    }

    // all apis: https://clang.llvm.org/doxygen/classclang_1_1ASTConsumer.html
    // const: nameMap is not modified within the function
    virtual void HandleTranslationUnit(ASTContext &context){
      
        varRenamer.TraverseDecl(context.getTranslationUnitDecl());
    }

private:
    Rewriter &rewriter;
    ASTContext &context;
    VariableRenamer varRenamer;
};


class MyBeyondAccessConsumer : public MyConsumer {
// constructor
public:
    explicit MyBeyondAccessConsumer(ASTContext &C, Rewriter &R)
    : MyConsumer(C, R), beyondAccessVisitor(C, R), context(C), rewriter(R) {
    }

    virtual void HandleTranslationUnit(ASTContext &context){
        beyondAccessVisitor.TraverseDecl(context.getTranslationUnitDecl());
    }
    
    void dumpAccessToJson(const string &filename){
      nlohmann::json j = beyondAccessVisitor.dumpAccessToJson();
      if(!j.empty()){
        writeJSONToFile(j, filename);
      }
      else{
        DBG_OUT << "JSON data is empty. Skipping file write." <<endl;
      }
      
    }

private:
    Rewriter &rewriter;
    ASTContext &context;
    BeyondAccessVisitor beyondAccessVisitor;
};



class MyCallsiteConsumer : public MyConsumer {
// constructor
public:
    explicit MyCallsiteConsumer(ASTContext &C, Rewriter &R)
    : MyConsumer(C, R), callsiteVisitor(C, R), context(C), rewriter(R) {}

    virtual void HandleTranslationUnit(ASTContext &context){
        callsiteVisitor.TraverseDecl(context.getTranslationUnitDecl());
    }
    
    void dumpCallsitesToJson(const string &filename){
      nlohmann::json j = callsiteVisitor.dumpCallsitesToJson();
      if(!j.empty()){
        writeJSONToFile(j, filename);
      }
      else{
        DBG_OUT << "JSON data is empty. Skipping file write." <<endl;
      }
      
    }

private:
    Rewriter &rewriter;
    ASTContext &context;
    CallsiteVisitor callsiteVisitor;
};



class MyDataflowConsumer : public MyConsumer {
// constructor
public:
    explicit MyDataflowConsumer(ASTContext &C, Rewriter &R)
    : MyConsumer(C, R), dataflowVisitor(C, R), context(C), rewriter(R) {}

    virtual void HandleTranslationUnit(ASTContext &context){
        dataflowVisitor.TraverseDecl(context.getTranslationUnitDecl());
    }
    
    void dumpDataflowToJson(const string &filename){
      nlohmann::json j = dataflowVisitor.dumpDataflowToJson();
      if(!j.empty()){
        writeJSONToFile(j, filename);
      }
      else{
        DBG_OUT << "JSON data is empty. Skipping file write." <<endl;
      }
      
    }

private:
    Rewriter &rewriter;
    ASTContext &context;
    DataflowVisitor dataflowVisitor;
};




#endif
