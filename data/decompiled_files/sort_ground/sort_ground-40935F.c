#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40935F(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // [rsp+28h] [rbp-8h]

  v5 = sub_414F92(a1 << 8);
  *(_QWORD *)(v5 + 24) = 0LL;
  *(_QWORD *)(v5 + 16) = *(_QWORD *)(v5 + 24);
  *(_QWORD *)(v5 + 8) = *(_QWORD *)(v5 + 16);
  *(_QWORD *)v5 = *(_QWORD *)(v5 + 8);
  *(_QWORD *)(v5 + 32) = 0LL;
  *(_QWORD *)(v5 + 48) = a2;
  *(_QWORD *)(v5 + 40) = *(_QWORD *)(v5 + 48);
  *(_QWORD *)(v5 + 56) = 0LL;
  *(_DWORD *)(v5 + 80) = 0;
  *(_BYTE *)(v5 + 84) = 0;
  pthread_mutex_init((pthread_mutex_t *)(v5 + 88), 0LL);
  sub_409472(v5, v5 + 128, a3, a1, a2, 0LL);
  return v5;
}
