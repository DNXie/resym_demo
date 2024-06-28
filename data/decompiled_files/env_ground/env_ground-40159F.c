#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_40159F(int a1)
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

  v1 = qword_606278;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s [OPTION]... [-] [NAME=VALUE]... [COMMAND [ARG]...]\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext(
           "Set each NAME to VALUE in the environment and run COMMAND.\n"
           "\n"
           "  -i, --ignore-environment  start with an empty environment\n"
           "  -0, --null           end each output line with 0 byte rather than newline\n"
           "  -u, --unset=NAME     remove variable from the environment\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("\nA mere - implies -i.  If no COMMAND, print the resulting environment.\n");
    fputs_unlocked(v11, v10);
    sub_401495();
  }
  exit(a1);
}
