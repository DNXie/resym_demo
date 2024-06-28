#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401667(int a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  char *v3; // rax
  FILE *v4; // rbx
  char *v5; // rax
  FILE *v6; // rbx
  char *v7; // rax

  v1 = qword_607278;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext(
           "Usage: %s [OPTION] [FILE]\n"
           "Write totally ordered list consistent with the partial ordering in FILE.\n"
           "With no FILE, or when FILE is -, read standard input.\n"
           "\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v7, v6);
    sub_40155D();
  }
  exit(a1);
}
