#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401487(int a1)
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

  if ( a1 )
  {
    v1 = qword_606240;
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = qword_606240;
    v4 = qword_606240;
    v5 = gettext(
           "Usage: %s NUMBER[SUFFIX]...\n"
           "  or:  %s OPTION\n"
           "Pause for NUMBER seconds.  SUFFIX may be `s' for seconds (the default),\n"
           "`m' for minutes, `h' for hours or `d' for days.  Unlike most implementations\n"
           "that require NUMBER be an integer, here NUMBER may be an arbitrary floating\n"
           "point number.  Given two or more arguments, pause for the amount of time\n"
           "specified by the sum of their values.\n"
           "\n");
    printf(v5, v4, v3);
    v6 = stdout;
    v7 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v9, v8);
    sub_40137D();
  }
  exit(a1);
}
