#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_40227B(int a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  char *v3; // rax
  FILE *v4; // rbx
  char *v5; // rax
  FILE *v6; // rbx
  char *v7; // rax
  char *v8; // rax
  FILE *v9; // rbx
  char *v10; // rax
  FILE *v11; // rbx
  char *v12; // rax
  FILE *v13; // rbx
  char *v14; // rax
  FILE *v15; // rbx
  char *v16; // rax

  v1 = qword_6106C8;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s [OPTION]... [INPUT [PREFIX]]\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext(
           "Output fixed-size pieces of INPUT to PREFIXaa, PREFIXab, ...; default\n"
           "size is 1000 lines, and default PREFIX is `x'.  With no INPUT, or when INPUT\n"
           "is -, read standard input.\n"
           "\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v7, v6);
    v8 = gettext(
           "  -a, --suffix-length=N   use suffixes of length N (default %d)\n"
           "  -b, --bytes=SIZE        put SIZE bytes per output file\n"
           "  -C, --line-bytes=SIZE   put at most SIZE bytes of lines per output file\n"
           "  -d, --numeric-suffixes  use numeric suffixes instead of alphabetic\n"
           "  -e, --elide-empty-files  do not generate empty output files with `-n'\n"
           "      --filter=COMMAND    write to shell COMMAND; file name is $FILE\n"
           "  -l, --lines=NUMBER      put NUMBER lines per output file\n"
           "  -n, --number=CHUNKS     generate CHUNKS output files.  See below\n"
           "  -u, --unbuffered        immediately copy input to output with `-n r/...'\n");
    fprintf(stdout, v8, 2LL);
    v9 = stdout;
    v10 = gettext(
            "      --verbose           print a diagnostic just before each\n"
            "                            output file is opened\n");
    fputs_unlocked(v10, v9);
    v11 = stdout;
    v12 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v12, v11);
    v13 = stdout;
    v14 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v14, v13);
    sub_401FD2();
    v15 = stdout;
    v16 = gettext(
            "\n"
            "CHUNKS may be:\n"
            "N       split into N files based on size of input\n"
            "K/N     output Kth of N to stdout\n"
            "l/N     split into N files without splitting lines\n"
            "l/K/N   output Kth of N to stdout without splitting lines\n"
            "r/N     like `l' but use round robin distribution\n"
            "r/K/N   likewise but only output Kth of N to stdout\n");
    fputs_unlocked(v16, v15);
    sub_401FFE();
  }
  exit(a1);
}
