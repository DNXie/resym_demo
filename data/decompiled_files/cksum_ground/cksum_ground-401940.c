#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn sub_401940(int a1)
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

  if ( a1 )
  {
    v1 = qword_607238;
    v2 = gettext("Try `%s --help' for more information.\n");
    fprintf(stderr, v2, v1);
  }
  else
  {
    v3 = qword_607238;
    v4 = qword_607238;
    v5 = gettext("Usage: %s [FILE]...\n  or:  %s [OPTION]\n");
    printf(v5, v4, v3);
    v6 = stdout;
    v7 = gettext("Print CRC checksum and byte counts of each FILE.\n\n");
    fputs_unlocked(v7, v6);
    v8 = stdout;
    v9 = gettext("      --help     display this help and exit\n");
    fputs_unlocked(v9, v8);
    v10 = stdout;
    v11 = gettext("      --version  output version information and exit\n");
    fputs_unlocked(v11, v10);
    sub_40144D();
  }
  exit(a1);
}
