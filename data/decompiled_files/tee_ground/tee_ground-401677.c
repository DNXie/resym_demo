#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401677(int a1)
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
  FILE *v10; // rbx
  char *v11; // rax

  v1 = qword_607250;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s [OPTION]... [FILE]...\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext(
           "Copy standard input to each FILE, and also to standard output.\n"
           "\n"
           "  -a, --append              append to the given FILEs, do not overwrite\n"
           "  -i, --ignore-interrupts   ignore interrupt signals\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("\nIf a FILE is -, copy again to standard output.\n");
    fputs_unlocked(v11, v10);
    sub_40156D();
  }
  exit(a1);
}
