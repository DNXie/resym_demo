#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40BD8C(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v4; // eax
  int v5; // eax
  unsigned int v9; // [rsp+24h] [rbp-1Ch]
  int v10; // [rsp+28h] [rbp-18h]
  unsigned __int64 v11; // [rsp+30h] [rbp-10h]
  unsigned __int64 v12; // [rsp+38h] [rbp-8h]

  v11 = 0LL;
  v12 = 0LL;
  while ( v11 < a2 || v12 < a4 )
  {
    v9 = 0;
    while ( v11 < a2 && (unsigned __int8)sub_415750((unsigned int)*(char *)(a1 + v11)) != 1
         || v12 < a4 && (unsigned __int8)sub_415750((unsigned int)*(char *)(a3 + v12)) != 1 )
    {
      if ( v11 == a2 )
        v4 = 0;
      else
        v4 = sub_40BD3C(*(_BYTE *)(a1 + v11));
      v10 = v4;
      if ( v12 == a4 )
        v5 = 0;
      else
        v5 = sub_40BD3C(*(_BYTE *)(a3 + v12));
      if ( v10 != v5 )
        return (unsigned int)(v10 - v5);
      ++v11;
      ++v12;
    }
    while ( *(_BYTE *)(a1 + v11) == 48 )
      ++v11;
    while ( *(_BYTE *)(a3 + v12) == 48 )
      ++v12;
    while ( (unsigned __int8)sub_415750((unsigned int)*(char *)(a1 + v11))
         && (unsigned __int8)sub_415750((unsigned int)*(char *)(a3 + v12)) )
    {
      if ( !v9 )
        v9 = *(char *)(a1 + v11) - *(char *)(a3 + v12);
      ++v11;
      ++v12;
    }
    if ( (unsigned __int8)sub_415750((unsigned int)*(char *)(a1 + v11)) )
      return 1LL;
    if ( (unsigned __int8)sub_415750((unsigned int)*(char *)(a3 + v12)) )
      return 0xFFFFFFFFLL;
    if ( v9 )
      return v9;
  }
  return 0LL;
}
