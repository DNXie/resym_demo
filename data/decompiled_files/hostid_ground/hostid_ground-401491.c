#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  __int64 v3; // rbx
  char *v4; // rax
  unsigned int v5; // [rsp+2Ch] [rbp-14h]

  sub_4018EC(*a2, a2, a3);
  setlocale(6, shortopts);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_403FE0(sub_4015FB);
  sub_40179D(
    a1,
    (_DWORD)a2,
    (unsigned int)"hostid",
    (unsigned int)"GNU coreutils",
    (_DWORD)off_606180,
    (unsigned int)sub_4013E7,
    "Jim Meyering",
    0LL);
  if ( getopt_long(a1, a2, shortopts, 0LL, 0LL) != -1 )
    sub_4013E7(1);
  if ( optind < a1 )
  {
    v3 = sub_4019F7(a2[optind]);
    v4 = gettext("extra operand %s");
    error(0, 0, v4, v3);
    sub_4013E7(1);
  }
  v5 = gethostid();
  printf("%08x\n", v5);
  exit(0);
}
