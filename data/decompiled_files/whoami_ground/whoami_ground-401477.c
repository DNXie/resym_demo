#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401477(int a1)
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

  v1 = qword_606238;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s [OPTION]...\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext("Print the user name associated with the current effective user ID.\nSame as id -un.\n\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v9, v8);
    sub_40136D();
  }
  exit(a1);
}
