#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_40ADC6(int a1)
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
  FILE *v24; // rbx
  char *v25; // rax
  FILE *v26; // rbx
  char *v27; // rax
  FILE *v28; // rbx
  char *v29; // rax
  FILE *v30; // rbx
  char *v31; // rax
  FILE *v32; // rbx
  char *v33; // rax
  FILE *v34; // rbx
  char *v35; // rax
  FILE *v36; // rbx
  char *v37; // rax
  FILE *v38; // rbx
  char *v39; // rax
  FILE *v40; // rbx
  char *v41; // rax
  FILE *v42; // rbx
  char *v43; // rax
  FILE *v44; // rbx
  char *v45; // rax
  FILE *v46; // rbx
  char *v47; // rax
  FILE *v48; // rbx
  char *v49; // rax
  FILE *v50; // rbx
  char *v51; // rax

  v1 = qword_61E1C0;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s [OPTION]... [FILE]...\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext(
           "List information about the FILEs (the current directory by default).\n"
           "Sort entries alphabetically if none of -cftuvSUX nor --sort is specified.\n"
           "\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext(
           "  -a, --all                  do not ignore entries starting with .\n"
           "  -A, --almost-all           do not list implied . and ..\n"
           "      --author               with -l, print the author of each file\n"
           "  -b, --escape               print C-style escapes for nongraphic characters\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext(
            "      --block-size=SIZE      scale sizes by SIZE before printing them.  E.g.,\n"
            "                               `--block-size=M' prints sizes in units of\n"
            "                               1,048,576 bytes.  See SIZE format below.\n"
            "  -B, --ignore-backups       do not list implied entries ending with ~\n"
            "  -c                         with -lt: sort by, and show, ctime (time of last\n"
            "                               modification of file status information)\n"
            "                               with -l: show ctime and sort by name\n"
            "                               otherwise: sort by ctime, newest first\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext(
            "  -C                         list entries by columns\n"
            "      --color[=WHEN]         colorize the output.  WHEN defaults to `always'\n"
            "                               or can be `never' or `auto'.  More info below\n"
            "  -d, --directory            list directory entries instead of contents,\n"
            "                               and do not dereference symbolic links\n"
            "  -D, --dired                generate output designed for Emacs' dired mode\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext(
            "  -f                         do not sort, enable -aU, disable -ls --color\n"
            "  -F, --classify             append indicator (one of */=>@|) to entries\n"
            "      --file-type            likewise, except do not append `*'\n"
            "      --format=WORD          across -x, commas -m, horizontal -x, long -l,\n"
            "                               single-column -1, verbose -l, vertical -C\n"
            "      --full-time            like -l --time-style=full-iso\n");
    fputs_unlocked(v15, v14);
    v16 = stdout;
    v17 = gettext("  -g                         like -l, but do not list owner\n");
    fputs_unlocked(v17, v16);
    v18 = stdout;
    v19 = gettext(
            "      --group-directories-first\n"
            "                             group directories before files.\n"
            "                               augment with a --sort option, but any\n"
            "                               use of --sort=none (-U) disables grouping\n");
    fputs_unlocked(v19, v18);
    v20 = stdout;
    v21 = gettext(
            "  -G, --no-group             in a long listing, don't print group names\n"
            "  -h, --human-readable       with -l, print sizes in human readable format\n"
            "                               (e.g., 1K 234M 2G)\n"
            "      --si                   likewise, but use powers of 1000 not 1024\n");
    fputs_unlocked(v21, v20);
    v22 = stdout;
    v23 = gettext(
            "  -H, --dereference-command-line\n"
            "                             follow symbolic links listed on the command line\n"
            "      --dereference-command-line-symlink-to-dir\n"
            "                             follow each command line symbolic link\n"
            "                             that points to a directory\n"
            "      --hide=PATTERN         do not list implied entries matching shell PATTERN\n"
            "                               (overridden by -a or -A)\n");
    fputs_unlocked(v23, v22);
    v24 = stdout;
    v25 = gettext(
            "      --indicator-style=WORD  append indicator with style WORD to entry names:\n"
            "                               none (default), slash (-p),\n"
            "                               file-type (--file-type), classify (-F)\n"
            "  -i, --inode                print the index number of each file\n"
            "  -I, --ignore=PATTERN       do not list implied entries matching shell PATTERN\n"
            "  -k                         like --block-size=1K\n");
    fputs_unlocked(v25, v24);
    v26 = stdout;
    v27 = gettext(
            "  -l                         use a long listing format\n"
            "  -L, --dereference          when showing file information for a symbolic\n"
            "                               link, show information for the file the link\n"
            "                               references rather than for the link itself\n"
            "  -m                         fill width with a comma separated list of entries\n");
    fputs_unlocked(v27, v26);
    v28 = stdout;
    v29 = gettext(
            "  -n, --numeric-uid-gid      like -l, but list numeric user and group IDs\n"
            "  -N, --literal              print raw entry names (don't treat e.g. control\n"
            "                               characters specially)\n"
            "  -o                         like -l, but do not list group information\n"
            "  -p, --indicator-style=slash\n"
            "                             append / indicator to directories\n");
    fputs_unlocked(v29, v28);
    v30 = stdout;
    v31 = gettext(
            "  -q, --hide-control-chars   print ? instead of non graphic characters\n"
            "      --show-control-chars   show non graphic characters as-is (default\n"
            "                             unless program is `ls' and output is a terminal)\n"
            "  -Q, --quote-name           enclose entry names in double quotes\n"
            "      --quoting-style=WORD   use quoting style WORD for entry names:\n"
            "                               literal, locale, shell, shell-always, c, escape\n");
    fputs_unlocked(v31, v30);
    v32 = stdout;
    v33 = gettext(
            "  -r, --reverse              reverse order while sorting\n"
            "  -R, --recursive            list subdirectories recursively\n"
            "  -s, --size                 print the allocated size of each file, in blocks\n");
    fputs_unlocked(v33, v32);
    v34 = stdout;
    v35 = gettext(
            "  -S                         sort by file size\n"
            "      --sort=WORD            sort by WORD instead of name: none -U,\n"
            "                             extension -X, size -S, time -t, version -v\n"
            "      --time=WORD            with -l, show time as WORD instead of modification\n"
            "                             time: atime -u, access -u, use -u, ctime -c,\n"
            "                             or status -c; use specified time as sort key\n"
            "                             if --sort=time\n");
    fputs_unlocked(v35, v34);
    v36 = stdout;
    v37 = gettext(
            "      --time-style=STYLE     with -l, show times using style STYLE:\n"
            "                             full-iso, long-iso, iso, locale, +FORMAT.\n"
            "                             FORMAT is interpreted like `date'; if FORMAT is\n"
            "                             FORMAT1<newline>FORMAT2, FORMAT1 applies to\n"
            "                             non-recent files and FORMAT2 to recent files;\n"
            "                             if STYLE is prefixed with `posix-', STYLE\n"
            "                             takes effect only outside the POSIX locale\n");
    fputs_unlocked(v37, v36);
    v38 = stdout;
    v39 = gettext(
            "  -t                         sort by modification time, newest first\n"
            "  -T, --tabsize=COLS         assume tab stops at each COLS instead of 8\n");
    fputs_unlocked(v39, v38);
    v40 = stdout;
    v41 = gettext(
            "  -u                         with -lt: sort by, and show, access time\n"
            "                               with -l: show access time and sort by name\n"
            "                               otherwise: sort by access time\n"
            "  -U                         do not sort; list entries in directory order\n"
            "  -v                         natural sort of (version) numbers within text\n");
    fputs_unlocked(v41, v40);
    v42 = stdout;
    v43 = gettext(
            "  -w, --width=COLS           assume screen width instead of current value\n"
            "  -x                         list entries by lines instead of by columns\n"
            "  -X                         sort alphabetically by entry extension\n"
            "  -Z, --context              print any SELinux security context of each file\n"
            "  -1                         list one file per line\n");
    fputs_unlocked(v43, v42);
    v44 = stdout;
    v45 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v45, v44);
    v46 = stdout;
    v47 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v47, v46);
    sub_40264C();
    v48 = stdout;
    v49 = gettext(
            "\n"
            "Using color to distinguish file types is disabled both by default and\n"
            "with --color=never.  With --color=auto, ls emits color codes only when\n"
            "standard output is connected to a terminal.  The LS_COLORS environment\n"
            "variable can change the settings.  Use the dircolors command to set it.\n");
    fputs_unlocked(v49, v48);
    v50 = stdout;
    v51 = gettext(
            "\n"
            "Exit status:\n"
            " 0  if OK,\n"
            " 1  if minor problems (e.g., cannot access subdirectory),\n"
            " 2  if serious trouble (e.g., cannot access command-line argument).\n");
    fputs_unlocked(v51, v50);
    sub_402678();
  }
  exit(a1);
}
