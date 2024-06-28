#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401B97(int a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 v5; // rbx
  char *v6; // rax
  FILE *v7; // rbx
  char *v8; // rax
  FILE *v9; // rbx
  char *v10; // rax
  FILE *v11; // rbx
  char *v12; // rax
  FILE *v13; // rbx
  char *v14; // rax
  FILE *v15; // rbx
  char *v16; // rax
  FILE *v17; // rbx
  char *v18; // rax

  if ( a1 )
  {
    v1 = qword_60C310;
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = qword_60C310;
    v4 = qword_60C310;
    v5 = qword_60C310;
    v6 = gettext("Usage: %s [OPTION]... [FILE]\n  or:  %s -e [OPTION]... [ARG]...\n  or:  %s -i LO-HI [OPTION]...\n");
    printf(v6, v5, v4, v3);
    v7 = stdout;
    v8 = gettext("Write a random permutation of the input lines to standard output.\n\n");
    fputs_unlocked(v8, v7);
    v9 = stdout;
    v10 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v10, v9);
    v11 = stdout;
    v12 = gettext(
            "  -e, --echo                treat each ARG as an input line\n"
            "  -i, --input-range=LO-HI   treat each number LO through HI as an input line\n"
            "  -n, --head-count=COUNT    output at most COUNT lines\n"
            "  -o, --output=FILE         write result to FILE instead of standard output\n"
            "      --random-source=FILE  get random bytes from FILE\n"
            "  -z, --zero-terminated     end lines with 0 byte, not newline\n");
    fputs_unlocked(v12, v11);
    v13 = stdout;
    v14 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v14, v13);
    v15 = stdout;
    v16 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v16, v15);
    v17 = stdout;
    v18 = gettext("\nWith no FILE, or when FILE is -, read standard input.\n");
    fputs_unlocked(v18, v17);
    sub_401A8D();
  }
  exit(a1);
}
