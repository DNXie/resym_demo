#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_4029FD(int a1)
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
  FILE *v19; // rbx
  char *v20; // rax
  FILE *v21; // rbx
  char *v22; // rax
  FILE *v23; // rbx
  char *v24; // rax

  if ( a1 )
  {
    v1 = qword_61B860;
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = qword_61B860;
    v4 = qword_61B860;
    v5 = qword_61B860;
    v6 = gettext(
           "Usage: %s [OPTION]... [-T] SOURCE DEST\n"
           "  or:  %s [OPTION]... SOURCE... DIRECTORY\n"
           "  or:  %s [OPTION]... -t DIRECTORY SOURCE...\n");
    printf(v6, v5, v4, v3);
    v7 = stdout;
    v8 = gettext("Rename SOURCE to DEST, or move SOURCE(s) to DIRECTORY.\n\n");
    fputs_unlocked(v8, v7);
    v9 = stdout;
    v10 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v10, v9);
    v11 = stdout;
    v12 = gettext(
            "      --backup[=CONTROL]       make a backup of each existing destination file\n"
            "  -b                           like --backup but does not accept an argument\n"
            "  -f, --force                  do not prompt before overwriting\n"
            "  -i, --interactive            prompt before overwrite\n"
            "  -n, --no-clobber             do not overwrite an existing file\n"
            "If you specify more than one of -i, -f, -n, only the final one takes effect.\n");
    fputs_unlocked(v12, v11);
    v13 = stdout;
    v14 = gettext(
            "      --strip-trailing-slashes  remove any trailing slashes from each SOURCE\n"
            "                                 argument\n"
            "  -S, --suffix=SUFFIX          override the usual backup suffix\n");
    fputs_unlocked(v14, v13);
    v15 = stdout;
    v16 = gettext(
            "  -t, --target-directory=DIRECTORY  move all SOURCE arguments into DIRECTORY\n"
            "  -T, --no-target-directory    treat DEST as a normal file\n"
            "  -u, --update                 move only when the SOURCE file is newer\n"
            "                                 than the destination file or when the\n"
            "                                 destination file is missing\n"
            "  -v, --verbose                explain what is being done\n");
    fputs_unlocked(v16, v15);
    v17 = stdout;
    v18 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v18, v17);
    v19 = stdout;
    v20 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v20, v19);
    v21 = stdout;
    v22 = gettext(
            "\n"
            "The backup suffix is `~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\n"
            "The version control method may be selected via the --backup option or through\n"
            "the VERSION_CONTROL environment variable.  Here are the values:\n"
            "\n");
    fputs_unlocked(v22, v21);
    v23 = stdout;
    v24 = gettext(
            "  none, off       never make backups (even if --backup is given)\n"
            "  numbered, t     make numbered backups\n"
            "  existing, nil   numbered if numbered backups exist, simple otherwise\n"
            "  simple, never   always make simple backups\n");
    fputs_unlocked(v24, v23);
    sub_40247D();
  }
  exit(a1);
}
