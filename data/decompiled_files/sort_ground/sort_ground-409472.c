#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_409472(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, char a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v12; // [rsp+20h] [rbp-60h]
  unsigned __int64 v13; // [rsp+40h] [rbp-40h]
  unsigned __int64 v14; // [rsp+48h] [rbp-38h]
  __int64 v15; // [rsp+50h] [rbp-30h]
  __int64 v16; // [rsp+58h] [rbp-28h]

  if ( a6 )
    v6 = *(_QWORD *)(a1 + 40);
  else
    v6 = *(_QWORD *)(a1 + 48);
  v13 = v6 >> 1;
  v14 = v6 - (v6 >> 1);
  v15 = -32 * a5 + a3;
  v16 = -32LL * (v6 >> 1) + v15;
  if ( a6 )
    v7 = a1 + 16;
  else
    v7 = a1 + 24;
  v12 = a2 + 128;
  *(_QWORD *)(a2 + 16) = v15;
  *(_QWORD *)a2 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 24) = v16;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 32) = v7;
  *(_QWORD *)(a2 + 40) = v13;
  *(_QWORD *)(a2 + 48) = v14;
  *(_QWORD *)(a2 + 56) = a1;
  *(_DWORD *)(a2 + 80) = *(_DWORD *)(a1 + 80) + 1;
  *(_BYTE *)(a2 + 84) = 0;
  pthread_mutex_init((pthread_mutex_t *)(a2 + 88), 0LL);
  if ( a4 <= 1 )
  {
    *(_QWORD *)(a2 + 64) = 0LL;
    *(_QWORD *)(a2 + 72) = 0LL;
  }
  else
  {
    *(_QWORD *)(a2 + 64) = v12;
    v8 = sub_409472(a2, v12, v15, a4 >> 1, a5, 1LL);
    *(_QWORD *)(a2 + 72) = v8;
    v12 = sub_409472(a2, v8, v16, a4 - (a4 >> 1), a5, 0LL);
  }
  return v12;
}
