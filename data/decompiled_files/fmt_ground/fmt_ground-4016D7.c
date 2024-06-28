#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_4016D7(int a1)
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

  v1 = qword_6132B8;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s [-WIDTH] [OPTION]... [FILE]...\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext(
           "Reformat each paragraph in the FILE(s), writing to standard output.\n"
           "The option -WIDTH is an abbreviated form of --width=DIGITS.\n"
           "\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext(
           "  -c, --crown-margin        preserve indentation of first two lines\n"
           "  -p, --prefix=STRING       reformat only lines beginning with STRING,\n"
           "                              reattaching the prefix to reformatted lines\n"
           "  -s, --split-only          split long lines, but do not refill\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext(
            "  -t, --tagged-paragraph    indentation of first line different from second\n"
            "  -u, --uniform-spacing     one space between words, two after sentences\n"
            "  -w, --width=WIDTH         maximum line width (default of 75 columns)\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v15, v14);
    v16 = stdout;
    v17 = gettext("\nWith no FILE, or when FILE is -, read standard input.\n");
    fputs_unlocked(v17, v16);
    sub_4015CD();
  }
  exit(a1);
}
