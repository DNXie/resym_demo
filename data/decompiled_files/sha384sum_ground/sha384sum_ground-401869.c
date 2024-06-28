#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401869(int a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  char *v3; // rax
  FILE *v4; // rbx
  char *v5; // rax
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
  char *v17; // rax

  v1 = qword_6102B0;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext(
           "Usage: %s [OPTION]... [FILE]...\n"
           "Print or check %s (%d-bit) checksums.\n"
           "With no FILE, or when FILE is -, read standard input.\n"
           "\n");
    printf(v3, v1, "SHA384", 384LL);
    v4 = stdout;
    v5 = gettext("  -b, --binary         read in binary mode\n");
    fputs_unlocked(v5, v4);
    v6 = gettext("  -c, --check          read %s sums from the FILEs and check them\n");
    printf(v6, "SHA384");
    v7 = stdout;
    v8 = gettext("  -t, --text           read in text mode (default)\n");
    fputs_unlocked(v8, v7);
    v9 = stdout;
    v10 = gettext(
            "\n"
            "The following three options are useful only when verifying checksums:\n"
            "      --quiet          don't print OK for each successfully verified file\n"
            "      --status         don't output anything, status code shows success\n"
            "  -w, --warn           warn about improperly formatted checksum lines\n"
            "\n");
    fputs_unlocked(v10, v9);
    v11 = stdout;
    v12 = gettext("      --strict         with --check, exit non-zero for any invalid input\n");
    fputs_unlocked(v12, v11);
    v13 = stdout;
    v14 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v14, v13);
    v15 = stdout;
    v16 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v16, v15);
    v17 = gettext(
            "\n"
            "The sums are computed as described in %s.  When checking, the input\n"
            "should be a former output of this program.  The default mode is to print\n"
            "a line with checksum, a character indicating type (`*' for binary, ` ' for\n"
            "text), and name for each FILE.\n");
    printf(v17, "FIPS-180-2");
    sub_401751();
  }
  exit(a1);
}
