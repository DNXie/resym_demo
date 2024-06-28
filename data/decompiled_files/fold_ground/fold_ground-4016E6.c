#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_4016E6(int a1)
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

  v1 = qword_607288;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s [OPTION]... [FILE]...\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext("Wrap input lines in each FILE (standard input by default), writing to\nstandard output.\n\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext(
           "  -b, --bytes         count bytes rather than columns\n"
           "  -s, --spaces        break at spaces\n"
           "  -w, --width=WIDTH   use WIDTH columns instead of 80\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v13, v12);
    sub_4015DC();
  }
  exit(a1);
}
