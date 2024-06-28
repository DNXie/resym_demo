#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4097AD(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3, double a4)
{
  unsigned __int64 v5; // [rsp+28h] [rbp-8h]

  v5 = *a2;
  if ( a1 )
  {
    if ( 0xAAAAAAAAAAAAAAAALL / a3 <= v5 )
      sub_4099EE(a4);
    v5 += (v5 + 1) >> 1;
  }
  else if ( !v5 )
  {
    v5 = (0x80 / a3 == 0) + 0x80 / a3;
  }
  *a2 = v5;
  return sub_4098A1(a1, a3 * v5);
}
