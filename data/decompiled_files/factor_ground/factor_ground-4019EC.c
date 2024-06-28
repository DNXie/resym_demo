#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  bool v3; // [rsp+17h] [rbp-9h]
  int i; // [rsp+18h] [rbp-8h]
  int v5; // [rsp+1Ch] [rbp-4h]

  sub_401DA2(*a2, a2, a3);
  setlocale(6, shortopts);
  bindtextdomain("coreutils", "/root/Product/coreutils/exe/share/locale");
  textdomain("coreutils");
  sub_404DC0(sub_401B7B);
  while ( 1 )
  {
    v5 = getopt_long(a1, a2, shortopts, &longopts, 0LL);
    if ( v5 == -1 )
      break;
    if ( v5 == -130 )
      sub_40189B(0);
    if ( v5 != 128 )
    {
      if ( v5 != -131 )
        sub_40189B(1);
      sub_404192(
        (_DWORD)stdout,
        (unsigned int)"factor",
        (unsigned int)"GNU coreutils",
        (_DWORD)off_6071A0,
        (unsigned int)"Paul Rubin",
        0,
        (char)a2);
      exit(0);
    }
    byte_607219 = 1;
  }
  if ( a1 > optind )
  {
    v3 = 1;
    for ( i = optind; i < a1; ++i )
    {
      if ( (unsigned __int8)sub_4017B2((__int64)a2[i]) != 1 )
        v3 = 0;
    }
  }
  else
  {
    v3 = sub_401970();
  }
  exit(!v3);
}
