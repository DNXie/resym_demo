#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_4015B7(int a1)
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
    v3 = gettext("Usage: %s [OPTION]...\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext(
           "Print the number of processing units available to the current process,\n"
           "which may be less than the number of online processors\n"
           "\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext(
           "     --all       print the number of installed processors\n"
           "     --ignore=N  if possible, exclude N processing units\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v11, v10);
    sub_4014AD();
  }
  exit(a1);
}
