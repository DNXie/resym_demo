#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401979(int a1)
{
  char *v1; // rbx
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

  v1 = s;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s [OPTION]... DIRECTORY...\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext(
           "Remove the DIRECTORY(ies), if they are empty.\n"
           "\n"
           "      --ignore-fail-on-non-empty\n"
           "                  ignore each failure that is solely because a directory\n"
           "                    is non-empty\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext(
           "  -p, --parents   remove DIRECTORY and its ancestors; e.g., `rmdir -p a/b/c' is\n"
           "                    similar to `rmdir a/b/c a/b a'\n"
           "  -v, --verbose   output a diagnostic for every directory processed\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v11, v10);
    sub_401688();
  }
  exit(a1);
}
