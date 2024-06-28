#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401635(int a1)
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
  char *v20; // rax

  v1 = qword_607270;
  if ( a1 )
  {
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = gettext("Usage: %s [OPTION]... NAME TYPE [MAJOR MINOR]\n");
    printf(v3, v1);
    v4 = stdout;
    v5 = gettext("Create the special file NAME of the given TYPE.\n\n");
    fputs_unlocked(v5, v4);
    v6 = stdout;
    v7 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext("  -m, --mode=MODE    set file permission bits to MODE, not a=rw - umask\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("  -Z, --context=CTX  set the SELinux security context of NAME to CTX\n");
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
            "Both MAJOR and MINOR must be specified when TYPE is b, c, or u, and they\n"
            "must be omitted when TYPE is p.  If MAJOR or MINOR begins with 0x or 0X,\n"
            "it is interpreted as hexadecimal; otherwise, if it begins with 0, as octal;\n"
            "otherwise, as decimal.  TYPE may be:\n");
    fputs_unlocked(v17, v16);
    v18 = stdout;
    v19 = gettext(
            "\n"
            "  b      create a block (buffered) special file\n"
            "  c, u   create a character (unbuffered) special file\n"
            "  p      create a FIFO\n");
    fputs_unlocked(v19, v18);
    v20 = gettext(
            "\n"
            "NOTE: your shell may have its own version of %s, which usually supersedes\n"
            "the version described here.  Please refer to your shell's documentation\n"
            "for details about the options it supports.\n");
    printf(v20, "mknod");
    sub_40152B();
  }
  exit(a1);
}
