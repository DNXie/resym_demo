#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401D12(int a1)
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
  __int64 v18; // r12
  __int64 v19; // rbx
  char *v20; // rax
  FILE *v21; // rbx
  char *v22; // rax

  v1 = qword_60F328;
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
           "Remove (unlink) the FILE(s).\n"
           "\n"
           "  -f, --force           ignore nonexistent files, never prompt\n"
           "  -i                    prompt before every removal\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext(
           "  -I                    prompt once before removing more than three files, or\n"
           "                          when removing recursively.  Less intrusive than -i,\n"
           "                          while still giving protection against most mistakes\n"
           "      --interactive[=WHEN]  prompt according to WHEN: never, once (-I), or\n"
           "                          always (-i).  Without WHEN, prompt always\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext(
           "      --one-file-system  when removing a hierarchy recursively, skip any\n"
           "                          directory that is on a file system different from\n"
           "                          that of the corresponding command line argument\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext(
            "      --no-preserve-root  do not treat `/' specially\n"
            "      --preserve-root   do not remove `/' (default)\n"
            "  -r, -R, --recursive   remove directories and their contents recursively\n"
            "  -v, --verbose         explain what is being done\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v15, v14);
    v16 = stdout;
    v17 = gettext(
            "\n"
            "By default, rm does not remove directories.  Use the --recursive (-r or -R)\n"
            "option to remove each listed directory, too, along with all of its contents.\n");
    fputs_unlocked(v17, v16);
    v18 = qword_60F328;
    v19 = qword_60F328;
    v20 = gettext(
            "\n"
            "To remove a file whose name starts with a `-', for example `-foo',\n"
            "use one of these commands:\n"
            "  %s -- -foo\n"
            "\n"
            "  %s ./-foo\n");
    printf(v20, v19, v18);
    v21 = stdout;
    v22 = gettext(
            "\n"
            "Note that if you use rm to remove a file, it might be possible to recover\n"
            "some of its contents, given sufficient expertise and/or time.  For greater\n"
            "assurance that the contents are truly unrecoverable, consider using shred.\n");
    fputs_unlocked(v22, v21);
    sub_401ADD();
  }
  exit(a1);
}
