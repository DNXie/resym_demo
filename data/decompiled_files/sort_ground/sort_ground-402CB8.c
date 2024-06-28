#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_402CB8(int a1)
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
  FILE *v20; // rbx
  char *v21; // rax
  FILE *v22; // rbx
  char *v23; // rax
  FILE *v24; // rbx
  char *v25; // rax
  FILE *v26; // rbx
  char *v27; // rax
  FILE *v28; // rbx
  char *v29; // rax
  FILE *v30; // rbx
  char *v31; // rax
  FILE *v32; // rbx
  char *v33; // rax
  char *v34; // rax
  FILE *v35; // rbx
  char *v36; // rax
  FILE *v37; // rbx
  char *v38; // rax
  FILE *v39; // rbx
  char *v40; // rax
  FILE *v41; // rbx
  char *v42; // rax
  FILE *v43; // rbx
  char *v44; // rax

  if ( a1 )
  {
    v1 = qword_61DBB0;
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = qword_61DBB0;
    v4 = qword_61DBB0;
    v5 = gettext("Usage: %s [OPTION]... [FILE]...\n  or:  %s [OPTION]... --files0-from=F\n");
    printf(v5, v4, v3);
    v6 = stdout;
    v7 = gettext("Write sorted concatenation of all FILE(s) to standard output.\n\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("Ordering options:\n\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext(
            "  -b, --ignore-leading-blanks  ignore leading blanks\n"
            "  -d, --dictionary-order      consider only blanks and alphanumeric characters\n"
            "  -f, --ignore-case           fold lower case to upper case characters\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext(
            "  -g, --general-numeric-sort  compare according to general numerical value\n"
            "  -i, --ignore-nonprinting    consider only printable characters\n"
            "  -M, --month-sort            compare (unknown) < `JAN' < ... < `DEC'\n");
    fputs_unlocked(v15, v14);
    v16 = stdout;
    v17 = gettext("  -h, --human-numeric-sort    compare human readable numbers (e.g., 2K 1G)\n");
    fputs_unlocked(v17, v16);
    v18 = stdout;
    v19 = gettext(
            "  -n, --numeric-sort          compare according to string numerical value\n"
            "  -R, --random-sort           sort by random hash of keys\n"
            "      --random-source=FILE    get random bytes from FILE\n"
            "  -r, --reverse               reverse the result of comparisons\n");
    fputs_unlocked(v19, v18);
    v20 = stdout;
    v21 = gettext(
            "      --sort=WORD             sort according to WORD:\n"
            "                                general-numeric -g, human-numeric -h, month -M,\n"
            "                                numeric -n, random -R, version -V\n"
            "  -V, --version-sort          natural sort of (version) numbers within text\n"
            "\n");
    fputs_unlocked(v21, v20);
    v22 = stdout;
    v23 = gettext("Other options:\n\n");
    fputs_unlocked(v23, v22);
    v24 = stdout;
    v25 = gettext(
            "      --batch-size=NMERGE   merge at most NMERGE inputs at once;\n"
            "                            for more use temp files\n");
    fputs_unlocked(v25, v24);
    v26 = stdout;
    v27 = gettext(
            "  -c, --check, --check=diagnose-first  check for sorted input; do not sort\n"
            "  -C, --check=quiet, --check=silent  like -c, but do not report first bad line\n"
            "      --compress-program=PROG  compress temporaries with PROG;\n"
            "                              decompress them with PROG -d\n");
    fputs_unlocked(v27, v26);
    v28 = stdout;
    v29 = gettext(
            "      --debug               annotate the part of the line used to sort,\n"
            "                              and warn about questionable usage to stderr\n"
            "      --files0-from=F       read input from the files specified by\n"
            "                            NUL-terminated names in file F;\n"
            "                            If F is - then read names from standard input\n");
    fputs_unlocked(v29, v28);
    v30 = stdout;
    v31 = gettext(
            "  -k, --key=POS1[,POS2]     start a key at POS1 (origin 1), end it at POS2\n"
            "                            (default end of line).  See POS syntax below\n"
            "  -m, --merge               merge already sorted files; do not sort\n");
    fputs_unlocked(v31, v30);
    v32 = stdout;
    v33 = gettext(
            "  -o, --output=FILE         write result to FILE instead of standard output\n"
            "  -s, --stable              stabilize sort by disabling last-resort comparison\n"
            "  -S, --buffer-size=SIZE    use SIZE for main memory buffer\n");
    fputs_unlocked(v33, v32);
    v34 = gettext(
            "  -t, --field-separator=SEP  use SEP instead of non-blank to blank transition\n"
            "  -T, --temporary-directory=DIR  use DIR for temporaries, not $TMPDIR or %s;\n"
            "                              multiple options specify multiple directories\n"
            "      --parallel=N          change the number of sorts run concurrently to N\n"
            "  -u, --unique              with -c, check for strict ordering;\n"
            "                              without -c, output only the first of an equal run\n");
    printf(v34, "/tmp");
    v35 = stdout;
    v36 = gettext("  -z, --zero-terminated     end lines with 0 byte, not newline\n");
    fputs_unlocked(v36, v35);
    v37 = stdout;
    v38 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v38, v37);
    v39 = stdout;
    v40 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v40, v39);
    v41 = stdout;
    v42 = gettext(
            "\n"
            "POS is F[.C][OPTS], where F is the field number and C the character position\n"
            "in the field; both are origin 1.  If neither -t nor -b is in effect, characters\n"
            "in a field are counted from the beginning of the preceding whitespace.  OPTS is\n"
            "one or more single-letter ordering options, which override global ordering\n"
            "options for that key.  If no key is given, use the entire line as the key.\n"
            "\n"
            "SIZE may be followed by the following multiplicative suffixes:\n");
    fputs_unlocked(v42, v41);
    v43 = stdout;
    v44 = gettext(
            "% 1% of memory, b 1, K 1024 (default), and so on for M, G, T, P, E, Z, Y.\n"
            "\n"
            "With no FILE, or when FILE is -, read standard input.\n"
            "\n"
            "*** WARNING ***\n"
            "The locale specified by the environment affects sort order.\n"
            "Set LC_ALL=C to get the traditional sort order that uses\n"
            "native byte values.\n");
    fputs_unlocked(v44, v43);
    sub_402B52();
  }
  exit(a1);
}
