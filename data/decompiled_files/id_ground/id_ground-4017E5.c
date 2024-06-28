#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_4017E5(int a1)
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

  v1 = qword_6072B0;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s [OPTION]... [USERNAME]\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext(
           "Print user and group information for the specified USERNAME,\n"
           "or (when USERNAME omitted) for the current user.\n"
           "\n"
           "  -a              ignore, for compatibility with other versions\n"
           "  -Z, --context   print only the security context of the current user\n"
           "  -g, --group     print only the effective group ID\n"
           "  -G, --groups    print all group IDs\n"
           "  -n, --name      print a name instead of a number, for -ugG\n"
           "  -r, --real      print the real ID instead of the effective ID, with -ugG\n"
           "  -u, --user      print only the effective user ID\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("\nWithout any OPTION, print some useful set of identified information.\n");
    fputs_unlocked(v11, v10);
    sub_4016DB();
  }
  exit(a1);
}
