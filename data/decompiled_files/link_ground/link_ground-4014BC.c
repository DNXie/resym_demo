#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  __int64 v4; // rbx
  char *v5; // rax
  __int64 v6; // rbx
  char *v7; // rax
  __int64 v8; // r13
  __int64 v9; // r12
  char *v10; // rbx
  int *v11; // rax

  sub_401A6D(*a2, a2, a3);
  setlocale(6, shortopts);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_404160(sub_40177C);
  sub_40191E(
    a1,
    (_DWORD)a2,
    (unsigned int)"link",
    (unsigned int)"GNU coreutils",
    (_DWORD)off_606180,
    (unsigned int)sub_4013E7,
    "Michael Stone",
    0LL);
  if ( getopt_long(a1, a2, shortopts, 0LL, 0LL) != -1 )
    sub_4013E7(1);
  if ( optind + 2 > a1 )
  {
    if ( optind + 1 <= a1 )
    {
      v4 = sub_401B78(a2[optind]);
      v5 = gettext("missing operand after %s");
      error(0, 0, v5, v4);
    }
    else
    {
      v3 = gettext("missing operand");
      error(0, 0, v3);
    }
    sub_4013E7(1);
  }
  if ( optind + 2 < a1 )
  {
    v6 = sub_401B78(a2[optind + 2]);
    v7 = gettext("extra operand %s");
    error(0, 0, v7, v6);
    sub_4013E7(1);
  }
  if ( link(a2[optind], a2[optind + 1]) )
  {
    v8 = sub_401B54(1LL, a2[optind]);
    v9 = sub_401B54(0LL, a2[optind + 1]);
    v10 = gettext("cannot create link %s to %s");
    v11 = __errno_location();
    error(1, *v11, v10, v9, v8);
  }
  exit(0);
}
