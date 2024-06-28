#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401D7B(int a1)
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

  v1 = qword_612398;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s OPTION... COMMAND\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext("Run COMMAND, with modified buffering operations for its standard streams.\n\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext(
           "  -i, --input=MODE   adjust standard input stream buffering\n"
           "  -o, --output=MODE  adjust standard output stream buffering\n"
           "  -e, --error=MODE   adjust standard error stream buffering\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v13, v12);
    v14 = stdout;
    v15 = gettext(
            "\n"
            "If MODE is `L' the corresponding stream will be line buffered.\n"
            "This option is invalid with standard input.\n");
    fputs_unlocked(v15, v14);
    v16 = stdout;
    v17 = gettext("\nIf MODE is `0' the corresponding stream will be unbuffered.\n");
    fputs_unlocked(v17, v16);
    v18 = stdout;
    v19 = gettext(
            "\n"
            "Otherwise MODE is a number which may be followed by one of the following:\n"
            "KB 1000, K 1024, MB 1000*1000, M 1024*1024, and so on for G, T, P, E, Z, Y.\n"
            "In this case the corresponding stream will be fully buffered with the buffer\n"
            "size set to MODE bytes.\n");
    fputs_unlocked(v19, v18);
    v20 = stdout;
    v21 = gettext(
            "\n"
            "NOTE: If COMMAND adjusts the buffering of its standard streams (`tee' does\n"
            "for e.g.) then that will override corresponding settings changed by `stdbuf'.\n"
            "Also some filters (like `dd' and `cat' etc.) don't use streams for I/O,\n"
            "and are thus unaffected by `stdbuf' settings.\n");
    fputs_unlocked(v21, v20);
    sub_401BF5();
  }
  exit(a1);
}
