#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_40AAF3(char **a1, unsigned __int64 a2, char *a3, unsigned __int64 a4)
{
  __int64 v4; // rax
  char v10; // [rsp+3Fh] [rbp-121h]
  FILE *v11; // [rsp+40h] [rbp-120h] BYREF
  FILE *v12; // [rsp+48h] [rbp-118h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp-110h]
  char *v14; // [rsp+58h] [rbp-108h]
  __int64 v15; // [rsp+60h] [rbp-100h]
  unsigned __int64 v16; // [rsp+68h] [rbp-F8h]
  __int64 v17; // [rsp+70h] [rbp-F0h]
  __int64 v18; // [rsp+78h] [rbp-E8h]
  __int64 *v19; // [rsp+80h] [rbp-E0h]
  char *v20; // [rsp+88h] [rbp-D8h]
  unsigned __int8 **v21; // [rsp+90h] [rbp-D0h]
  void *v22; // [rsp+98h] [rbp-C8h]
  __int64 v23; // [rsp+A0h] [rbp-C0h]
  void *v24; // [rsp+A8h] [rbp-B8h]
  void *ptr; // [rsp+B0h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+B8h] [rbp-A8h]
  unsigned __int64 v27; // [rsp+C0h] [rbp-A0h]
  __int64 v28; // [rsp+C8h] [rbp-98h]
  __int64 v29; // [rsp+D0h] [rbp-90h]
  char v30; // [rsp+E0h] [rbp-80h]
  char v31[104]; // [rsp+F0h] [rbp-70h] BYREF
  unsigned __int64 v32; // [rsp+158h] [rbp-8h]

  v32 = __readfsqword(0x28u);
  v13 = 0LL;
  v10 = 0;
  v28 = 0LL;
  while ( a2 )
  {
    v20 = *a1;
    v11 = sub_4035C5(v20, "r");
    if ( a4 <= 1 )
    {
      v15 = 48LL;
    }
    else
    {
      v16 = 1LL;
      v17 = 1LL;
      while ( v16 < a4 )
      {
        v16 *= 2LL;
        ++v17;
      }
      v15 = 32 * v17;
    }
    if ( !v28 )
    {
      v4 = sub_404722((__int64)&v11, 1uLL, (__int64)a1, a2, v15);
      sub_404989((__int64)&ptr, v15, v4);
    }
    v30 = 0;
    ++a1;
    --a2;
    while ( (unsigned __int8)sub_404DA9(&ptr, v11, v20) )
    {
      if ( v30 && a2 && v15 + 1 < v28 - v26 - v15 * v27 )
      {
        v29 = v26;
        break;
      }
      v21 = (unsigned __int8 **)sub_404A3F(&ptr);
      if ( !v30 || a2 || v13 || v29 )
      {
        ++v13;
        v14 = sub_403A5F(&v12) + 13;
      }
      else
      {
        sub_403612(v11, v20);
        v12 = sub_4035C5(a3, "w");
        v14 = a3;
        v10 = 1;
      }
      if ( v27 <= 1 )
      {
        sub_40989A((__int64)(v21 - 4), v12, v14);
      }
      else
      {
        sub_409766((__int64)v31, a4);
        v22 = (void *)sub_40935F(a4, v27, (__int64)v21);
        v23 = (__int64)v22 + 128;
        sub_40A051(v21, a4, v27, (__int64)v22 + 128, 1LL, (__int64)v31, v12, v14);
        sub_409729((__int64)v31);
        pthread_mutex_destroy((pthread_mutex_t *)(v23 + 88));
        sub_409458(v22);
      }
      sub_403612(v12, v14);
      if ( v10 )
        goto LABEL_28;
    }
    sub_403612(v11, v20);
  }
LABEL_28:
  free(ptr);
  if ( v10 != 1 )
  {
    v19 = (__int64 *)qword_61DAA0;
    v24 = (void *)sub_414E49(v13, 16LL);
    v18 = 0LL;
    while ( v19 )
    {
      *((_QWORD *)v24 + 2 * v18) = (char *)v19 + 13;
      *((_QWORD *)v24 + 2 * v18 + 1) = v19;
      v19 = (__int64 *)*v19;
      ++v18;
    }
    sub_40A5DE(v24, v13, v13, a3);
    free(v24);
  }
  sub_40325F();
  return __readfsqword(0x28u) ^ v32;
}
