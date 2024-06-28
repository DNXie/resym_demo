#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_4014D7(int a1)
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

  v1 = qword_607230;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s [OPTION]... NAME...\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext(
           "Diagnose invalid or unportable file names.\n"
           "\n"
           "  -p                  check for most POSIX systems\n"
           "  -P                  check for empty names and leading \"-\"\n"
           "      --portability   check for all POSIX systems (equivalent to -p -P)\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v9, v8);
    sub_4013CD();
  }
  exit(a1);
}
