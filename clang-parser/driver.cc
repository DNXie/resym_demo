#include <clang/AST/ASTConsumer.h>
#include <clang/AST/RecursiveASTVisitor.h>
#include <clang/Basic/Diagnostic.h>
#include <clang/Basic/FileManager.h>
#include <clang/Basic/SourceManager.h>
#include <clang/Basic/TargetInfo.h>
#include <clang/Basic/TargetOptions.h>
#include <clang/Frontend/CompilerInstance.h>
#include <clang/Frontend/FrontendAction.h>
#include <clang/Lex/Preprocessor.h>
#include <clang/Parse/ParseAST.h>
#include <clang/Rewrite/Core/Rewriter.h>
#include <clang/Rewrite/Frontend/Rewriters.h>
#include <clang/Tooling/Tooling.h>

#include "macros.hh"
#include "compilerUtils.hh"
#include "consumer.hh"
#include "configUtils.hh"
#include <fstream>
#include <iostream>
#include <llvm/Support/Host.h>
#include <llvm/Support/raw_ostream.h>
#include <llvm/Support/FileSystem.h>

#include <regex>
#include <sstream>
#include <string>

#undef DEBUG

using namespace clang;
using namespace std;




void applyPropRules(ConfigParser &config) {
  
  for (auto &rule : config.propRules) {
    CompilerInstance theCompiler;
    createCompilerInstance(theCompiler, config.inputFile);
    Rewriter rewriter = createRewriter(theCompiler);

    if (rule == "rename") {
      MyRenameConsumer consumer(theCompiler.getASTContext(), rewriter, config.nameMap);
      consumeAST(theCompiler, consumer);
    } else if (rule == "beyond_access") {
      MyBeyondAccessConsumer consumer(theCompiler.getASTContext(), rewriter);
      consumeAST(theCompiler, consumer);
      if (config.BAoutputFile.has_value()){
        consumer.dumpAccessToJson(config.BAoutputFile.value());
      }
    } else {
      cout << "Unknown propagation rule: " << rule << endl;
      exit(1);
    }
    if (config.outputFile.has_value()){
      // TODO: fix (do not support multiple rewrite prop)
      writeRewriterOutputToFile(rewriter, config.outputFile.value());
    }
  }
}



int main(int argc, char **argv) {
  if (argc < 2) {
    cout << "Usage: ./extract-vars <file>" << endl;
    return 1;
  }

  string configPath = argv[1];
  ConfigParser configParser(configPath);

  applyPropRules(configParser);

  return 0;
}


