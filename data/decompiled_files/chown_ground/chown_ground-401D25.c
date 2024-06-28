#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401D25(int a1)
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
  FILE *v20; // rbx
  char *v21; // rax
  FILE *v22; // rbx
  char *v23; // rax
  __int64 v24; // r13
  __int64 v25; // r12
  __int64 v26; // rbx
  char *v27; // rax

  if ( a1 )
  {
    v1 = qword_60F350;
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = qword_60F350;
    v4 = qword_60F350;
    v5 = gettext("Usage: %s [OPTION]... [OWNER][:[GROUP]] FILE...\n  or:  %s [OPTION]... --reference=RFILE FILE...\n");
    printf(v5, v4, v3);
    v6 = stdout;
    v7 = gettext(
           "Change the owner and/or group of each FILE to OWNER and/or GROUP.\n"
           "With --reference, change the owner and group of each FILE to those of RFILE.\n"
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
            "      --from=CURRENT_OWNER:CURRENT_GROUP\n"
            "                         change the owner and/or group of each file only if\n"
            "                         its current owner and/or group match those specified\n"
            "                         here.  Either may be omitted, in which case a match\n"
            "                         is not required for the omitted attribute\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext(
            "      --no-preserve-root  do not treat `/' specially (the default)\n"
            "      --preserve-root    fail to operate recursively on `/'\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext(
            "  -f, --silent, --quiet  suppress most error messages\n"
            "      --reference=RFILE  use RFILE's owner and group rather than\n"
            "                         specifying OWNER:GROUP values\n"
            "  -R, --recursive        operate on files and directories recursively\n"
            "  -v, --verbose          output a diagnostic for every file processed\n"
            "\n");
    fputs_unlocked(v15, v14);
    v16 = stdout;
    v17 = gettext(
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
    fputs_unlocked(v17, v16);
    v18 = stdout;
    v19 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v19, v18);
    v20 = stdout;
    v21 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v21, v20);
    v22 = stdout;
    v23 = gettext(
            "\n"
            "Owner is unchanged if missing.  Group is unchanged if missing, but changed\n"
            "to login group if implied by a `:' following a symbolic OWNER.\n"
            "OWNER and GROUP may be numeric as well as symbolic.\n");
    fputs_unlocked(v23, v22);
    v24 = qword_60F350;
    v25 = qword_60F350;
    v26 = qword_60F350;
    v27 = gettext(
            "\n"
            "Examples:\n"
            "  %s root /u        Change the owner of /u to \"root\".\n"
            "  %s root:staff /u  Likewise, but also change its group to \"staff\".\n"
            "  %s -hR root /u    Change the owner of /u and subfiles to \"root\".\n");
    printf(v27, v26, v25, v24);
    sub_401C0D();
  }
  exit(a1);
}
