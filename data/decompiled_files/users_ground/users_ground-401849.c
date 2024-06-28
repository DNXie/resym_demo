#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401849(int a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  char *v3; // rax
  char *v4; // rax
  FILE *v5; // rbx
  char *v6; // rax
  FILE *v7; // rbx
  char *v8; // rax

  v1 = qword_606258;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s [OPTION]... [FILE]\n");
    printf(v3, v1);
    v4 = gettext(
           "Output who is currently logged in according to FILE.\n"
           "If FILE is not specified, use %s.  %s as FILE is common.\n"
           "\n");
    printf(v4, "/var/run/utmp", "/var/log/wtmp");
    v5 = stdout;
    v6 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v6, v5);
    v7 = stdout;
    v8 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v8, v7);
    sub_40153D();
  }
  exit(a1);
}
