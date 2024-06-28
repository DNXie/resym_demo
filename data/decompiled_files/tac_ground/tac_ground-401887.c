#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401887(int a1)
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

  v1 = qword_60A460;
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
    v5 = gettext(
           "Write each FILE to standard output, last line first.\n"
           "With no FILE, or when FILE is -, read standard input.\n"
           "\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext(
           "  -b, --before             attach the separator before instead of after\n"
           "  -r, --regex              interpret the separator as a regular expression\n"
           "  -s, --separator=STRING   use STRING as the separator instead of newline\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v13, v12);
    sub_40177D();
  }
  exit(a1);
}
