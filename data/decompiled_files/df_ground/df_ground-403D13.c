#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_403D13(int a1)
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

  v1 = qword_6185C0;
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
    v5 = gettext("Show information about the file system on which each FILE resides,\nor all file systems by default.\n\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext(
           "  -a, --all             include dummy file systems\n"
           "  -B, --block-size=SIZE  scale sizes by SIZE before printing them.  E.g.,\n"
           "                           `-BM' prints sizes in units of 1,048,576 bytes.\n"
           "                           See SIZE format below.\n"
           "      --total           produce a grand total\n"
           "  -h, --human-readable  print sizes in human readable format (e.g., 1K 234M 2G)\n"
           "  -H, --si              likewise, but use powers of 1000 not 1024\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext(
            "  -i, --inodes          list inode information instead of block usage\n"
            "  -k                    like --block-size=1K\n"
            "  -l, --local           limit listing to local file systems\n"
            "      --no-sync         do not invoke sync before getting usage info (default)\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext(
            "  -P, --portability     use the POSIX output format\n"
            "      --sync            invoke sync before getting usage info\n"
            "  -t, --type=TYPE       limit listing to file systems of type TYPE\n"
            "  -T, --print-type      print file system type\n"
            "  -x, --exclude-type=TYPE   limit listing to file systems not of type TYPE\n"
            "  -v                    (ignored)\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v15, v14);
    v16 = stdout;
    v17 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v17, v16);
    sub_402289((__int64)"DF");
    sub_40225D();
    sub_4022B5();
  }
  exit(a1);
}
