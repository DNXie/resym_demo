#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  __int64 v3; // rbx
  char *v4; // rax
  bool v5; // [rsp+1Fh] [rbp-11h]

  sub_403B55(*a2, a2, a3);
  setlocale(6, &locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_4014BD(2u);
  sub_405FF0(sub_40392E);
  qword_609238 = (__int64)a2;
  dword_609234 = a1;
  dword_609230 = 1;
  if ( a1 <= 1 )
    exit(1);
  v5 = sub_40349F(dword_609234 - 1);
  if ( dword_609230 != dword_609234 )
  {
    v3 = sub_403C60(*(_QWORD *)(8LL * dword_609230 + qword_609238));
    v4 = gettext("extra argument %s");
    sub_40165F(v4, v3);
  }
  exit(!v5);
}
