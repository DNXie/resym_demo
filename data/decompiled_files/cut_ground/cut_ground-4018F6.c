#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_4018F6(int a1)
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

  v1 = qword_60B310;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s OPTION... [FILE]...\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext("Print selected parts of lines from each FILE to standard output.\n\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext(
           "  -b, --bytes=LIST        select only these bytes\n"
           "  -c, --characters=LIST   select only these characters\n"
           "  -d, --delimiter=DELIM   use DELIM instead of TAB for field delimiter\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext(
            "  -f, --fields=LIST       select only these fields;  also print any line\n"
            "                            that contains no delimiter character, unless\n"
            "                            the -s option is specified\n"
            "  -n                      (ignored)\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext(
            "      --complement        complement the set of selected bytes, characters\n"
            "                            or fields\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext(
            "  -s, --only-delimited    do not print lines not containing delimiters\n"
            "      --output-delimiter=STRING  use STRING as the output delimiter\n"
            "                            the default is to use the input delimiter\n");
    fputs_unlocked(v15, v14);
    v16 = stdout;
    v17 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v17, v16);
    v18 = stdout;
    v19 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v19, v18);
    v20 = stdout;
    v21 = gettext(
            "\n"
            "Use one, and only one of -b, -c or -f.  Each LIST is made up of one\n"
            "range, or many ranges separated by commas.  Selected input is written\n"
            "in the same order that it is read, and is written exactly once.\n");
    fputs_unlocked(v21, v20);
    v22 = stdout;
    v23 = gettext(
            "Each range is one of:\n"
            "\n"
            "  N     N'th byte, character or field, counted from 1\n"
            "  N-    from N'th byte, character or field, to end of line\n"
            "  N-M   from N'th to M'th (included) byte, character or field\n"
            "  -M    from first to M'th (included) byte, character or field\n"
            "\n"
            "With no FILE, or when FILE is -, read standard input.\n");
    fputs_unlocked(v23, v22);
    sub_4017EC();
  }
  exit(a1);
}
