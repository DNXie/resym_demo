#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_403773(int a1)
{
  char *v1; // rbx
  char *v2; // rax
  char *v3; // r14
  char *v4; // r13
  char *v5; // r12
  char *v6; // rbx
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
  FILE *v24; // rbx
  char *v25; // rax
  FILE *v26; // rbx
  char *v27; // rax

  if ( a1 )
  {
    v1 = s;
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = s;
    v4 = s;
    v5 = s;
    v6 = s;
    v7 = gettext(
           "Usage: %s [OPTION]... [-T] SOURCE DEST\n"
           "  or:  %s [OPTION]... SOURCE... DIRECTORY\n"
           "  or:  %s [OPTION]... -t DIRECTORY SOURCE...\n"
           "  or:  %s [OPTION]... -d DIRECTORY...\n");
    printf(v7, v6, v5, v4, v3);
    v8 = stdout;
    v9 = gettext(
           "\n"
           "This install program copies files (often just compiled) into destination\n"
           "locations you choose.  If you want to download and install a ready-to-use\n"
           "package on a GNU/Linux system, you should instead be using a package manager\n"
           "like yum(1) or apt-get(1).\n"
           "\n"
           "In the first three forms, copy SOURCE to DEST or multiple SOURCE(s) to\n"
           "the existing DIRECTORY, while setting permission modes and owner/group.\n"
           "In the 4th form, create all components of the given DIRECTORY(ies).\n"
           "\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext(
            "      --backup[=CONTROL]  make a backup of each existing destination file\n"
            "  -b                  like --backup but does not accept an argument\n"
            "  -c                  (ignored)\n"
            "  -C, --compare       compare each pair of source and destination files, and\n"
            "                        in some cases, do not modify the destination at all\n"
            "  -d, --directory     treat all arguments as directory names; create all\n"
            "                        components of the specified directories\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext(
            "  -D                  create all leading components of DEST except the last,\n"
            "                        then copy SOURCE to DEST\n"
            "  -g, --group=GROUP   set group ownership, instead of process' current group\n"
            "  -m, --mode=MODE     set permission mode (as in chmod), instead of rwxr-xr-x\n"
            "  -o, --owner=OWNER   set ownership (super-user only)\n");
    fputs_unlocked(v15, v14);
    v16 = stdout;
    v17 = gettext(
            "  -p, --preserve-timestamps   apply access/modification times of SOURCE files\n"
            "                        to corresponding destination files\n"
            "  -s, --strip         strip symbol tables\n"
            "      --strip-program=PROGRAM  program used to strip binaries\n"
            "  -S, --suffix=SUFFIX  override the usual backup suffix\n"
            "  -t, --target-directory=DIRECTORY  copy all SOURCE arguments into DIRECTORY\n"
            "  -T, --no-target-directory  treat DEST as a normal file\n"
            "  -v, --verbose       print the name of each directory as it is created\n");
    fputs_unlocked(v17, v16);
    v18 = stdout;
    v19 = gettext(
            "      --preserve-context  preserve SELinux security context\n"
            "  -Z, --context=CONTEXT  set SELinux security context of files and directories\n");
    fputs_unlocked(v19, v18);
    v20 = stdout;
    v21 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v21, v20);
    v22 = stdout;
    v23 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v23, v22);
    v24 = stdout;
    v25 = gettext(
            "\n"
            "The backup suffix is `~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\n"
            "The version control method may be selected via the --backup option or through\n"
            "the VERSION_CONTROL environment variable.  Here are the values:\n"
            "\n");
    fputs_unlocked(v25, v24);
    v26 = stdout;
    v27 = gettext(
            "  none, off       never make backups (even if --backup is given)\n"
            "  numbered, t     make numbered backups\n"
            "  existing, nil   numbered if numbered backups exist, simple otherwise\n"
            "  simple, never   always make simple backups\n");
    fputs_unlocked(v27, v26);
    sub_40277E();
  }
  exit(a1);
}
