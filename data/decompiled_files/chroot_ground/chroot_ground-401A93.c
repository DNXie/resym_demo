#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401A93(int a1)
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
  FILE *v12; // rbx
  char *v13; // rax
  FILE *v14; // rbx
  char *v15; // rax

  if ( a1 )
  {
    v1 = qword_6072B0;
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = qword_6072B0;
    v4 = qword_6072B0;
    v5 = gettext("Usage: %s [OPTION] NEWROOT [COMMAND [ARG]...]\n  or:  %s OPTION\n");
    printf(v5, v4, v3);
    v6 = stdout;
    v7 = gettext("Run COMMAND with root directory set to NEWROOT.\n\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext(
           "  --userspec=USER:GROUP  specify user and group (ID or name) to use\n"
           "  --groups=G_LIST        specify supplementary groups as g1,g2,..,gN\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext("\nIf no command is given, run ``${SHELL} -i'' (default: /bin/sh).\n");
    fputs_unlocked(v15, v14);
    sub_401755();
  }
  exit(a1);
}
