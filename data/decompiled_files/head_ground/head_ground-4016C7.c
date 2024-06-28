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

  v1 = qword_609290;
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
           "Print the first 10 lines of each FILE to standard output.\n"
           "With more than one FILE, precede each with a header giving the file name.\n"
           "With no FILE, or when FILE is -, read standard input.\n"
           "\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext(
           "  -c, --bytes=[-]K         print the first K bytes of each file;\n"
           "                             with the leading `-', print all but the last\n"
           "                             K bytes of each file\n"
           "  -n, --lines=[-]K         print the first K lines instead of the first 10;\n"
           "                             with the leading `-', print all but the last\n"
           "                             K lines of each file\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext(
            "  -q, --quiet, --silent    never print headers giving file names\n"
            "  -v, --verbose            always print headers giving file names\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v15, v14);
    v16 = stdout;
    v17 = gettext(
            "\n"
            "K may have a multiplier suffix:\n"
            "b 512, kB 1000, K 1024, MB 1000*1000, M 1024*1024,\n"
            "GB 1000*1000*1000, G 1024*1024*1024, and so on for T, P, E, Z, Y.\n");
    fputs_unlocked(v17, v16);
    sub_4015BD();
  }
  exit(a1);
}
