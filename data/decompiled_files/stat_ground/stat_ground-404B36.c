#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_404B36(int a1)
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
  FILE *v20; // rbx
  char *v21; // rax
  FILE *v22; // rbx
  char *v23; // rax
  char *v24; // rax

  v1 = qword_616448;
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
           "Display file or file system status.\n"
           "\n"
           "  -L, --dereference     follow links\n"
           "  -f, --file-system     display file system status instead of file status\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext(
           "  -c  --format=FORMAT   use the specified FORMAT instead of the default;\n"
           "                          output a newline after each use of FORMAT\n"
           "      --printf=FORMAT   like --format, but interpret backslash escapes,\n"
           "                          and do not output a mandatory trailing newline.\n"
           "                          If you want a newline, include \\n in FORMAT\n"
           "  -t, --terse           print the information in terse form\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext(
            "\n"
            "The valid format sequences for files (without --file-system):\n"
            "\n"
            "  %a   Access rights in octal\n"
            "  %A   Access rights in human readable form\n"
            "  %b   Number of blocks allocated (see %B)\n"
            "  %B   The size in bytes of each block reported by %b\n"
            "  %C   SELinux security context string\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext(
            "  %d   Device number in decimal\n"
            "  %D   Device number in hex\n"
            "  %f   Raw mode in hex\n"
            "  %F   File type\n"
            "  %g   Group ID of owner\n"
            "  %G   Group name of owner\n");
    fputs_unlocked(v15, v14);
    v16 = stdout;
    v17 = gettext(
            "  %h   Number of hard links\n"
            "  %i   Inode number\n"
            "  %m   Mount point\n"
            "  %n   File name\n"
            "  %N   Quoted file name with dereference if symbolic link\n"
            "  %o   I/O block size\n"
            "  %s   Total size, in bytes\n"
            "  %t   Major device type in hex\n"
            "  %T   Minor device type in hex\n");
    fputs_unlocked(v17, v16);
    v18 = stdout;
    v19 = gettext(
            "  %u   User ID of owner\n"
            "  %U   User name of owner\n"
            "  %w   Time of file birth, human-readable; - if unknown\n"
            "  %W   Time of file birth, seconds since Epoch; 0 if unknown\n"
            "  %x   Time of last access, human-readable\n"
            "  %X   Time of last access, seconds since Epoch\n"
            "  %y   Time of last modification, human-readable\n"
            "  %Y   Time of last modification, seconds since Epoch\n"
            "  %z   Time of last change, human-readable\n"
            "  %Z   Time of last change, seconds since Epoch\n"
            "\n");
    fputs_unlocked(v19, v18);
    v20 = stdout;
    v21 = gettext(
            "Valid format sequences for file systems:\n"
            "\n"
            "  %a   Free blocks available to non-superuser\n"
            "  %b   Total data blocks in file system\n"
            "  %c   Total file nodes in file system\n"
            "  %d   Free file nodes in file system\n"
            "  %f   Free blocks in file system\n");
    fputs_unlocked(v21, v20);
    v22 = stdout;
    v23 = gettext(
            "  %i   File System ID in hex\n"
            "  %l   Maximum length of filenames\n"
            "  %n   File name\n"
            "  %s   Block size (for faster transfers)\n"
            "  %S   Fundamental block size (for block counts)\n"
            "  %t   Type in hex\n"
            "  %T   Type in human readable form\n");
    fputs_unlocked(v23, v22);
    v24 = gettext(
            "\n"
            "NOTE: your shell may have its own version of %s, which usually supersedes\n"
            "the version described here.  Please refer to your shell's documentation\n"
            "for details about the options it supports.\n");
    printf(v24, "stat");
    sub_40211A();
  }
  exit(a1);
}
