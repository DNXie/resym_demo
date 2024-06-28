#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_40250B(int a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // rbx
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
  char *v24; // rax
  FILE *v25; // rbx
  char *v26; // rax

  if ( a1 )
  {
    v1 = qword_60C310;
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = qword_60C310;
    v4 = qword_60C310;
    v5 = qword_60C310;
    v6 = qword_60C310;
    v7 = gettext(
           "Usage: %s [OPTION]... [-T] TARGET LINK_NAME   (1st form)\n"
           "  or:  %s [OPTION]... TARGET                  (2nd form)\n"
           "  or:  %s [OPTION]... TARGET... DIRECTORY     (3rd form)\n"
           "  or:  %s [OPTION]... -t DIRECTORY TARGET...  (4th form)\n");
    printf(v7, v6, v5, v4, v3);
    v8 = stdout;
    v9 = gettext(
           "In the 1st form, create a link to TARGET with the name LINK_NAME.\n"
           "In the 2nd form, create a link to TARGET in the current directory.\n"
           "In the 3rd and 4th forms, create links to each TARGET in DIRECTORY.\n"
           "Create hard links by default, symbolic links with --symbolic.\n"
           "When creating hard links, each TARGET must exist.  Symbolic links\n"
           "can hold arbitrary text; if later resolved, a relative link is\n"
           "interpreted in relation to its parent directory.\n"
           "\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext(
            "      --backup[=CONTROL]      make a backup of each existing destination file\n"
            "  -b                          like --backup but does not accept an argument\n"
            "  -d, -F, --directory         allow the superuser to attempt to hard link\n"
            "                                directories (note: will probably fail due to\n"
            "                                system restrictions, even for the superuser)\n"
            "  -f, --force                 remove existing destination files\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext(
            "  -i, --interactive           prompt whether to remove destinations\n"
            "  -L, --logical               make hard links to symbolic link references\n"
            "  -n, --no-dereference        treat destination that is a symlink to a\n"
            "                                directory as if it were a normal file\n"
            "  -P, --physical              make hard links directly to symbolic links\n"
            "  -s, --symbolic              make symbolic links instead of hard links\n");
    fputs_unlocked(v15, v14);
    v16 = stdout;
    v17 = gettext(
            "  -S, --suffix=SUFFIX         override the usual backup suffix\n"
            "  -t, --target-directory=DIRECTORY  specify the DIRECTORY in which to create\n"
            "                                the links\n"
            "  -T, --no-target-directory   treat LINK_NAME as a normal file\n"
            "  -v, --verbose               print name of each linked file\n");
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
            "The backup suffix is `~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\n"
            "The version control method may be selected via the --backup option or through\n"
            "the VERSION_CONTROL environment variable.  Here are the values:\n"
            "\n");
    fputs_unlocked(v23, v22);
    v24 = gettext(
            "Using -s ignores -L and -P.  Otherwise, the last option specified controls\n"
            "behavior when the source is a symbolic link, defaulting to %s.\n"
            "\n");
    printf(v24, "-P");
    v25 = stdout;
    v26 = gettext(
            "  none, off       never make backups (even if --backup is given)\n"
            "  numbered, t     make numbered backups\n"
            "  existing, nil   numbered if numbered backups exist, simple otherwise\n"
            "  simple, never   always make simple backups\n");
    fputs_unlocked(v26, v25);
    sub_40192D();
  }
  exit(a1);
}
