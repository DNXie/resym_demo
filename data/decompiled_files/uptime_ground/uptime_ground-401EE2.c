#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401EE2(int a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  char *v3; // rax
  char *v4; // rax
  char *v5; // rax
  char *v6; // rax
  FILE *v7; // rbx
  char *v8; // rax
  FILE *v9; // rbx
  char *v10; // rax

  v1 = qword_60A2C0;
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
           "Print the current time, the length of time the system has been up,\n"
           "the number of users on the system, and the average number of jobs\n"
           "in the run queue over the last 1, 5 and 15 minutes.");
    printf(v4);
    v5 = gettext("  Processes in\nan uninterruptible sleep state also contribute to the load average.\n");
    printf(v5);
    v6 = gettext("If FILE is not specified, use %s.  %s as FILE is common.\n\n");
    printf(v6, "/var/run/utmp", "/var/log/wtmp");
    v7 = stdout;
    v8 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v8, v7);
    v9 = stdout;
    v10 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v10, v9);
    sub_40187B();
  }
  exit(a1);
}
