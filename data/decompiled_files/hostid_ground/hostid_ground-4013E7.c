#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_4013E7(int a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  char *v3; // rax
  FILE *v4; // rbx
  char *v5; // rax
  FILE *v6; // rbx
  char *v7; // rax

  v1 = qword_606218;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s [OPTION]\nPrint the numeric identifier (in hexadecimal) for the current host.\n\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v7, v6);
    sub_4012DD();
  }
  exit(a1);
}
