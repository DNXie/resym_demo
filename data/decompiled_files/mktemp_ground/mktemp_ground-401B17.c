#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401B17(int a1)
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

  v1 = qword_60A310;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s [OPTION]... [TEMPLATE]\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext(
           "Create a temporary file or directory, safely, and print its name.\n"
           "TEMPLATE must contain at least 3 consecutive `X's in last component.\n"
           "If TEMPLATE is not specified, use tmp.XXXXXXXXXX, and --tmpdir is implied.\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("Files are created u+rw, and directories u+rwx, minus umask restrictions.\n");
    fputs_unlocked(v7, v6);
    fputc_unlocked(10, stdout);
    v8 = stdout;
    v9 = gettext(
           "  -d, --directory     create a directory, not a file\n"
           "  -u, --dry-run       do not create anything; merely print a name (unsafe)\n"
           "  -q, --quiet         suppress diagnostics about file/dir-creation failure\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext(
            "      --suffix=SUFF   append SUFF to TEMPLATE.  SUFF must not contain slash.\n"
            "                        This option is implied if TEMPLATE does not end in X.\n");
    fputs_unlocked(v11, v10);
    v12 = stdout;
    v13 = gettext(
            "      --tmpdir[=DIR]  interpret TEMPLATE relative to DIR.  If DIR is not\n"
            "                        specified, use $TMPDIR if set, else /tmp.  With\n"
            "                        this option, TEMPLATE must not be an absolute name.\n"
            "                        Unlike with -t, TEMPLATE may contain slashes, but\n"
            "                        mktemp creates only the final component\n");
    fputs_unlocked(v13, v12);
    fputc_unlocked(10, stdout);
    v14 = stdout;
    v15 = gettext(
            "  -p DIR              use DIR as a prefix; implies -t [deprecated]\n"
            "  -t                  interpret TEMPLATE as a single file name component,\n"
            "                        relative to a directory: $TMPDIR, if set; else the\n"
            "                        directory specified via -p; else /tmp [deprecated]\n");
    fputs_unlocked(v15, v14);
    fputc_unlocked(10, stdout);
    v16 = stdout;
    v17 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v17, v16);
    v18 = stdout;
    v19 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v19, v18);
    sub_401A0D();
  }
  exit(a1);
}
