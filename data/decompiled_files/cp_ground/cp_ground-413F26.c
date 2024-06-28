#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_413F26(_BYTE *a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  void *v4; // rsp
  unsigned __int64 v5; // rax
  __int64 v8; // [rsp+8h] [rbp-68h] BYREF
  __int64 v9; // [rsp+10h] [rbp-60h]
  _BYTE *v10; // [rsp+18h] [rbp-58h]
  char v11; // [rsp+27h] [rbp-49h]
  unsigned __int64 i; // [rsp+28h] [rbp-48h]
  __int64 v13; // [rsp+30h] [rbp-40h]
  __int64 v14; // [rsp+38h] [rbp-38h]
  _BYTE *v15; // [rsp+40h] [rbp-30h]
  _BYTE *v16; // [rsp+48h] [rbp-28h]
  unsigned __int64 v17; // [rsp+50h] [rbp-20h]
  unsigned __int64 v18; // [rsp+58h] [rbp-18h]

  v10 = a1;
  v9 = a2;
  HIBYTE(v8) = HIBYTE(a3);
  v17 = a3;
  if ( a3 > 0x1FFFFFFFFFFFFFFFLL )
  {
    v5 = 0LL;
  }
  else if ( 8 * v17 > 0xFAF )
  {
    v5 = sub_415BF0(8 * v17);
  }
  else
  {
    v4 = alloca(16 * ((8 * (v17 + 2) + 30) / 0x10));
    v5 = 16 * (((unsigned __int64)&v8 + 7) >> 4) + 16;
  }
  v18 = v5;
  if ( !v5 )
    return 0LL;
  *(_QWORD *)(v18 + 8) = 1LL;
  v13 = 0LL;
  for ( i = 2LL; i < v17; ++i )
  {
    v11 = *(_BYTE *)(i - 1 + v9);
    while ( 1 )
    {
      if ( *(_BYTE *)(v9 + v13) == v11 )
      {
        ++v13;
        *(_QWORD *)(8 * i + v18) = i - v13;
        goto LABEL_15;
      }
      if ( !v13 )
        break;
      v13 -= *(_QWORD *)(8 * v13 + v18);
    }
    *(_QWORD *)(v18 + 8 * i) = i;
LABEL_15:
    ;
  }
  *a4 = 0LL;
  v14 = 0LL;
  v15 = v10;
  v16 = v10;
  while ( *v16 )
  {
    if ( *(_BYTE *)(v9 + v14) == *v16 )
    {
      ++v14;
      ++v16;
      if ( v14 == v17 )
      {
        *a4 = v15;
        break;
      }
    }
    else if ( v14 )
    {
      v15 += *(_QWORD *)(8 * v14 + v18);
      v14 -= *(_QWORD *)(8 * v14 + v18);
    }
    else
    {
      ++v15;
      ++v16;
    }
  }
  sub_415CAB(v18);
  return 1LL;
}
