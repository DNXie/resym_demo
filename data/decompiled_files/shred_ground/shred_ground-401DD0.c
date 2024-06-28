#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401DD0(int a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  char *v3; // rax
  FILE *v4; // rbx
  char *v5; // rax
  FILE *v6; // rbx
  char *v7; // rax
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

  v1 = qword_60D358;
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
           "Overwrite the specified FILE(s) repeatedly, in order to make it harder\n"
           "for even very expensive hardware probing to recover the data.\n"
           "\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v7, v6);
    v8 = gettext(
           "  -f, --force    change permissions to allow writing if necessary\n"
           "  -n, --iterations=N  overwrite N times instead of the default (%d)\n"
           "      --random-source=FILE  get random bytes from FILE\n"
           "  -s, --size=N   shred this many bytes (suffixes like K, M, G accepted)\n");
    printf(v8, 3LL);
    v9 = stdout;
    v10 = gettext(
            "  -u, --remove   truncate and remove file after overwriting\n"
            "  -v, --verbose  show progress\n"
            "  -x, --exact    do not round file sizes up to the next full block;\n"
            "                   this is the default for non-regular files\n"
            "  -z, --zero     add a final overwrite with zeros to hide shredding\n");
    fputs_unlocked(v10, v9);
    v11 = stdout;
    v12 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v12, v11);
    v13 = stdout;
    v14 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v14, v13);
    v15 = stdout;
    v16 = gettext(
            "\n"
            "If FILE is -, shred standard output.\n"
            "\n"
            "Delete FILE(s) if --remove (-u) is specified.  The default is not to remove\n"
            "the files because it is common to operate on device files like /dev/hda,\n"
            "and those files usually should not be removed.  When operating on regular\n"
            "files, most people use the --remove option.\n"
            "\n");
    fputs_unlocked(v16, v15);
    v17 = stdout;
    v18 = gettext(
            "CAUTION: Note that shred relies on a very important assumption:\n"
            "that the file system overwrites data in place.  This is the traditional\n"
            "way to do things, but many modern file system designs do not satisfy this\n"
            "assumption.  The following are examples of file systems on which shred is\n"
            "not effective, or is not guaranteed to be effective in all file system modes:\n"
            "\n");
    fputs_unlocked(v18, v17);
    v19 = stdout;
    v20 = gettext(
            "* log-structured or journaled file systems, such as those supplied with\n"
            "AIX and Solaris (and JFS, ReiserFS, XFS, Ext3, etc.)\n"
            "\n"
            "* file systems that write redundant data and carry on even if some writes\n"
            "fail, such as RAID-based file systems\n"
            "\n"
            "* file systems that make snapshots, such as Network Appliance's NFS server\n"
            "\n");
    fputs_unlocked(v20, v19);
    v21 = stdout;
    v22 = gettext(
            "* file systems that cache in temporary locations, such as NFS\n"
            "version 3 clients\n"
            "\n"
            "* compressed file systems\n"
            "\n");
    fputs_unlocked(v22, v21);
    v23 = stdout;
    v24 = gettext(
            "In the case of ext3 file systems, the above disclaimer applies\n"
            "(and shred is thus of limited effectiveness) only in data=journal mode,\n"
            "which journals file data in addition to just metadata.  In both the\n"
            "data=ordered (default) and data=writeback modes, shred works as usual.\n"
            "Ext3 journaling modes can be changed by adding the data=something option\n"
            "to the mount options for a particular file system in the /etc/fstab file,\n"
            "as documented in the mount man page (man mount).\n"
            "\n");
    fputs_unlocked(v24, v23);
    v25 = stdout;
    v26 = gettext(
            "In addition, file system backups and remote mirrors may contain copies\n"
            "of the file that cannot be removed, and that will allow a shredded file\n"
            "to be recovered later.\n");
    fputs_unlocked(v26, v25);
    sub_401C9D();
  }
  exit(a1);
}
