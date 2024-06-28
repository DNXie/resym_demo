#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_4013B7(int a1)
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
  FILE *v18; // rbx
  char *v19; // rax
  char *v20; // rax

  if ( a1 )
  {
    v1 = qword_606200;
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = qword_606200;
    v4 = qword_606200;
    v5 = gettext("Usage: %s [SHORT-OPTION]... [STRING]...\n  or:  %s LONG-OPTION\n");
    printf(v5, v4, v3);
    v6 = stdout;
    v7 = gettext("Echo the STRING(s) to standard output.\n\n  -n             do not output the trailing newline\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext(
           "  -e             enable interpretation of backslash escapes\n"
           "  -E             disable interpretation of backslash escapes (default)\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext("\nIf -e is in effect, the following sequences are recognized:\n\n");
    fputs_unlocked(v15, v14);
    v16 = stdout;
    v17 = gettext(
            "  \\\\      backslash\n"
            "  \\a      alert (BEL)\n"
            "  \\b      backspace\n"
            "  \\c      produce no further output\n"
            "  \\e      escape\n"
            "  \\f      form feed\n"
            "  \\n      new line\n"
            "  \\r      carriage return\n"
            "  \\t      horizontal tab\n"
            "  \\v      vertical tab\n");
    fputs_unlocked(v17, v16);
    v18 = stdout;
    v19 = gettext(
            "  \\0NNN   byte with octal value NNN (1 to 3 digits)\n"
            "  \\xHH    byte with hexadecimal value HH (1 to 2 digits)\n");
    fputs_unlocked(v19, v18);
    v20 = gettext(
            "\n"
            "NOTE: your shell may have its own version of %s, which usually supersedes\n"
            "the version described here.  Please refer to your shell's documentation\n"
            "for details about the options it supports.\n");
    printf(v20, "echo");
    sub_4012AD();
  }
  exit(a1);
}
