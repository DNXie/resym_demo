#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401BDE(int a1)
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

  v1 = qword_60C300;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s OPTION... FILE...\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext(
           "Shrink or extend the size of each FILE to the specified size\n"
           "\n"
           "A FILE argument that does not exist is created.\n"
           "\n"
           "If a FILE is larger than the specified size, the extra data is lost.\n"
           "If a FILE is shorter, it is extended and the extended part (hole)\n"
           "reads as zero bytes.\n"
           "\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext("  -c, --no-create        do not create any files\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("  -o, --io-blocks        treat SIZE as number of IO blocks instead of bytes\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext(
            "  -r, --reference=RFILE  base size on RFILE\n"
            "  -s, --size=SIZE        set or adjust the file size by SIZE\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v15, v14);
    v16 = stdout;
    v17 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v17, v16);
    sub_401A2C();
    v18 = stdout;
    v19 = gettext(
            "\n"
            "SIZE may also be prefixed by one of the following modifying characters:\n"
            "`+' extend by, `-' reduce by, `<' at most, `>' at least,\n"
            "`/' round down to multiple of, `%' round up to multiple of.\n");
    fputs_unlocked(v19, v18);
    sub_401A58();
  }
  exit(a1);
}
