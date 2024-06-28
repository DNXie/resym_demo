#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401D4B(int a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  __int64 v3; // r12
  __int64 v4; // rbx
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
  __int64 v20; // r12
  __int64 v21; // rbx
  char *v22; // rax

  if ( a1 )
  {
    v1 = qword_60F330;
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = qword_60F330;
    v4 = qword_60F330;
    v5 = gettext("Usage: %s [OPTION]... GROUP FILE...\n  or:  %s [OPTION]... --reference=RFILE FILE...\n");
    printf(v5, v4, v3);
    v6 = stdout;
    v7 = gettext(
           "Change the group of each FILE to GROUP.\n"
           "With --reference, change the group of each FILE to that of RFILE.\n"
           "\n"
           "  -c, --changes          like verbose but report only when a change is made\n"
           "      --dereference      affect the referent of each symbolic link (this is\n"
           "                         the default), rather than the symbolic link itself\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext(
           "  -h, --no-dereference   affect each symbolic link instead of any referenced\n"
           "                         file (useful only on systems that can change the\n"
           "                         ownership of a symlink)\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext(
            "      --no-preserve-root  do not treat `/' specially (the default)\n"
            "      --preserve-root    fail to operate recursively on `/'\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext(
            "  -f, --silent, --quiet  suppress most error messages\n"
            "      --reference=RFILE  use RFILE's group rather than specifying a\n"
            "                         GROUP value\n"
            "  -R, --recursive        operate on files and directories recursively\n"
            "  -v, --verbose          output a diagnostic for every file processed\n"
            "\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext(
            "The following options modify how a hierarchy is traversed when the -R\n"
            "option is also specified.  If more than one is specified, only the final\n"
            "one takes effect.\n"
            "\n"
            "  -H                     if a command line argument is a symbolic link\n"
            "                         to a directory, traverse it\n"
            "  -L                     traverse every symbolic link to a directory\n"
            "                         encountered\n"
            "  -P                     do not traverse any symbolic links (default)\n"
            "\n");
    fputs_unlocked(v15, v14);
    v16 = stdout;
    v17 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v17, v16);
    v18 = stdout;
    v19 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v19, v18);
    v20 = qword_60F330;
    v21 = qword_60F330;
    v22 = gettext(
            "\n"
            "Examples:\n"
            "  %s staff /u      Change the group of /u to \"staff\".\n"
            "  %s -hR staff /u  Change the group of /u and subfiles to \"staff\".\n");
    printf(v22, v21, v20);
    sub_401B7D();
  }
  exit(a1);
}
