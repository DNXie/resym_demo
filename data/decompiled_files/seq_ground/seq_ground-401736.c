#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401736(int a1)
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

  if ( a1 )
  {
    v1 = qword_60D2C8;
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = qword_60D2C8;
    v4 = qword_60D2C8;
    v5 = qword_60D2C8;
    v6 = gettext("Usage: %s [OPTION]... LAST\n  or:  %s [OPTION]... FIRST LAST\n  or:  %s [OPTION]... FIRST INCREMENT LAST\n");
    printf(v6, v5, v4, v3);
    v7 = stdout;
    v8 = gettext(
           "Print numbers from FIRST to LAST, in steps of INCREMENT.\n"
           "\n"
           "  -f, --format=FORMAT      use printf style floating-point FORMAT\n"
           "  -s, --separator=STRING   use STRING to separate numbers (default: \\n)\n"
           "  -w, --equal-width        equalize width by padding with leading zeroes\n");
    fputs_unlocked(v8, v7);
    v9 = stdout;
    v10 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v10, v9);
    v11 = stdout;
    v12 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v12, v11);
    v13 = stdout;
    v14 = gettext(
            "\n"
            "If FIRST or INCREMENT is omitted, it defaults to 1.  That is, an\n"
            "omitted INCREMENT defaults to 1 even when LAST is smaller than FIRST.\n"
            "FIRST, INCREMENT, and LAST are interpreted as floating point values.\n"
            "INCREMENT is usually positive if FIRST is smaller than LAST, and\n"
            "INCREMENT is usually negative if FIRST is greater than LAST.\n");
    fputs_unlocked(v14, v13);
    v15 = stdout;
    v16 = gettext(
            "FORMAT must be suitable for printing one argument of type `double';\n"
            "it defaults to %.PRECf if FIRST, INCREMENT, and LAST are all fixed point\n"
            "decimal numbers with maximum precision PREC, and to %g otherwise.\n");
    fputs_unlocked(v16, v15);
    sub_40162C();
  }
  exit(a1);
}
