#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_4042DC(int a1)
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

  v1 = qword_60B468;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s [OPTION]... FILE PATTERN...\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext(
           "Output pieces of FILE separated by PATTERN(s) to files `xx00', `xx01', ...,\n"
           "and output byte counts of each piece to standard output.\n"
           "\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext(
           "  -b, --suffix-format=FORMAT  use sprintf FORMAT instead of %02d\n"
           "  -f, --prefix=PREFIX        use PREFIX instead of `xx'\n"
           "  -k, --keep-files           do not remove output files on errors\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext(
            "  -n, --digits=DIGITS        use specified number of digits instead of 2\n"
            "  -s, --quiet, --silent      do not print counts of output file sizes\n"
            "  -z, --elide-empty-files    remove empty output files\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v15, v14);
    v16 = stdout;
    v17 = gettext("\nRead standard input if FILE is -.  Each PATTERN may be:\n");
    fputs_unlocked(v17, v16);
    v18 = stdout;
    v19 = gettext(
            "\n"
            "  INTEGER            copy up to but not including specified line number\n"
            "  /REGEXP/[OFFSET]   copy up to but not including a matching line\n"
            "  %REGEXP%[OFFSET]   skip to, but not including a matching line\n"
            "  {INTEGER}          repeat the previous pattern specified number of times\n"
            "  {*}                repeat the previous pattern as many times as possible\n"
            "\n"
            "A line OFFSET is a required `+' or `-' followed by a positive integer.\n");
    fputs_unlocked(v19, v18);
    sub_401B4D();
  }
  exit(a1);
}
