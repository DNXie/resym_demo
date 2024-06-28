#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_40A051(unsigned __int8 **a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6, FILE *a7, char *a8)
{
  pthread_t newthread; // [rsp+48h] [rbp-78h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp-70h]
  unsigned __int64 v14; // [rsp+58h] [rbp-68h]
  unsigned __int64 v15; // [rsp+60h] [rbp-60h]
  unsigned __int64 v16; // [rsp+68h] [rbp-58h]
  unsigned __int64 v17; // [rsp+70h] [rbp-50h]
  unsigned __int8 **v18; // [rsp+78h] [rbp-48h]
  __int64 arg[4]; // [rsp+80h] [rbp-40h] BYREF
  char v20; // [rsp+A0h] [rbp-20h]
  __int64 v21; // [rsp+A8h] [rbp-18h]
  FILE *v22; // [rsp+B0h] [rbp-10h]
  char *v23; // [rsp+B8h] [rbp-8h]

  v13 = *(_QWORD *)(a4 + 40) + *(_QWORD *)(a4 + 48);
  v14 = a2 >> 1;
  v15 = a2 - (a2 >> 1);
  arg[0] = (__int64)a1;
  arg[1] = a2 >> 1;
  arg[2] = a3;
  arg[3] = *(_QWORD *)(a4 + 64);
  v20 = 1;
  v21 = a6;
  v22 = a7;
  v23 = a8;
  if ( a2 <= 1 || v13 <= 0x1FFFF || pthread_create(&newthread, 0LL, start_routine, arg) )
  {
    v16 = *(_QWORD *)(a4 + 40);
    v17 = *(_QWORD *)(a4 + 48);
    v18 = &a1[-4 * a3];
    if ( v17 > 1 )
      sub_4090DC(&a1[-4 * v16], v17, &v18[-4 * (v16 >> 1)], 0);
    if ( v16 > 1 )
      sub_4090DC(a1, v16, v18, 0);
    *(_QWORD *)a4 = a1;
    *(_QWORD *)(a4 + 8) = &a1[-4 * v16];
    *(_QWORD *)(a4 + 16) = &a1[-4 * v16];
    *(_QWORD *)(a4 + 24) = (char *)a1 - 32 * v16 - 32 * v17;
    sub_4097BD(a6, a4);
    sub_409F3A(a6, a3, a7, a8);
  }
  else
  {
    sub_40A051(-32 * *(_DWORD *)(a4 + 40) + (_DWORD)a1, v15, a3, *(_QWORD *)(a4 + 72), 0, a6, (__int64)a7, (__int64)a8);
    pthread_join(newthread, 0LL);
  }
  return pthread_mutex_destroy((pthread_mutex_t *)(a4 + 88));
}
