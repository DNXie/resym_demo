#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401A05(int a1)
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
  FILE *v12; // rbx
  char *v13; // rax

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
    v5 = gettext("Create the DIRECTORY(ies), if they do not already exist.\n\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext(
           "  -m, --mode=MODE   set file mode (as in chmod), not a=rwx - umask\n"
           "  -p, --parents     no error if existing, make parent directories as needed\n"
           "  -v, --verbose     print a message for each created directory\n"
           "  -Z, --context=CTX  set the SELinux security context of each created\n"
           "                      directory to CTX\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v13, v12);
    sub_4018FB();
  }
  exit(a1);
}
