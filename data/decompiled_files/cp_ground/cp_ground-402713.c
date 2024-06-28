#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_402713(int a1)
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
  FILE *v25; // rbx
  char *v26; // rax
  FILE *v27; // rbx
  char *v28; // rax
  FILE *v29; // rbx
  char *v30; // rax
  FILE *v31; // rbx
  char *v32; // rax
  FILE *v33; // rbx
  char *v34; // rax
  FILE *v35; // rbx
  char *v36; // rax
  FILE *v37; // rbx
  char *v38; // rax
  FILE *v39; // rbx
  char *v40; // rax
  FILE *v41; // rbx
  char *v42; // rax

  if ( a1 )
  {
    v1 = qword_61D900;
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = qword_61D900;
    v4 = qword_61D900;
    v5 = qword_61D900;
    v6 = gettext(
           "Usage: %s [OPTION]... [-T] SOURCE DEST\n"
           "  or:  %s [OPTION]... SOURCE... DIRECTORY\n"
           "  or:  %s [OPTION]... -t DIRECTORY SOURCE...\n");
    printf(v6, v5, v4, v3);
    v7 = stdout;
    v8 = gettext("Copy SOURCE to DEST, or multiple SOURCE(s) to DIRECTORY.\n\n");
    fputs_unlocked(v8, v7);
    v9 = stdout;
    v10 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v10, v9);
    v11 = stdout;
    v12 = gettext(
            "  -a, --archive                same as -dR --preserve=all\n"
            "      --attributes-only        don't copy the file data, just the attributes\n"
            "      --backup[=CONTROL]       make a backup of each existing destination file\n"
            "  -b                           like --backup but does not accept an argument\n"
            "      --copy-contents          copy contents of special files when recursive\n"
            "  -d                           same as --no-dereference --preserve=links\n");
    fputs_unlocked(v12, v11);
    v13 = stdout;
    v14 = gettext(
            "  -f, --force                  if an existing destination file cannot be\n"
            "                                 opened, remove it and try again (redundant if\n"
            "                                 the -n option is used)\n"
            "  -i, --interactive            prompt before overwrite (overrides a previous -n\n"
            "                                  option)\n"
            "  -H                           follow command-line symbolic links in SOURCE\n");
    fputs_unlocked(v14, v13);
    v15 = stdout;
    v16 = gettext(
            "  -l, --link                   hard link files instead of copying\n"
            "  -L, --dereference            always follow symbolic links in SOURCE\n");
    fputs_unlocked(v16, v15);
    v17 = stdout;
    v18 = gettext(
            "  -n, --no-clobber             do not overwrite an existing file (overrides\n"
            "                                 a previous -i option)\n"
            "  -P, --no-dereference         never follow symbolic links in SOURCE\n");
    fputs_unlocked(v18, v17);
    v19 = stdout;
    v20 = gettext(
            "  -p                           same as --preserve=mode,ownership,timestamps\n"
            "      --preserve[=ATTR_LIST]   preserve the specified attributes (default:\n"
            "                                 mode,ownership,timestamps), if possible\n"
            "                                 additional attributes: context, links, xattr,\n"
            "                                 all\n");
    fputs_unlocked(v20, v19);
    v21 = stdout;
    v22 = gettext(
            "      --no-preserve=ATTR_LIST  don't preserve the specified attributes\n"
            "      --parents                use full source file name under DIRECTORY\n");
    fputs_unlocked(v22, v21);
    v23 = stdout;
    v24 = gettext(
            "  -R, -r, --recursive          copy directories recursively\n"
            "      --reflink[=WHEN]         control clone/CoW copies. See below\n"
            "      --remove-destination     remove each existing destination file before\n"
            "                                 attempting to open it (contrast with --force)\n");
    fputs_unlocked(v24, v23);
    v25 = stdout;
    v26 = gettext(
            "      --sparse=WHEN            control creation of sparse files. See below\n"
            "      --strip-trailing-slashes  remove any trailing slashes from each SOURCE\n"
            "                                 argument\n");
    fputs_unlocked(v26, v25);
    v27 = stdout;
    v28 = gettext(
            "  -s, --symbolic-link          make symbolic links instead of copying\n"
            "  -S, --suffix=SUFFIX          override the usual backup suffix\n"
            "  -t, --target-directory=DIRECTORY  copy all SOURCE arguments into DIRECTORY\n"
            "  -T, --no-target-directory    treat DEST as a normal file\n");
    fputs_unlocked(v28, v27);
    v29 = stdout;
    v30 = gettext(
            "  -u, --update                 copy only when the SOURCE file is newer\n"
            "                                 than the destination file or when the\n"
            "                                 destination file is missing\n"
            "  -v, --verbose                explain what is being done\n"
            "  -x, --one-file-system        stay on this file system\n");
    fputs_unlocked(v30, v29);
    v31 = stdout;
    v32 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v32, v31);
    v33 = stdout;
    v34 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v34, v33);
    v35 = stdout;
    v36 = gettext(
            "\n"
            "By default, sparse SOURCE files are detected by a crude heuristic and the\n"
            "corresponding DEST file is made sparse as well.  That is the behavior\n"
            "selected by --sparse=auto.  Specify --sparse=always to create a sparse DEST\n"
            "file whenever the SOURCE file contains a long enough sequence of zero bytes.\n"
            "Use --sparse=never to inhibit creation of sparse files.\n"
            "\n"
            "When --reflink[=always] is specified, perform a lightweight copy, where the\n"
            "data blocks are copied only when modified.  If this is not possible the copy\n"
            "fails, or if --reflink=auto is specified, fall back to a standard copy.\n");
    fputs_unlocked(v36, v35);
    v37 = stdout;
    v38 = gettext(
            "\n"
            "The backup suffix is `~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\n"
            "The version control method may be selected via the --backup option or through\n"
            "the VERSION_CONTROL environment variable.  Here are the values:\n"
            "\n");
    fputs_unlocked(v38, v37);
    v39 = stdout;
    v40 = gettext(
            "  none, off       never make backups (even if --backup is given)\n"
            "  numbered, t     make numbered backups\n"
            "  existing, nil   numbered if numbered backups exist, simple otherwise\n"
            "  simple, never   always make simple backups\n");
    fputs_unlocked(v40, v39);
    v41 = stdout;
    v42 = gettext(
            "\n"
            "As a special case, cp makes a backup of SOURCE when the force and backup\n"
            "options are given and SOURCE and DEST are the same name for an existing,\n"
            "regular file.\n");
    fputs_unlocked(v42, v41);
    sub_4025DD();
  }
  exit(a1);
}
