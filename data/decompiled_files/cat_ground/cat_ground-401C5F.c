#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401C5F(int a1)
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
  __int64 v14; // r12
  __int64 v15; // rbx
  char *v16; // rax

  v1 = qword_60C340;
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
           "Concatenate FILE(s), or standard input, to standard output.\n"
           "\n"
           "  -A, --show-all           equivalent to -vET\n"
           "  -b, --number-nonblank    number nonempty output lines, overrides -n\n"
           "  -e                       equivalent to -vE\n"
           "  -E, --show-ends          display $ at end of each line\n"
           "  -n, --number             number all output lines\n"
           "  -s, --squeeze-blank      suppress repeated empty output lines\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext(
           "  -t                       equivalent to -vT\n"
           "  -T, --show-tabs          display TAB characters as ^I\n"
           "  -u                       (ignored)\n"
           "  -v, --show-nonprinting   use ^ and M- notation, except for LFD and TAB\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext("\nWith no FILE, or when FILE is -, read standard input.\n");
    fputs_unlocked(v13, v12);
    v14 = qword_60C340;
    v15 = qword_60C340;
    v16 = gettext(
            "\n"
            "Examples:\n"
            "  %s f - g  Output f's contents, then standard input, then g's contents.\n"
            "  %s        Copy standard input to standard output.\n");
    printf(v16, v15, v14);
    sub_401AF3();
  }
  exit(a1);
}
