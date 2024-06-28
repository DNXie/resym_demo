#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403B01(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v6; // [rsp+28h] [rbp-8h]

  v6 = *a2;
  if ( a1 )
  {
    v3 = 0xAAAAAAAAAAAAAAAALL % a3;
    if ( 0xAAAAAAAAAAAAAAAALL / a3 <= v6 )
      sub_403D42(a1, a2, v3);
    v6 += (v6 + 1) >> 1;
  }
  else if ( !v6 )
  {
    v6 = (0x80 / a3 == 0) + 0x80 / a3;
  }
  *a2 = v6;
  return sub_403BF5(a1, a3 * v6);
}
