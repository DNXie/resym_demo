#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_402794(int a1)
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
    v1 = qword_610360;
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = qword_610360;
    v4 = qword_610360;
    v5 = qword_610360;
    v6 = gettext(
           "Usage: %s [OPTION]... CONTEXT FILE...\n"
           "  or:  %s [OPTION]... [-u USER] [-r ROLE] [-l RANGE] [-t TYPE] FILE...\n"
           "  or:  %s [OPTION]... --reference=RFILE FILE...\n");
    printf(v6, v5, v4, v3);
    v7 = stdout;
    v8 = gettext(
           "Change the security context of each FILE to CONTEXT.\n"
           "With --reference, change the security context of each FILE to that of RFILE.\n"
           "\n"
           "  -h, --no-dereference   affect symbolic links instead of any referenced file\n");
    fputs_unlocked(v8, v7);
    v9 = stdout;
    v10 = gettext(
            "      --reference=RFILE  use RFILE's security context rather than specifying\n"
            "                         a CONTEXT value\n"
            "  -R, --recursive        operate on files and directories recursively\n"
            "  -v, --verbose          output a diagnostic for every file processed\n");
    fputs_unlocked(v10, v9);
    v11 = stdout;
    v12 = gettext(
            "  -u, --user=USER        set user USER in the target security context\n"
            "  -r, --role=ROLE        set role ROLE in the target security context\n"
            "  -t, --type=TYPE        set type TYPE in the target security context\n"
            "  -l, --range=RANGE      set range RANGE in the target security context\n"
            "\n");
    fputs_unlocked(v12, v11);
    v13 = stdout;
    v14 = gettext(
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
    fputs_unlocked(v14, v13);
    v15 = stdout;
    v16 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v16, v15);
    v17 = stdout;
    v18 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v18, v17);
    sub_401B1D();
  }
  exit(a1);
}
