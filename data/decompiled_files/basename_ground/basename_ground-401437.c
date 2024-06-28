#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401437(int a1)
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
  __int64 v12; // r12
  __int64 v13; // rbx
  char *v14; // rax

  if ( a1 )
  {
    v1 = qword_606218;
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = qword_606218;
    v4 = qword_606218;
    v5 = gettext("Usage: %s NAME [SUFFIX]\n  or:  %s OPTION\n");
    printf(v5, v4, v3);
    v6 = stdout;
    v7 = gettext("Print NAME with any leading directory components removed.\nIf specified, also remove a trailing SUFFIX.\n\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v11, v10);
    v12 = qword_606218;
    v13 = qword_606218;
    v14 = gettext("\nExamples:\n  %s /usr/bin/sort       Output \"sort\".\n  %s include/stdio.h .h  Output \"stdio\".\n");
    printf(v14, v13, v12);
    sub_40132D();
  }
  exit(a1);
}
