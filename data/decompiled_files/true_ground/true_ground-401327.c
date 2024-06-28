#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401327(int a1)
{
  __int64 v1; // r12
  __int64 v2; // rbx
  char *v3; // rax
  char *v4; // rax
  FILE *v5; // rbx
  char *v6; // rax
  FILE *v7; // rbx
  char *v8; // rax
  char *v9; // rax

  v1 = qword_606200;
  v2 = qword_606200;
  v3 = gettext("Usage: %s [ignored command line arguments]\n  or:  %s OPTION\n");
  printf(v3, v2, v1);
  v4 = gettext("Exit with a status code indicating success.");
  printf("%s\n\n", v4);
  v5 = stdout;
  v6 = gettext("      --help     display this help and exit\n");
  fputs_unlocked(v6, v5);
  v7 = stdout;
  v8 = gettext("      --version  output version information and exit\n");
  fputs_unlocked(v8, v7);
  v9 = gettext(
         "\n"
         "NOTE: your shell may have its own version of %s, which usually supersedes\n"
         "the version described here.  Please refer to your shell's documentation\n"
         "for details about the options it supports.\n");
  printf(v9, "true");
  sub_40121D();
  exit(a1);
}
