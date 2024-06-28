#include "/share/binary_recovery/clang-parser/defs.hh"
bool __fastcall sub_4029AC(int *a1, char *a2, unsigned __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v7; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-48h] BYREF
  char *v9; // [rsp+20h] [rbp-40h] BYREF
  int *v10; // [rsp+28h] [rbp-38h]
  bool v11; // [rsp+3Ah] [rbp-26h]
  bool v12; // [rsp+3Bh] [rbp-25h]
  int v13; // [rsp+3Ch] [rbp-24h]
  __int64 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+48h] [rbp-18h]
  unsigned __int8 *v16; // [rsp+50h] [rbp-10h]
  char *v17; // [rsp+58h] [rbp-8h]

  v10 = a1;
  v9 = a2;
  v8 = a3;
  v7 = a4;
  v14 = *a5;
  v12 = a1 != 0LL;
  v11 = 0;
  v13 = 0;
  if ( a1 )
  {
    v13 = *v10;
    v11 = v8 == 0;
  }
  while ( 1 )
  {
    v15 = v14;
    if ( !v13 && !v11 )
    {
      while ( 1 )
      {
        v15 = v14;
        if ( (unsigned __int8)sub_402692((unsigned __int8 *)v9, v8, &v7, &v14) != 1 )
          break;
        v9 += 4;
        v8 -= 4LL;
      }
    }
    if ( !v8 && !v11 )
      break;
    if ( v8 && *v9 == 10 && v12 )
    {
      ++v9;
      --v8;
    }
    else
    {
      v7 += v14 - v15;
      v14 = v15;
      v17 = &v9[v8];
      if ( v12 )
        v16 = (unsigned __int8 *)sub_40257E(v10, &v9, (unsigned __int64)v17, &v8);
      else
        v16 = (unsigned __int8 *)v9;
      if ( !v8 || v8 <= 3 && !v11 && v12 )
      {
        v8 = 0LL;
        break;
      }
      if ( (unsigned __int8)sub_402692(v16, v8, &v7, &v14) != 1 )
        break;
      v8 = v17 - v9;
    }
  }
  *a5 -= v14;
  return v8 == 0;
}
