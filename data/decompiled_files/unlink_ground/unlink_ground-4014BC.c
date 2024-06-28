#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  __int64 v4; // rbx
  char *v5; // rax
  __int64 v6; // r12
  char *v7; // rbx
  int *v8; // rax

  sub_4019B3(*a2, a2, a3);
  setlocale(6, shortopts);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_4040A0(sub_4016C2);
  sub_401864(
    a1,
    (_DWORD)a2,
    (unsigned int)"unlink",
    (unsigned int)"GNU coreutils",
    (_DWORD)off_606180,
    (unsigned int)sub_4013E7,
    "Michael Stone",
    0LL);
  if ( getopt_long(a1, a2, shortopts, 0LL, 0LL) != -1 )
    sub_4013E7(1);
  if ( optind + 1 > a1 )
  {
    v3 = gettext("missing operand");
    error(0, 0, v3);
    sub_4013E7(1);
  }
  if ( optind + 1 < a1 )
  {
    v4 = sub_401ABE(a2[optind + 1]);
    v5 = gettext("extra operand %s");
    error(0, 0, v5, v4);
    sub_4013E7(1);
  }
  if ( unlink(a2[optind]) )
  {
    v6 = sub_401ABE(a2[optind]);
    v7 = gettext("cannot unlink %s");
    v8 = __errno_location();
    error(1, *v8, v7, v6);
  }
  exit(0);
}
