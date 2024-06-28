#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_4035DC(int a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  FILE *v3; // rbx
  char *v4; // rax
  FILE *v5; // rbx
  char *v6; // rax
  FILE *v7; // rbx
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
  FILE *v27; // rbx
  char *v28; // rax
  FILE *v29; // rbx
  char *v30; // rax
  FILE *v31; // rbx
  char *v32; // rax
  char *v33; // rbx
  char *v34; // rax

  if ( a1 )
  {
    v1 = qword_609250;
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = stdout;
    v4 = gettext("Usage: test EXPRESSION\n  or:  test\n  or:  [ EXPRESSION ]\n  or:  [ ]\n  or:  [ OPTION\n");
    fputs_unlocked(v4, v3);
    v5 = stdout;
    v6 = gettext("Exit with the status determined by EXPRESSION.\n\n");
    fputs_unlocked(v6, v5);
    v7 = stdout;
    v8 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v8, v7);
    v9 = stdout;
    v10 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v10, v9);
    v11 = stdout;
    v12 = gettext(
            "\n"
            "An omitted EXPRESSION defaults to false.  Otherwise,\n"
            "EXPRESSION is true or false and sets exit status.  It is one of:\n");
    fputs_unlocked(v12, v11);
    v13 = stdout;
    v14 = gettext(
            "\n"
            "  ( EXPRESSION )               EXPRESSION is true\n"
            "  ! EXPRESSION                 EXPRESSION is false\n"
            "  EXPRESSION1 -a EXPRESSION2   both EXPRESSION1 and EXPRESSION2 are true\n"
            "  EXPRESSION1 -o EXPRESSION2   either EXPRESSION1 or EXPRESSION2 is true\n");
    fputs_unlocked(v14, v13);
    v15 = stdout;
    v16 = gettext(
            "\n"
            "  -n STRING            the length of STRING is nonzero\n"
            "  STRING               equivalent to -n STRING\n"
            "  -z STRING            the length of STRING is zero\n"
            "  STRING1 = STRING2    the strings are equal\n"
            "  STRING1 != STRING2   the strings are not equal\n");
    fputs_unlocked(v16, v15);
    v17 = stdout;
    v18 = gettext(
            "\n"
            "  INTEGER1 -eq INTEGER2   INTEGER1 is equal to INTEGER2\n"
            "  INTEGER1 -ge INTEGER2   INTEGER1 is greater than or equal to INTEGER2\n"
            "  INTEGER1 -gt INTEGER2   INTEGER1 is greater than INTEGER2\n"
            "  INTEGER1 -le INTEGER2   INTEGER1 is less than or equal to INTEGER2\n"
            "  INTEGER1 -lt INTEGER2   INTEGER1 is less than INTEGER2\n"
            "  INTEGER1 -ne INTEGER2   INTEGER1 is not equal to INTEGER2\n");
    fputs_unlocked(v18, v17);
    v19 = stdout;
    v20 = gettext(
            "\n"
            "  FILE1 -ef FILE2   FILE1 and FILE2 have the same device and inode numbers\n"
            "  FILE1 -nt FILE2   FILE1 is newer (modification date) than FILE2\n"
            "  FILE1 -ot FILE2   FILE1 is older than FILE2\n");
    fputs_unlocked(v20, v19);
    v21 = stdout;
    v22 = gettext(
            "\n"
            "  -b FILE     FILE exists and is block special\n"
            "  -c FILE     FILE exists and is character special\n"
            "  -d FILE     FILE exists and is a directory\n"
            "  -e FILE     FILE exists\n");
    fputs_unlocked(v22, v21);
    v23 = stdout;
    v24 = gettext(
            "  -f FILE     FILE exists and is a regular file\n"
            "  -g FILE     FILE exists and is set-group-ID\n"
            "  -G FILE     FILE exists and is owned by the effective group ID\n"
            "  -h FILE     FILE exists and is a symbolic link (same as -L)\n"
            "  -k FILE     FILE exists and has its sticky bit set\n");
    fputs_unlocked(v24, v23);
    v25 = stdout;
    v26 = gettext(
            "  -L FILE     FILE exists and is a symbolic link (same as -h)\n"
            "  -O FILE     FILE exists and is owned by the effective user ID\n"
            "  -p FILE     FILE exists and is a named pipe\n"
            "  -r FILE     FILE exists and read permission is granted\n"
            "  -s FILE     FILE exists and has a size greater than zero\n");
    fputs_unlocked(v26, v25);
    v27 = stdout;
    v28 = gettext(
            "  -S FILE     FILE exists and is a socket\n"
            "  -t FD       file descriptor FD is opened on a terminal\n"
            "  -u FILE     FILE exists and its set-user-ID bit is set\n"
            "  -w FILE     FILE exists and write permission is granted\n"
            "  -x FILE     FILE exists and execute (or search) permission is granted\n");
    fputs_unlocked(v28, v27);
    v29 = stdout;
    v30 = gettext(
            "\n"
            "Except for -h and -L, all FILE-related tests dereference symbolic links.\n"
            "Beware that parentheses need to be escaped (e.g., by backslashes) for shells.\n"
            "INTEGER may also be -l STRING, which evaluates to the length of STRING.\n");
    fputs_unlocked(v30, v29);
    v31 = stdout;
    v32 = gettext(
            "\n"
            "NOTE: [ honors the --help and --version options, but test does not.\n"
            "test treats each of those as it treats any other nonempty STRING.\n");
    fputs_unlocked(v32, v31);
    v33 = gettext("test and/or [");
    v34 = gettext(
            "\n"
            "NOTE: your shell may have its own version of %s, which usually supersedes\n"
            "the version described here.  Please refer to your shell's documentation\n"
            "for details about the options it supports.\n");
    printf(v34, v33);
    sub_40153F();
  }
  exit(a1);
}
