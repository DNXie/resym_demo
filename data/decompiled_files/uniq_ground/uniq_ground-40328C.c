#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40328C(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int8 v5; // [rsp+2Bh] [rbp-25h]
  int v6; // [rsp+2Ch] [rbp-24h]
  unsigned int v7; // [rsp+34h] [rbp-1Ch]
  unsigned __int64 i; // [rsp+38h] [rbp-18h]

  for ( i = 0LL; i < a3; ++i )
  {
    v5 = *(_BYTE *)(a2 + i);
    v6 = toupper(*(unsigned __int8 *)(a1 + i));
    v7 = v6 - toupper(v5);
    if ( v7 )
      return v7;
  }
  return 0LL;
}
