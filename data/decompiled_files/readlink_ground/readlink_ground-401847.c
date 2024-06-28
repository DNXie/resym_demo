#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401847(int a1)
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

  v1 = qword_60A290;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s [OPTION]... FILE\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext("Print value of a symbolic link or canonical file name\n\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext(
           "  -f, --canonicalize            canonicalize by following every symlink in\n"
           "                                every component of the given name recursively;\n"
           "                                all but the last component must exist\n"
           "  -e, --canonicalize-existing   canonicalize by following every symlink in\n"
           "                                every component of the given name recursively,\n"
           "                                all components must exist\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext(
           "  -m, --canonicalize-missing    canonicalize by following every symlink in\n"
           "                                every component of the given name recursively,\n"
           "                                without requirements on components existence\n"
           "  -n, --no-newline              do not output the trailing newline\n"
           "  -q, --quiet,\n"
           "  -s, --silent                  suppress most error messages\n"
           "  -v, --verbose                 report error messages\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v13, v12);
    sub_40173D();
  }
  exit(a1);
}
