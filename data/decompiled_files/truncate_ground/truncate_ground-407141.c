#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_407141(char *a1, void *a2, _QWORD *a3)
{
  void *v3; // rsp
  unsigned __int64 v4; // rax
  bool v7; // al
  bool v8; // al
  bool v9; // al
  bool v10; // al
  _QWORD *v14; // [rsp+8h] [rbp-108h] BYREF
  void *v15; // [rsp+10h] [rbp-100h]
  char *v16; // [rsp+18h] [rbp-F8h]
  __int64 v17; // [rsp+20h] [rbp-F0h]
  unsigned __int64 i; // [rsp+28h] [rbp-E8h]
  __int64 v19; // [rsp+30h] [rbp-E0h]
  __int64 v20; // [rsp+38h] [rbp-D8h]
  __int64 v21; // [rsp+40h] [rbp-D0h]
  unsigned __int64 v22; // [rsp+48h] [rbp-C8h]
  unsigned __int64 v23; // [rsp+50h] [rbp-C0h]
  unsigned __int64 v24; // [rsp+58h] [rbp-B8h]
  unsigned __int64 v25; // [rsp+60h] [rbp-B0h]
  unsigned __int64 v26; // [rsp+68h] [rbp-A8h]
  char v27[4]; // [rsp+70h] [rbp-A0h] BYREF
  int v28; // [rsp+74h] [rbp-9Ch] BYREF
  char v29; // [rsp+7Ch] [rbp-94h]
  char *v30; // [rsp+80h] [rbp-90h]
  __int64 v31; // [rsp+88h] [rbp-88h]
  char v32; // [rsp+90h] [rbp-80h]
  int v33; // [rsp+94h] [rbp-7Ch]
  char v34[4]; // [rsp+B0h] [rbp-60h] BYREF
  int v35; // [rsp+B4h] [rbp-5Ch] BYREF
  char v36; // [rsp+BCh] [rbp-54h]
  void *s2; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v38; // [rsp+C8h] [rbp-48h]
  char v39; // [rsp+D0h] [rbp-40h]
  int v40; // [rsp+D4h] [rbp-3Ch]
  unsigned __int64 v41; // [rsp+F8h] [rbp-18h]

  v16 = a1;
  v15 = a2;
  v14 = a3;
  v41 = __readfsqword(0x28u);
  v22 = sub_409091(a2);
  if ( v22 > 0x492492492492492LL )
  {
    v4 = 0LL;
  }
  else if ( 56 * v22 > 0xFAF )
  {
    v4 = sub_408CF7(56 * v22);
  }
  else
  {
    v3 = alloca(16 * ((56 * v22 + 46) / 0x10));
    v4 = 16 * (((unsigned __int64)&v14 + 7) >> 4) + 16;
  }
  v23 = v4;
  if ( !v4 )
    return 0LL;
  v24 = v23;
  v25 = 48 * v22 + v23;
  v17 = 0LL;
  s2 = v15;
  v34[0] = 0;
  memset(&v35, 0, 8uLL);
  v36 = 0;
  while ( 1 )
  {
    sub_406D17((__int64)v34);
    if ( v39 == 1 && !v40 )
      break;
    sub_406C40(48 * v17 + v24, (__int64)&s2);
    s2 = (char *)s2 + v38;
    v36 = 0;
    ++v17;
  }
  *(_QWORD *)(v25 + 8) = 1LL;
  v19 = 0LL;
  for ( i = 2LL; i < v22; ++i )
  {
    v26 = 48 * i - 48 + v24;
    while ( 1 )
    {
      if ( *(_BYTE *)(v26 + 16) && *(_BYTE *)(48 * v19 + v24 + 16) )
      {
        v7 = *(_DWORD *)(v26 + 20) == *(_DWORD *)(48 * v19 + v24 + 20);
      }
      else
      {
        v8 = *(_QWORD *)(v26 + 8) == *(_QWORD *)(48 * v19 + v24 + 8)
          && !memcmp(*(const void **)v26, *(const void **)(48 * v19 + v24), *(_QWORD *)(v26 + 8));
        v7 = v8;
      }
      if ( v7 )
      {
        ++v19;
        *(_QWORD *)(8 * i + v25) = i - v19;
        goto LABEL_30;
      }
      if ( !v19 )
        break;
      v19 -= *(_QWORD *)(8 * v19 + v25);
    }
    *(_QWORD *)(v25 + 8 * i) = i;
LABEL_30:
    ;
  }
  *v14 = 0LL;
  v20 = 0LL;
  v30 = v16;
  v27[0] = 0;
  memset(&v28, 0, 8uLL);
  v29 = 0;
  s2 = v16;
  v34[0] = 0;
  memset(&v35, 0, 8uLL);
  v36 = 0;
  while ( 1 )
  {
    sub_406D17((__int64)v34);
    if ( v39 == 1 && !v40 )
      break;
    if ( *(_BYTE *)(48 * v20 + v24 + 16) && v39 )
    {
      v9 = *(_DWORD *)(48 * v20 + v24 + 20) == v40;
    }
    else
    {
      v10 = *(_QWORD *)(48 * v20 + v24 + 8) == v38
         && !memcmp(*(const void **)(48 * v20 + v24), s2, *(_QWORD *)(48 * v20 + v24 + 8));
      v9 = v10;
    }
    if ( v9 )
    {
      ++v20;
      s2 = (char *)s2 + v38;
      v36 = 0;
      if ( v20 == v22 )
      {
        *v14 = v30;
        break;
      }
    }
    else if ( v20 )
    {
      v21 = *(_QWORD *)(8 * v20 + v25);
      v20 -= v21;
      while ( v21 )
      {
        sub_406D17((__int64)v27);
        if ( v32 == 1 && !v33 )
          abort();
        v30 += v31;
        v29 = 0;
        --v21;
      }
    }
    else
    {
      sub_406D17((__int64)v27);
      if ( v32 == 1 && !v33 )
        abort();
      v30 += v31;
      v29 = 0;
      s2 = (char *)s2 + v38;
      v36 = 0;
    }
  }
  sub_408DB2(v23);
  return 1LL;
}
