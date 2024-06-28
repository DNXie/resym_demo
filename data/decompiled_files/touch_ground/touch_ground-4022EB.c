#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_4022EB(int a1)
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
  FILE *v18; // rbx
  char *v19; // rax

  v1 = qword_6113D8;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s [OPTION]... FILE...\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext(
           "Update the access and modification times of each FILE to the current time.\n"
           "\n"
           "A FILE argument that does not exist is created empty, unless -c or -h\n"
           "is supplied.\n"
           "\n"
           "A FILE argument string of - is handled specially and causes touch to\n"
           "change the times of the file associated with standard output.\n"
           "\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext(
           "  -a                     change only the access time\n"
           "  -c, --no-create        do not create any files\n"
           "  -d, --date=STRING      parse STRING and use it instead of current time\n"
           "  -f                     (ignored)\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext(
            "  -h, --no-dereference   affect each symbolic link instead of any referenced\n"
            "                         file (useful only on systems that can change the\n"
            "                         timestamps of a symlink)\n"
            "  -m                     change only the modification time\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext(
            "  -r, --reference=FILE   use this file's times instead of current time\n"
            "  -t STAMP               use [[CC]YY]MMDDhhmm[.ss] instead of current time\n"
            "  --time=WORD            change the specified time:\n"
            "                           WORD is access, atime, or use: equivalent to -a\n"
            "                           WORD is modify or mtime: equivalent to -m\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v15, v14);
    v16 = stdout;
    v17 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v17, v16);
    v18 = stdout;
    v19 = gettext("\nNote that the -d and -t options accept different time-date formats.\n");
    fputs_unlocked(v19, v18);
    sub_401E9D();
  }
  exit(a1);
}
