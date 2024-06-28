#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_4016C7(int a1)
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
  __int64 v20; // r12
  __int64 v21; // rbx
  char *v22; // rax

  v1 = qword_608288;
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
    v5 = gettext("Compare sorted files FILE1 and FILE2 line by line.\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext(
           "\n"
           "With no options, produce three-column output.  Column one contains\n"
           "lines unique to FILE1, column two contains lines unique to FILE2,\n"
           "and column three contains lines common to both files.\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext(
           "\n"
           "  -1              suppress column 1 (lines unique to FILE1)\n"
           "  -2              suppress column 2 (lines unique to FILE2)\n"
           "  -3              suppress column 3 (lines that appear in both files)\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext(
            "\n"
            "  --check-order     check that the input is correctly sorted, even\n"
            "                      if all input lines are pairable\n"
            "  --nocheck-order   do not check that the input is correctly sorted\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext("  --output-delimiter=STR  separate columns with STR\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v15, v14);
    v16 = stdout;
    v17 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v17, v16);
    v18 = stdout;
    v19 = gettext("\nNote, comparisons honor the rules specified by `LC_COLLATE'.\n");
    fputs_unlocked(v19, v18);
    v20 = qword_608288;
    v21 = qword_608288;
    v22 = gettext(
            "\n"
            "Examples:\n"
            "  %s -12 file1 file2  Print only lines present in both file1 and file2.\n"
            "  %s -3 file1 file2  Print lines in file1 not in file2, and vice versa.\n");
    printf(v22, v21, v20);
    sub_4015BD();
  }
  exit(a1);
}
