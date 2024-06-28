#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_4018F7(int a1)
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

  v1 = qword_609768;
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
           "Write each FILE to standard output, with line numbers added.\n"
           "With no FILE, or when FILE is -, read standard input.\n"
           "\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext(
           "  -b, --body-numbering=STYLE      use STYLE for numbering body lines\n"
           "  -d, --section-delimiter=CC      use CC for separating logical pages\n"
           "  -f, --footer-numbering=STYLE    use STYLE for numbering footer lines\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext(
            "  -h, --header-numbering=STYLE    use STYLE for numbering header lines\n"
            "  -i, --line-increment=NUMBER     line number increment at each line\n"
            "  -l, --join-blank-lines=NUMBER   group of NUMBER empty lines counted as one\n"
            "  -n, --number-format=FORMAT      insert line numbers according to FORMAT\n"
            "  -p, --no-renumber               do not reset line numbers at logical pages\n"
            "  -s, --number-separator=STRING   add STRING after (possible) line number\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext(
            "  -v, --starting-line-number=NUMBER  first line number on each logical page\n"
            "  -w, --number-width=NUMBER       use NUMBER columns for line numbers\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v15, v14);
    v16 = stdout;
    v17 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v17, v16);
    v18 = stdout;
    v19 = gettext(
            "\n"
            "By default, selects -v1 -i1 -l1 -sTAB -w6 -nrn -hn -bt -fn.  CC are\n"
            "two delimiter characters for separating logical pages, a missing\n"
            "second character implies :.  Type \\\\ for \\.  STYLE is one of:\n");
    fputs_unlocked(v19, v18);
    v20 = stdout;
    v21 = gettext(
            "\n"
            "  a         number all lines\n"
            "  t         number only nonempty lines\n"
            "  n         number no lines\n"
            "  pBRE      number only lines that contain a match for the basic regular\n"
            "            expression, BRE\n"
            "\n"
            "FORMAT is one of:\n"
            "\n"
            "  ln   left justified, no leading zeros\n"
            "  rn   right justified, no leading zeros\n"
            "  rz   right justified, leading zeros\n"
            "\n");
    fputs_unlocked(v21, v20);
    sub_4017ED();
  }
  exit(a1);
}
