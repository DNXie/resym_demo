#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401656(int a1)
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

  v1 = qword_6072B0;
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
           "Convert tabs in each FILE to spaces, writing to standard output.\n"
           "With no FILE, or when FILE is -, read standard input.\n"
           "\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext(
           "  -i, --initial       do not convert tabs after non blanks\n"
           "  -t, --tabs=NUMBER   have tabs NUMBER characters apart, not 8\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("  -t, --tabs=LIST     use comma separated list of explicit tab positions\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v15, v14);
    sub_40154C();
  }
  exit(a1);
}
