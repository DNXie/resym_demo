#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_40143F(int a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  char *v3; // rax
  FILE *v4; // rbx
  char *v5; // rax
  FILE *v6; // rbx
  char *v7; // rax
  FILE *v8; // rbx
  char *v9; // rax
  char *v10; // rax

  v1 = qword_606230;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext(
           "Usage: %s [OPTION]... [VARIABLE]...\n"
           "Print the values of the specified environment VARIABLE(s).\n"
           "If no VARIABLE is specified, print name and value pairs for them all.\n"
           "\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext("  -0, --null     end each output line with 0 byte rather than newline\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v9, v8);
    v10 = gettext(
            "\n"
            "NOTE: your shell may have its own version of %s, which usually supersedes\n"
            "the version described here.  Please refer to your shell's documentation\n"
            "for details about the options it supports.\n");
    printf(v10, "printenv");
    sub_401335();
  }
  exit(a1);
}
