#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_40157F(int a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  char *v3; // rax
  char *v4; // rax
  FILE *v5; // rbx
  char *v6; // rax
  FILE *v7; // rbx
  char *v8; // rax
  char *v9; // rax

  v1 = qword_607250;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s [OPTION] [COMMAND [ARG]...]\n");
    printf(v3, v1);
    v4 = gettext(
           "Run COMMAND with an adjusted niceness, which affects process scheduling.\n"
           "With no COMMAND, print the current niceness.  Nicenesses range from\n"
           "%d (most favorable scheduling) to %d (least favorable).\n"
           "\n"
           "  -n, --adjustment=N   add integer N to the niceness (default 10)\n");
    printf(v4, 4294967276LL, 19LL);
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
    printf(v9, "nice");
    sub_401475();
  }
  exit(a1);
}
