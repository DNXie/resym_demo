#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_4026A0(int a1)
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
  FILE *v24; // rbx
  char *v25; // rax
  FILE *v26; // rbx
  char *v27; // rax

  if ( a1 )
  {
    v1 = qword_61B480;
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = qword_61B480;
    v4 = qword_61B480;
    v5 = gettext("Usage: %s [OPTION]... [FILE]...\n  or:  %s [OPTION]... --files0-from=F\n");
    printf(v5, v4, v3);
    v6 = stdout;
    v7 = gettext("Summarize disk usage of each FILE, recursively for directories.\n\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext(
            "  -a, --all             write counts for all files, not just directories\n"
            "      --apparent-size   print apparent sizes, rather than disk usage; although\n"
            "                          the apparent size is usually smaller, it may be\n"
            "                          larger due to holes in (`sparse') files, internal\n"
            "                          fragmentation, indirect blocks, and the like\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext(
            "  -B, --block-size=SIZE  scale sizes by SIZE before printing them.  E.g.,\n"
            "                           `-BM' prints sizes in units of 1,048,576 bytes.\n"
            "                           See SIZE format below.\n"
            "  -b, --bytes           equivalent to `--apparent-size --block-size=1'\n"
            "  -c, --total           produce a grand total\n"
            "  -D, --dereference-args  dereference only symlinks that are listed on the\n"
            "                          command line\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext(
            "      --files0-from=F   summarize disk usage of the NUL-terminated file\n"
            "                          names specified in file F;\n"
            "                          If F is - then read names from standard input\n"
            "  -H                    equivalent to --dereference-args (-D)\n"
            "  -h, --human-readable  print sizes in human readable format (e.g., 1K 234M 2G)\n"
            "      --si              like -h, but use powers of 1000 not 1024\n");
    fputs_unlocked(v15, v14);
    v16 = stdout;
    v17 = gettext(
            "  -k                    like --block-size=1K\n"
            "  -l, --count-links     count sizes many times if hard linked\n"
            "  -m                    like --block-size=1M\n");
    fputs_unlocked(v17, v16);
    v18 = stdout;
    v19 = gettext(
            "  -L, --dereference     dereference all symbolic links\n"
            "  -P, --no-dereference  don't follow any symbolic links (this is the default)\n"
            "  -0, --null            end each output line with 0 byte rather than newline\n"
            "  -S, --separate-dirs   do not include size of subdirectories\n"
            "  -s, --summarize       display only a total for each argument\n");
    fputs_unlocked(v19, v18);
    v20 = stdout;
    v21 = gettext(
            "  -x, --one-file-system    skip directories on different file systems\n"
            "  -X, --exclude-from=FILE  exclude files that match any pattern in FILE\n"
            "      --exclude=PATTERN    exclude files that match PATTERN\n"
            "  -d, --max-depth=N     print the total for a directory (or file, with --all)\n"
            "                          only if it is N or fewer levels below the command\n"
            "                          line argument;  --max-depth=0 is the same as\n"
            "                          --summarize\n");
    fputs_unlocked(v21, v20);
    v22 = stdout;
    v23 = gettext(
            "      --time            show time of the last modification of any file in the\n"
            "                          directory, or any of its subdirectories\n"
            "      --time=WORD       show time as WORD instead of modification time:\n"
            "                          atime, access, use, ctime or status\n"
            "      --time-style=STYLE  show times using style STYLE:\n"
            "                          full-iso, long-iso, iso, +FORMAT\n"
            "                          FORMAT is interpreted like `date'\n");
    fputs_unlocked(v23, v22);
    v24 = stdout;
    v25 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v25, v24);
    v26 = stdout;
    v27 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v27, v26);
    sub_402424((__int64)"DU");
    sub_4023F8();
    sub_402450();
  }
  exit(a1);
}
