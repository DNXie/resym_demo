#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401936(int a1)
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

  v1 = qword_609300;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s [OPTION]... [INPUT [OUTPUT]]\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext(
           "Filter adjacent matching lines from INPUT (or standard input),\n"
           "writing to OUTPUT (or standard output).\n"
           "\n"
           "With no options, matching lines are merged to the first occurrence.\n"
           "\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext(
           "  -c, --count           prefix lines by the number of occurrences\n"
           "  -d, --repeated        only print duplicate lines\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext(
            "  -D, --all-repeated[=delimit-method]  print all duplicate lines\n"
            "                        delimit-method={none(default),prepend,separate}\n"
            "                        Delimiting is done with blank lines\n"
            "  -f, --skip-fields=N   avoid comparing the first N fields\n"
            "  -i, --ignore-case     ignore differences in case when comparing\n"
            "  -s, --skip-chars=N    avoid comparing the first N characters\n"
            "  -u, --unique          only print unique lines\n"
            "  -z, --zero-terminated  end lines with 0 byte, not newline\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext("  -w, --check-chars=N   compare no more than N characters in lines\n");
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
            "A field is a run of blanks (usually spaces and/or TABs), then non-blank\n"
            "characters.  Fields are skipped before chars.\n");
    fputs_unlocked(v19, v18);
    v20 = stdout;
    v21 = gettext(
            "\n"
            "Note: 'uniq' does not detect repeated lines unless they are adjacent.\n"
            "You may want to sort the input first, or use `sort -u' without `uniq'.\n"
            "Also, comparisons honor the rules specified by `LC_COLLATE'.\n");
    fputs_unlocked(v21, v20);
    sub_40182C();
  }
  exit(a1);
}
