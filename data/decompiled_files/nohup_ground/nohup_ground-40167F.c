#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_40167F(int a1)
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
  __int64 v12; // rbx
  char *v13; // rax
  char *v14; // rax

  if ( a1 )
  {
    v1 = qword_607258;
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = qword_607258;
    v4 = qword_607258;
    v5 = gettext("Usage: %s COMMAND [ARG]...\n  or:  %s OPTION\n");
    printf(v5, v4, v3);
    v6 = stdout;
    v7 = gettext("Run COMMAND, ignoring hangup signals.\n\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v11, v10);
    v12 = qword_607258;
    v13 = gettext(
            "\n"
            "If standard input is a terminal, redirect it from /dev/null.\n"
            "If standard output is a terminal, append output to `nohup.out' if possible,\n"
            "`$HOME/nohup.out' otherwise.\n"
            "If standard error is a terminal, redirect it to standard output.\n"
            "To save output to FILE, use `%s COMMAND > FILE'.\n");
    printf(v13, v12);
    v14 = gettext(
            "\n"
            "NOTE: your shell may have its own version of %s, which usually supersedes\n"
            "the version described here.  Please refer to your shell's documentation\n"
            "for details about the options it supports.\n");
    printf(v14, "nohup");
    sub_401575();
  }
  exit(a1);
}
