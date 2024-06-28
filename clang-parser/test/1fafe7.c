#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_1FAFE7(_QWORD *a1, int a2, int a3, int a4, int a5, int a6, _BYTE *a7, int a8)
{
  __int64 result; // rax
  int v11; // [rsp+Ch] [rbp-34h]
  int v12; // [rsp+14h] [rbp-2Ch]
  int v13; // [rsp+2Ch] [rbp-14h]
  __int64 v14; // [rsp+30h] [rbp-10h]
  __int64 v15; // [rsp+38h] [rbp-8h]

  v12 = a2;
  v11 = a4;
  v13 = 1;
  if ( !a7 || *a7 != 49 || a8 != 112 )
    return 4294967290LL;
  if ( !a1 )
    return 4294967294LL;
  a1[6] = 0LL;
  if ( !a1[8] )
  {
    a1[8] = sub_20A42E;
    a1[10] = 0LL;
  }
  if ( !a1[9] )
    a1[9] = sub_20A457;
  if ( a2 == -1 )
    v12 = 6;
  if ( a4 >= 0 )
  {
    if ( a4 > 15 )
    {
      v13 = 2;
      v11 = a4 - 16;
    }
  }
  else
  {
    v13 = 0;
    v11 = -a4;
  }
  if ( a5 <= 0
    || a5 > 9
    || a3 != 8
    || v11 <= 7
    || v11 > 15
    || v12 < 0
    || v12 > 9
    || a6 < 0
    || a6 > 4
    || v11 == 8 && v13 != 1 )
  {
    return 4294967294LL;
  }
  if ( v11 == 8 )
    v11 = 9;
  v14 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))a1[8])(a1[10], 1LL, 5952LL);
  if ( !v14 )
    return 4294967292LL;
  a1[7] = v14;
  *(_QWORD *)v14 = a1;
  *(_DWORD *)(v14 + 8) = 42;
  *(_DWORD *)(v14 + 48) = v13;
  *(_QWORD *)(v14 + 56) = 0LL;
  *(_DWORD *)(v14 + 84) = v11;
  *(_DWORD *)(v14 + 80) = 1 << *(_DWORD *)(v14 + 84);
  *(_DWORD *)(v14 + 88) = *(_DWORD *)(v14 + 80) - 1;
  *(_DWORD *)(v14 + 136) = a5 + 7;
  *(_DWORD *)(v14 + 132) = 1 << *(_DWORD *)(v14 + 136);
  *(_DWORD *)(v14 + 140) = *(_DWORD *)(v14 + 132) - 1;
  *(_DWORD *)(v14 + 144) = (*(_DWORD *)(v14 + 136) + 2) / 3u;
  *(_QWORD *)(v14 + 96) = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))a1[8])(
                            a1[10],
                            *(unsigned int *)(v14 + 80),
                            2LL);
  *(_QWORD *)(v14 + 112) = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))a1[8])(
                             a1[10],
                             *(unsigned int *)(v14 + 80),
                             2LL);
  *(_QWORD *)(v14 + 120) = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))a1[8])(
                             a1[10],
                             *(unsigned int *)(v14 + 132),
                             2LL);
  *(_QWORD *)(v14 + 5944) = 0LL;
  *(_DWORD *)(v14 + 5896) = 1 << (a5 + 6);
  v15 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))a1[8])(a1[10], *(unsigned int *)(v14 + 5896), 4LL);
  *(_QWORD *)(v14 + 16) = v15;
  *(_QWORD *)(v14 + 24) = 4LL * *(unsigned int *)(v14 + 5896);
  if ( *(_QWORD *)(v14 + 96) && *(_QWORD *)(v14 + 112) && *(_QWORD *)(v14 + 120) && *(_QWORD *)(v14 + 16) )
  {
    *(_QWORD *)(v14 + 5904) = v15 + 2LL * (*(_DWORD *)(v14 + 5896) >> 1);
    *(_QWORD *)(v14 + 5888) = 3LL * *(unsigned int *)(v14 + 5896) + *(_QWORD *)(v14 + 16);
    *(_DWORD *)(v14 + 196) = v12;
    *(_DWORD *)(v14 + 200) = a6;
    *(_BYTE *)(v14 + 72) = 8;
    result = sub_1FBA40(a1);
  }
  else
  {
    *(_DWORD *)(v14 + 8) = 666;
    a1[6] = "insufficient memory";
    sub_1FD509(a1);
    result = 4294967292LL;
  }
  return result;
}
