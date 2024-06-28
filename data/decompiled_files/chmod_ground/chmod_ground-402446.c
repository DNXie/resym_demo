#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_402446(int a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 v5; // rbx
  char *v6; // rax
  FILE *v7; // rbx
  char *v8; // rax
  FILE *v9; // rbx
  char *v10; // rax
  FILE *v11; // rbx
  char *v12; // rax
  FILE *v13; // rbx
  char *v14; // rax
  FILE *v15; // rbx
  char *v16; // rax
  FILE *v17; // rbx
  char *v18; // rax

  if ( a1 )
  {
    v1 = qword_60E320;
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = qword_60E320;
    v4 = qword_60E320;
    v5 = qword_60E320;
    v6 = gettext(
           "Usage: %s [OPTION]... MODE[,MODE]... FILE...\n"
           "  or:  %s [OPTION]... OCTAL-MODE FILE...\n"
           "  or:  %s [OPTION]... --reference=RFILE FILE...\n");
    printf(v6, v5, v4, v3);
    v7 = stdout;
    v8 = gettext(
           "Change the mode of each FILE to MODE.\n"
           "\n"
           "  -c, --changes           like verbose but report only when a change is made\n");
    fputs_unlocked(v8, v7);
    v9 = stdout;
    v10 = gettext(
            "      --no-preserve-root  do not treat `/' specially (the default)\n"
            "      --preserve-root     fail to operate recursively on `/'\n");
    fputs_unlocked(v10, v9);
    v11 = stdout;
    v12 = gettext(
            "  -f, --silent, --quiet   suppress most error messages\n"
            "  -v, --verbose           output a diagnostic for every file processed\n"
            "      --reference=RFILE   use RFILE's mode instead of MODE values\n"
            "  -R, --recursive         change files and directories recursively\n");
    fputs_unlocked(v12, v11);
    v13 = stdout;
    v14 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v14, v13);
    v15 = stdout;
    v16 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v16, v15);
    v17 = stdout;
    v18 = gettext("\nEach MODE is of the form `[ugoa]*([-+=]([rwxXst]*|[ugo]))+'.\n");
    fputs_unlocked(v18, v17);
    sub_401997();
  }
  exit(a1);
}
