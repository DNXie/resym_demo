#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_40517C(int a1)
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
  FILE *v34; // rbx
  char *v35; // rax

  v1 = qword_610450;
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
    v5 = gettext("Paginate or columnate FILE(s) for printing.\n\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext(
           "  +FIRST_PAGE[:LAST_PAGE], --pages=FIRST_PAGE[:LAST_PAGE]\n"
           "                    begin [stop] printing with page FIRST_[LAST_]PAGE\n"
           "  -COLUMN, --columns=COLUMN\n"
           "                    output COLUMN columns and print columns down,\n"
           "                    unless -a is used. Balance number of lines in the\n"
           "                    columns on each page\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext(
            "  -a, --across      print columns across rather than down, used together\n"
            "                    with -COLUMN\n"
            "  -c, --show-control-chars\n"
            "                    use hat notation (^G) and octal backslash notation\n"
            "  -d, --double-space\n"
            "                    double space the output\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext(
            "  -D, --date-format=FORMAT\n"
            "                    use FORMAT for the header date\n"
            "  -e[CHAR[WIDTH]], --expand-tabs[=CHAR[WIDTH]]\n"
            "                    expand input CHARs (TABs) to tab WIDTH (8)\n"
            "  -F, -f, --form-feed\n"
            "                    use form feeds instead of newlines to separate pages\n"
            "                    (by a 3-line page header with -F or a 5-line header\n"
            "                    and trailer without -F)\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext(
            "  -h, --header=HEADER\n"
            "                    use a centered HEADER instead of filename in page header,\n"
            "                    -h \"\" prints a blank line, don't use -h\"\"\n"
            "  -i[CHAR[WIDTH]], --output-tabs[=CHAR[WIDTH]]\n"
            "                    replace spaces with CHARs (TABs) to tab WIDTH (8)\n"
            "  -J, --join-lines  merge full lines, turns off -W line truncation, no column\n"
            "                    alignment, --sep-string[=STRING] sets separators\n");
    fputs_unlocked(v15, v14);
    v16 = stdout;
    v17 = gettext(
            "  -l, --length=PAGE_LENGTH\n"
            "                    set the page length to PAGE_LENGTH (66) lines\n"
            "                    (default number of lines of text 56, and with -F 63)\n"
            "  -m, --merge       print all files in parallel, one in each column,\n"
            "                    truncate lines, but join lines of full length with -J\n");
    fputs_unlocked(v17, v16);
    v18 = stdout;
    v19 = gettext(
            "  -n[SEP[DIGITS]], --number-lines[=SEP[DIGITS]]\n"
            "                    number lines, use DIGITS (5) digits, then SEP (TAB),\n"
            "                    default counting starts with 1st line of input file\n"
            "  -N, --first-line-number=NUMBER\n"
            "                    start counting with NUMBER at 1st line of first\n"
            "                    page printed (see +FIRST_PAGE)\n");
    fputs_unlocked(v19, v18);
    v20 = stdout;
    v21 = gettext(
            "  -o, --indent=MARGIN\n"
            "                    offset each line with MARGIN (zero) spaces, do not\n"
            "                    affect -w or -W, MARGIN will be added to PAGE_WIDTH\n"
            "  -r, --no-file-warnings\n"
            "                    omit warning when a file cannot be opened\n");
    fputs_unlocked(v21, v20);
    v22 = stdout;
    v23 = gettext(
            "  -s[CHAR], --separator[=CHAR]\n"
            "                    separate columns by a single character, default for CHAR\n"
            "                    is the <TAB> character without -w and 'no char' with -w\n"
            "                    -s[CHAR] turns off line truncation of all 3 column\n"
            "                    options (-COLUMN|-a -COLUMN|-m) except -w is set\n");
    fputs_unlocked(v23, v22);
    v24 = stdout;
    v25 = gettext(
            "  -SSTRING, --sep-string[=STRING]\n"
            "                    separate columns by STRING,\n"
            "                    without -S: Default separator <TAB> with -J and <space>\n"
            "                    otherwise (same as -S\" \"), no effect on column options\n"
            "  -t, --omit-header  omit page headers and trailers\n");
    fputs_unlocked(v25, v24);
    v26 = stdout;
    v27 = gettext(
            "  -T, --omit-pagination\n"
            "                    omit page headers and trailers, eliminate any pagination\n"
            "                    by form feeds set in input files\n"
            "  -v, --show-nonprinting\n"
            "                    use octal backslash notation\n"
            "  -w, --width=PAGE_WIDTH\n"
            "                    set page width to PAGE_WIDTH (72) characters for\n"
            "                    multiple text-column output only, -s[char] turns off (72)\n");
    fputs_unlocked(v27, v26);
    v28 = stdout;
    v29 = gettext(
            "  -W, --page-width=PAGE_WIDTH\n"
            "                    set page width to PAGE_WIDTH (72) characters always,\n"
            "                    truncate lines, except -J option is set, no interference\n"
            "                    with -S or -s\n");
    fputs_unlocked(v29, v28);
    v30 = stdout;
    v31 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v31, v30);
    v32 = stdout;
    v33 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v33, v32);
    v34 = stdout;
    v35 = gettext("\n-t is implied if PAGE_LENGTH <= 10.  With no FILE, or when FILE is -, read\nstandard input.\n");
    fputs_unlocked(v35, v34);
    sub_401A9C();
  }
  exit(a1);
}
