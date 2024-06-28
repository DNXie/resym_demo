#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_4054EA(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // [rsp+10h] [rbp-70h]
  unsigned __int64 v4; // [rsp+18h] [rbp-68h]
  __int64 v5; // [rsp+20h] [rbp-60h]
  __int64 v6; // [rsp+20h] [rbp-60h]
  unsigned __int64 v7; // [rsp+28h] [rbp-58h]
  __int64 v8; // [rsp+30h] [rbp-50h]
  unsigned __int64 v9; // [rsp+38h] [rbp-48h]
  unsigned __int64 v10; // [rsp+48h] [rbp-38h]
  char v11[8]; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v12; // [rsp+68h] [rbp-18h]

  v12 = __readfsqword(0x28u);
  v8 = *a1;
  v3 = a1[1];
  v4 = a1[2];
  v9 = a2 + 1;
  while ( 1 )
  {
    if ( v4 < a2 )
    {
      v5 = 0LL;
      v7 = v4;
      do
      {
        v7 = sub_4054D8(v7) + 255;
        ++v5;
      }
      while ( v7 < a2 );
      sub_405D50(v8, v11, v5);
      v6 = 0LL;
      do
      {
        v3 = (unsigned __int8)v11[v6] + sub_4054D8(v3);
        v4 = sub_4054D8(v4) + 255;
        ++v6;
      }
      while ( v4 < a2 );
    }
    if ( v4 == a2 )
    {
      a1[2] = 0LL;
      a1[1] = a1[2];
      return v3;
    }
    v10 = (v4 - a2) % v9;
    if ( v3 <= v4 - v10 )
      break;
    v3 %= v9;
    v4 = v10 - 1;
  }
  a1[1] = v3 / v9;
  a1[2] = (v4 - a2) / v9;
  return v3 % v9;
}
