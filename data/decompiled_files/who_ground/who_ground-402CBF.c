#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_402CBF(int a1)
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
  FILE *v12; // rbx
  char *v13; // rax
  FILE *v14; // rbx
  char *v15; // rax
  FILE *v16; // rbx
  char *v17; // rax
  FILE *v18; // rbx
  char *v19; // rax
  char *v20; // rax

  v1 = qword_60F3C0;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s [OPTION]... [ FILE | ARG1 ARG2 ]\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext("Print information about users who are currently logged in.\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext(
           "\n"
           "  -a, --all         same as -b -d --login -p -r -t -T -u\n"
           "  -b, --boot        time of last system boot\n"
           "  -d, --dead        print dead processes\n"
           "  -H, --heading     print line of column headings\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext("  -l, --login       print system login processes\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext(
            "      --lookup      attempt to canonicalize hostnames via DNS\n"
            "  -m                only hostname and user associated with stdin\n"
            "  -p, --process     print active processes spawned by init\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext(
            "  -q, --count       all login names and number of users logged on\n"
            "  -r, --runlevel    print current runlevel\n"
            "  -s, --short       print only name, line, and time (default)\n"
            "  -t, --time        print last system clock change\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext(
            "  -T, -w, --mesg    add user's message status as +, - or ?\n"
            "  -u, --users       list users logged in\n"
            "      --message     same as -T\n"
            "      --writable    same as -T\n");
    fputs_unlocked(v15, v14);
    v16 = stdout;
    v17 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v17, v16);
    v18 = stdout;
    v19 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v19, v18);
    v20 = gettext(
            "\n"
            "If FILE is not specified, use %s.  %s as FILE is common.\n"
            "If ARG1 ARG2 given, -m presumed: `am i' or `mom likes' are usual.\n");
    printf(v20, "/var/run/utmp", "/var/log/wtmp");
    sub_4018FD();
  }
  exit(a1);
}
