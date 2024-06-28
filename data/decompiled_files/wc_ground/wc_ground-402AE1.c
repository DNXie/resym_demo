#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402AE1(int a1, int *a2)
{
  int v3; // [rsp+1Ch] [rbp-14h]
  int v4; // [rsp+20h] [rbp-10h]
  int i; // [rsp+24h] [rbp-Ch]
  unsigned __int64 v6; // [rsp+28h] [rbp-8h]

  v3 = 1;
  if ( a1 > 0 && *a2 <= 0 )
  {
    v4 = 1;
    v6 = 0LL;
    for ( i = 0; i < a1; ++i )
    {
      if ( !a2[38 * i] )
      {
        if ( (a2[38 * i + 8] & 0xF000) == 0x8000 )
          v6 += *(_QWORD *)&a2[38 * i + 14];
        else
          v4 = 7;
      }
    }
    while ( v6 > 9 )
    {
      ++v3;
      v6 /= 0xAuLL;
    }
    if ( v3 < v4 )
      v3 = v4;
  }
  return (unsigned int)v3;
}
