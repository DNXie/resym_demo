#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401C08(int a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  char *v3; // rax
  char *v4; // rax
  FILE *v5; // rbx
  char *v6; // rax
  FILE *v7; // rbx
  char *v8; // rax
  FILE *v9; // rbx
  char *v10; // rax
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

  v1 = qword_610348;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s [OPTION]... [FILE]...\n");
    printf(v3, v1);
    v4 = gettext(
           "Print the last %d lines of each FILE to standard output.\n"
           "With more than one FILE, precede each with a header giving the file name.\n"
           "With no FILE, or when FILE is -, read standard input.\n"
           "\n");
    printf(v4, 10LL);
    v5 = stdout;
    v6 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v6, v5);
    v7 = stdout;
    v8 = gettext(
           "  -c, --bytes=K            output the last K bytes; alternatively, use -c +K\n"
           "                           to output bytes starting with the Kth of each file\n");
    fputs_unlocked(v8, v7);
    v9 = stdout;
    v10 = gettext(
            "  -f, --follow[={name|descriptor}]\n"
            "                           output appended data as the file grows;\n"
            "                           -f, --follow, and --follow=descriptor are\n"
            "                           equivalent\n"
            "  -F                       same as --follow=name --retry\n");
    fputs_unlocked(v10, v9);
    v11 = gettext(
            "  -n, --lines=K            output the last K lines, instead of the last %d;\n"
            "                           or use -n +K to output lines starting with the Kth\n"
            "      --max-unchanged-stats=N\n"
            "                           with --follow=name, reopen a FILE which has not\n"
            "                           changed size after N (default %d) iterations\n"
            "                           to see if it has been unlinked or renamed\n"
            "                           (this is the usual case of rotated log files).\n"
            "                           With inotify, this option is rarely useful.\n");
    printf(v11, 10LL, 5LL);
    v12 = stdout;
    v13 = gettext(
            "      --pid=PID            with -f, terminate after process ID, PID dies\n"
            "  -q, --quiet, --silent    never output headers giving file names\n"
            "      --retry              keep trying to open a file even when it is or\n"
            "                             becomes inaccessible; useful when following by\n"
            "                             name, i.e., with --follow=name\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext(
            "  -s, --sleep-interval=N   with -f, sleep for approximately N seconds\n"
            "                             (default 1.0) between iterations.\n"
            "                             With inotify and --pid=P, check process P at\n"
            "                             least once every N seconds.\n"
            "  -v, --verbose            always output headers giving file names\n");
    fputs_unlocked(v15, v14);
    v16 = stdout;
    v17 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v17, v16);
    v18 = stdout;
    v19 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v19, v18);
    v20 = stdout;
    v21 = gettext(
            "\n"
            "If the first character of K (the number of bytes or lines) is a `+',\n"
            "print beginning with the Kth item from the start of each file, otherwise,\n"
            "print the last K items in the file.  K may have a multiplier suffix:\n"
            "b 512, kB 1000, K 1024, MB 1000*1000, M 1024*1024,\n"
            "GB 1000*1000*1000, G 1024*1024*1024, and so on for T, P, E, Z, Y.\n"
            "\n");
    fputs_unlocked(v21, v20);
    v22 = stdout;
    v23 = gettext(
            "With --follow (-f), tail defaults to following the file descriptor, which\n"
            "means that even if a tail'ed file is renamed, tail will continue to track\n"
            "its end.  This default behavior is not desirable when you really want to\n"
            "track the actual name of the file, not the file descriptor (e.g., log\n"
            "rotation).  Use --follow=name in that case.  That causes tail to track the\n"
            "named file in a way that accommodates renaming, removal and creation.\n");
    fputs_unlocked(v23, v22);
    sub_401AE8();
  }
  exit(a1);
}
