#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_4022A6(int a1)
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
  FILE *v16; // rbx
  char *v17; // rax

  if ( a1 )
  {
    v1 = qword_60C670;
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = qword_60C670;
    v4 = qword_60C670;
    v5 = gettext("Usage: %s [OPTION] DURATION COMMAND [ARG]...\n  or:  %s [OPTION]\n");
    printf(v5, v4, v3);
    v6 = stdout;
    v7 = gettext(
           "Start COMMAND, and kill it if still running after DURATION.\n"
           "\n"
           "Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext(
           "      --foreground\n"
           "                 When not running timeout directly from a shell prompt,\n"
           "                 allow COMMAND to read from the TTY and receive TTY signals.\n"
           "                 In this mode, children of COMMAND will not be timed out.\n"
           "  -k, --kill-after=DURATION\n"
           "                 also send a KILL signal if COMMAND is still running\n"
           "                 this long after the initial signal was sent.\n"
           "  -s, --signal=SIGNAL\n"
           "                 specify the signal to be sent on timeout.\n"
           "                 SIGNAL may be a name like `HUP' or a number.\n"
           "                 See `kill -l` for a list of signals\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext(
            "\n"
            "DURATION is a floating point number with an optional suffix:\n"
            "`s' for seconds (the default), `m' for minutes, `h' for hours or `d' for days.\n");
    fputs_unlocked(v15, v14);
    v16 = stdout;
    v17 = gettext(
            "\n"
            "If the command times out, then exit with status 124.  Otherwise, exit\n"
            "with the status of COMMAND.  If no signal is specified, send the TERM\n"
            "signal upon timeout.  The TERM signal kills any process that does not\n"
            "block or catch that signal.  For other processes, it may be necessary to\n"
            "use the KILL (9) signal, since this signal cannot be caught.\n");
    fputs_unlocked(v17, v16);
    sub_401EF5();
  }
  exit(a1);
}
