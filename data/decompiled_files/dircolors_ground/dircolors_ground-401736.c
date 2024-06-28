#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401736(int a1)
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

  v1 = qword_6092C8;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s [OPTION]... [FILE]\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext(
           "Output commands to set the LS_COLORS environment variable.\n"
           "\n"
           "Determine format of output:\n"
           "  -b, --sh, --bourne-shell    output Bourne shell code to set LS_COLORS\n"
           "  -c, --csh, --c-shell        output C shell code to set LS_COLORS\n"
           "  -p, --print-database        output defaults\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext(
            "\n"
            "If FILE is specified, read it to determine which colors to use for which\n"
            "file types and extensions.  Otherwise, a precompiled database is used.\n"
            "For details on the format of these files, run `dircolors --print-database'.\n");
    fputs_unlocked(v11, v10);
    sub_40162C();
  }
  exit(a1);
}
