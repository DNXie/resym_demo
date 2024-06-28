#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_4016E7(int a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 v5; // rbx
  char *v6; // rax
  FILE *v7; // rbx
  char *v8; // rax
  FILE *v9; // rbx
  char *v10; // rax
  FILE *v11; // rbx
  char *v12; // rax
  FILE *v13; // rbx
  char *v14; // rax
  FILE *v15; // rbx
  char *v16; // rax
  FILE *v17; // rbx
  char *v18; // rax
  char *v19; // rax

  if ( a1 )
  {
    v1 = qword_607450;
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = qword_607450;
    v4 = qword_607450;
    v5 = qword_607450;
    v6 = gettext("Usage: %s [-s SIGNAL | -SIGNAL] PID...\n  or:  %s -l [SIGNAL]...\n  or:  %s -t [SIGNAL]...\n");
    printf(v6, v5, v4, v3);
    v7 = stdout;
    v8 = gettext("Send signals to processes, or list signals.\n\n");
    fputs_unlocked(v8, v7);
    v9 = stdout;
    v10 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v10, v9);
    v11 = stdout;
    v12 = gettext(
            "  -s, --signal=SIGNAL, -SIGNAL\n"
            "                   specify the name or number of the signal to be sent\n"
            "  -l, --list       list signal names, or convert signal names to/from numbers\n"
            "  -t, --table      print a table of signal information\n");
    fputs_unlocked(v12, v11);
    v13 = stdout;
    v14 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v14, v13);
    v15 = stdout;
    v16 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v16, v15);
    v17 = stdout;
    v18 = gettext(
            "\n"
            "SIGNAL may be a signal name like `HUP', or a signal number like `1',\n"
            "or the exit status of a process terminated by a signal.\n"
            "PID is an integer; if negative it identifies a process group.\n");
    fputs_unlocked(v18, v17);
    v19 = gettext(
            "\n"
            "NOTE: your shell may have its own version of %s, which usually supersedes\n"
            "the version described here.  Please refer to your shell's documentation\n"
            "for details about the options it supports.\n");
    printf(v19, "kill");
    sub_4015DD();
  }
  exit(a1);
}
