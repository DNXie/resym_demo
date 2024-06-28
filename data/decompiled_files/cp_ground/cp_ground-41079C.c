#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_41079C(char *a1, __int64 a2, __int64 a3, char a4)
{
  bool v5; // al
  int v6; // eax
  __time_t v7; // rbx
  int v8; // ebx
  int v11; // [rsp+24h] [rbp-13Ch]
  int v12; // [rsp+28h] [rbp-138h]
  int v13; // [rsp+2Ch] [rbp-134h]
  int v14; // [rsp+30h] [rbp-130h]
  int v15; // [rsp+30h] [rbp-130h]
  int i; // [rsp+34h] [rbp-12Ch]
  int j; // [rsp+38h] [rbp-128h]
  int v18; // [rsp+3Ch] [rbp-124h]
  int v19; // [rsp+40h] [rbp-120h]
  int v20; // [rsp+50h] [rbp-110h]
  int v21; // [rsp+54h] [rbp-10Ch]
  __int64 v22; // [rsp+58h] [rbp-108h]
  __int64 *v23; // [rsp+60h] [rbp-100h]
  __int64 v24; // [rsp+68h] [rbp-F8h]
  __int64 v25; // [rsp+70h] [rbp-F0h]
  __int64 v26; // [rsp+78h] [rbp-E8h]
  __int64 v27; // [rsp+88h] [rbp-D8h]
  __int64 v28; // [rsp+90h] [rbp-D0h] BYREF
  int v29; // [rsp+98h] [rbp-C8h]
  char v30; // [rsp+9Ch] [rbp-C4h]
  __int64 v31[2]; // [rsp+A0h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+B0h] [rbp-B0h]
  __int64 v33; // [rsp+B8h] [rbp-A8h]
  struct stat stat_buf; // [rsp+C0h] [rbp-A0h] BYREF

  v24 = *(_QWORD *)(a2 + 88);
  v22 = *(_QWORD *)(a3 + 88);
  v18 = sub_41072F(a2);
  v11 = sub_41072F(a3);
  if ( (a4 & 1) == 0 )
    goto LABEL_64;
  v23 = 0LL;
  if ( v24 == v22 && v18 == v11 )
    return 0LL;
  if ( v22 - 2 >= v24 )
    return 0xFFFFFFFFLL;
  if ( v24 - 2 >= v22 )
    return 1LL;
  if ( !qword_61DA60 )
    qword_61DA60 = (__int64)sub_40C810(
                              16LL,
                              0LL,
                              (unsigned __int64 (__fastcall *)(__int64, unsigned __int64))sub_410741,
                              (bool (__fastcall *)(__int64, __int64))sub_41076A,
                              (size_t)free);
  if ( !qword_61DA60 )
    goto LABEL_18;
  if ( !qword_61DA68 )
  {
    qword_61DA68 = (__int64)malloc(0x10uLL);
    if ( !qword_61DA68 )
    {
LABEL_18:
      if ( qword_61DA60 )
      {
        v28 = *(_QWORD *)a2;
        v23 = (__int64 *)sub_40C1D7(qword_61DA60, (__int64)&v28);
      }
      if ( !v23 )
      {
        v23 = &v28;
        v29 = 2000000000;
        v30 = 0;
      }
      goto LABEL_22;
    }
    *(_DWORD *)(qword_61DA68 + 8) = 2000000000;
    *(_BYTE *)(qword_61DA68 + 12) = 0;
  }
  *(_QWORD *)qword_61DA68 = *(_QWORD *)a2;
  v23 = (__int64 *)sub_40D4A6((_QWORD *)qword_61DA60, qword_61DA68);
  if ( !v23 )
    goto LABEL_18;
  if ( v23 == (__int64 *)qword_61DA68 )
    qword_61DA68 = 0LL;
LABEL_22:
  v12 = *((_DWORD *)v23 + 2);
  if ( *((_BYTE *)v23 + 12) != 1 )
  {
    v25 = *(_QWORD *)(a2 + 72);
    v26 = *(_QWORD *)(a2 + 104);
    v19 = sub_41070B(a2);
    v14 = sub_41071D(a2);
    if ( (v14 % 10) | (v19 % 10) | (v18 % 10) )
    {
      v12 = 1;
    }
    else
    {
      v12 = 10;
      v13 = v19 / 10;
      v15 = v14 / 10;
      for ( i = v18 / 10; *((_DWORD *)v23 + 2) > v12 && !((i % 10) | (v15 % 10) | (v13 % 10)); i /= 10 )
      {
        if ( v12 == 1000000000 )
        {
          if ( (((unsigned __int8)v24 | (unsigned __int8)(v25 | v26)) & 1) == 0 )
            v12 = 2000000000;
          break;
        }
        v12 *= 10;
        v13 /= 10;
        v15 /= 10;
      }
    }
    *((_DWORD *)v23 + 2) = v12;
    if ( v12 > 1 )
    {
      v27 = v22 & ~(v12 == 2000000000);
      if ( v22 < v24 || v22 == v24 && v11 <= v18 )
        return 1LL;
      if ( v24 < v27 || v24 == v27 && v11 - v11 % v12 > v18 )
        return 0xFFFFFFFFLL;
      v31[0] = v25;
      v31[1] = v19;
      v32 = v24 | (v12 == 2000000000);
      v33 = v12 / 9 + v18;
      if ( (*(_DWORD *)(a2 + 24) & 0xF000) == 40960 )
        v5 = (unsigned int)sub_411A30(a1, v31) != 0;
      else
        v5 = (unsigned int)sub_411A09(a1, v31) != 0;
      if ( v5 )
        return 4294967294LL;
      if ( (*(_DWORD *)(a2 + 24) & 0xF000) == 40960 )
        v6 = sub_416120(a1, &stat_buf);
      else
        v6 = sub_416100(a1, &stat_buf);
      v20 = v6;
      v7 = v24 ^ stat_buf.st_mtim.tv_sec | v6;
      if ( v7 | v18 ^ (unsigned __int64)sub_41072F((__int64)&stat_buf) )
      {
        v32 = v24;
        v33 = v18;
        if ( (*(_DWORD *)(a2 + 24) & 0xF000) == 40960 )
          sub_411A30(a1, v31);
        else
          sub_411A09(a1, v31);
      }
      if ( v20 )
        return 4294967294LL;
      v21 = v12;
      v8 = 1000000000 * (stat_buf.st_mtim.tv_sec & 1);
      v12 = 1;
      for ( j = v8 + sub_41072F((__int64)&stat_buf); !(j % 10); j /= 10 )
      {
        if ( v12 == 1000000000 )
        {
          v12 = 2000000000;
          break;
        }
        v12 *= 10;
        if ( v12 == v21 )
          break;
      }
    }
    *((_DWORD *)v23 + 2) = v12;
    *((_BYTE *)v23 + 12) = 1;
  }
  v22 = ~(v12 == 2000000000) & (unsigned __int64)v22;
  v11 -= v11 % v12;
LABEL_64:
  if ( v24 < v22 )
    return 0xFFFFFFFFLL;
  if ( v24 > v22 )
    return 1LL;
  if ( v18 < v11 )
    return 0xFFFFFFFFLL;
  return v18 > v11;
}
