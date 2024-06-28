#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_4019AA(int a1)
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
  char *v12; // rax

  v1 = qword_6082B0;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s [OPTION]...\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext("Print the full filename of the current working directory.\n\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext(
           "  -L, --logical   use PWD from environment, even if it contains symlinks\n"
           "  -P, --physical  avoid all symlinks\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v11, v10);
    v12 = gettext(
            "\n"
            "NOTE: your shell may have its own version of %s, which usually supersedes\n"
            "the version described here.  Please refer to your shell's documentation\n"
            "for details about the options it supports.\n");
    printf(v12, "pwd");
    sub_4018A0();
  }
  exit(a1);
}
