#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_402952(int a1)
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
  char *v12; // rax

  v1 = qword_6083C0;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s [OPTION]... [USER]...\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext(
           "\n"
           "  -l              produce long format output for the specified USERs\n"
           "  -b              omit the user's home directory and shell in long format\n"
           "  -h              omit the user's project file in long format\n"
           "  -p              omit the user's plan file in long format\n"
           "  -s              do short format output, this is the default\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext(
           "  -f              omit the line of column headings in short format\n"
           "  -w              omit the user's full name in short format\n"
           "  -i              omit the user's full name and remote host in short format\n"
           "  -q              omit the user's full name, remote host and idle time\n"
           "                  in short format\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v11, v10);
    v12 = gettext("\nA lightweight `finger' program;  print user information.\nThe utmp file will be %s.\n");
    printf(v12, "/var/run/utmp");
    sub_4019BC();
  }
  exit(a1);
}
