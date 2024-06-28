#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401ACC(int a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  __int64 v3; // r12
  __int64 v4; // rbx
  char *v5; // rax
  FILE *v6; // rbx
  char *v7; // rax
  FILE *v8; // rbx
  char *v9; // rax
  FILE *v10; // rbx
  char *v11; // rax
  FILE *v12; // rbx
  char *v13; // rax

  if ( a1 )
  {
    v1 = qword_609330;
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = qword_609330;
    v4 = qword_609330;
    v5 = gettext("Usage: %s [OPTION]... [FILE]...\n  or:  %s [OPTION]... --files0-from=F\n");
    printf(v5, v4, v3);
    v6 = stdout;
    v7 = gettext(
           "Print newline, word, and byte counts for each FILE, and a total line if\n"
           "more than one FILE is specified.  With no FILE, or when FILE is -,\n"
           "read standard input.  A word is a non-zero-length sequence of characters\n"
           "delimited by white space.\n"
           "The options below may be used to select which counts are printed, always in\n"
           "the following order: newline, word, character, byte, maximum line length.\n"
           "  -c, --bytes            print the byte counts\n"
           "  -m, --chars            print the character counts\n"
           "  -l, --lines            print the newline counts\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext(
           "      --files0-from=F    read input from the files specified by\n"
           "                           NUL-terminated names in file F;\n"
           "                           If F is - then read names from standard input\n"
           "  -L, --max-line-length  print the length of the longest line\n"
           "  -w, --words            print the word counts\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v13, v12);
    sub_40198C();
  }
  exit(a1);
}
