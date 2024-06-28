#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_4018E6(int a1)
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

  v1 = qword_60A3A8;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s [OPTION]... FILE1 FILE2\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext(
           "For each pair of input lines with identical join fields, write a line to\n"
           "standard output.  The default join field is the first, delimited\n"
           "by whitespace.  When FILE1 or FILE2 (not both) is -, read standard input.\n"
           "\n"
           "  -a FILENUM        print unpairable lines coming from file FILENUM, where\n"
           "                      FILENUM is 1 or 2, corresponding to FILE1 or FILE2\n"
           "  -e EMPTY          replace missing input fields with EMPTY\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext(
           "  -i, --ignore-case  ignore differences in case when comparing fields\n"
           "  -j FIELD          equivalent to `-1 FIELD -2 FIELD'\n"
           "  -o FORMAT         obey FORMAT while constructing output line\n"
           "  -t CHAR           use CHAR as input and output field separator\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext(
           "  -v FILENUM        like -a FILENUM, but suppress joined output lines\n"
           "  -1 FIELD          join on this FIELD of file 1\n"
           "  -2 FIELD          join on this FIELD of file 2\n"
           "  --check-order     check that the input is correctly sorted, even\n"
           "                      if all input lines are pairable\n"
           "  --nocheck-order   do not check that the input is correctly sorted\n"
           "  --header          treat the first line in each file as field headers,\n"
           "                      print them without trying to pair them\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext(
            "\n"
            "Unless -t CHAR is given, leading blanks separate fields and are ignored,\n"
            "else fields are separated by CHAR.  Any FIELD is a field number counted\n"
            "from 1.  FORMAT is one or more comma or blank separated specifications,\n"
            "each being `FILENUM.FIELD' or `0'.  Default FORMAT outputs the join field,\n"
            "the remaining fields from FILE1, the remaining fields from FILE2, all\n"
            "separated by CHAR.  If FORMAT is the keyword 'auto', then the first\n"
            "line of each file determines the number of fields output for each line.\n"
            "\n"
            "Important: FILE1 and FILE2 must be sorted on the join fields.\n"
            "E.g., use ` sort -k 1b,1 ' if `join' has no options,\n"
            "or use ` join -t '' ' if `sort' has no options.\n"
            "Note, comparisons honor the rules specified by `LC_COLLATE'.\n"
            "If the input is not sorted and some lines cannot be joined, a\n"
            "warning message will be given.\n");
    fputs_unlocked(v15, v14);
    sub_4017DC();
  }
  exit(a1);
}
