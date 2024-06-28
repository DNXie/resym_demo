#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  char *v3; // rax
  __int64 v4; // rbx
  char *v5; // rax
  bool v6; // [rsp+2Fh] [rbp-11h]

  sub_403C30(*a2);
  setlocale(6, &locale);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_4014BD(2u);
  sub_406920((void (__fastcall *)(void *))sub_403A09);
  qword_609238 = (__int64)a2;
  if ( a1 == 2 )
  {
    if ( !strcmp(a2[1], "--help") )
      sub_4035DC(0);
    if ( !strcmp(a2[1], "--version") )
    {
      sub_405C05(stdout, "[", "GNU coreutils", off_6091C0, "Kevin Braunsdorf", "Matthew Bradburn", 0LL);
      exit(0);
    }
  }
  if ( a1 <= 1 || strcmp(a2[a1 - 1], "]") )
  {
    v3 = gettext("missing `]'");
    sub_40165F(v3, 0LL);
  }
  dword_609234 = a1 - 1;
  dword_609230 = 1;
  if ( a1 - 1 <= 1 )
    exit(1);
  v6 = sub_40349F(dword_609234 - 1);
  if ( dword_609230 != dword_609234 )
  {
    v4 = sub_403D3B(*(_QWORD *)(8LL * dword_609230 + qword_609238));
    v5 = gettext("extra argument %s");
    sub_40165F(v5, v4);
  }
  exit(!v6);
}
