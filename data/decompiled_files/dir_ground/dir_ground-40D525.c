#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40D525(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  float v5; // xmm0_4
  __int64 v6; // rdx
  __int64 v7; // rax
  float v8; // xmm1_4
  __int64 v9; // rdx
  __int64 v10; // rax
  float v11; // xmm0_4
  __int64 v12; // rdx
  __int64 v13; // rax
  float v14; // xmm1_4
  __int64 v15; // rdx
  __int64 v16; // rax
  float v17; // xmm0_4
  __int64 v18; // rdx
  float v19; // xmm0_4
  __int64 v20; // rax
  float v21; // xmm0_4
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 *v25; // [rsp+30h] [rbp-20h] BYREF
  __int64 v26; // [rsp+38h] [rbp-18h]
  __int64 v27; // [rsp+40h] [rbp-10h]
  _QWORD *v28; // [rsp+48h] [rbp-8h]

  if ( !a2 )
    abort();
  v26 = sub_40CFBE((__int64)a1, a2, &v25, 0);
  if ( v26 )
  {
    if ( a3 )
      *a3 = v26;
    result = 0LL;
  }
  else
  {
    v4 = a1[3];
    if ( v4 < 0 )
    {
      v6 = a1[3] & 1LL | ((unsigned __int64)v4 >> 1);
      v5 = (float)(int)v6 + (float)(int)v6;
    }
    else
    {
      v5 = (float)(int)v4;
    }
    v7 = a1[2];
    if ( v7 < 0 )
    {
      v9 = a1[2] & 1LL | ((unsigned __int64)v7 >> 1);
      v8 = (float)(int)v9 + (float)(int)v9;
    }
    else
    {
      v8 = (float)(int)v7;
    }
    if ( v5 > (float)(v8 * *(float *)(a1[5] + 8LL)) )
    {
      sub_40C9C7((__int64)a1);
      v10 = a1[3];
      if ( v10 < 0 )
      {
        v12 = a1[3] & 1LL | ((unsigned __int64)v10 >> 1);
        v11 = (float)(int)v12 + (float)(int)v12;
      }
      else
      {
        v11 = (float)(int)v10;
      }
      v13 = a1[2];
      if ( v13 < 0 )
      {
        v15 = a1[2] & 1LL | ((unsigned __int64)v13 >> 1);
        v14 = (float)(int)v15 + (float)(int)v15;
      }
      else
      {
        v14 = (float)(int)v13;
      }
      if ( v11 > (float)(v14 * *(float *)(a1[5] + 8LL)) )
      {
        v27 = a1[5];
        if ( *(_BYTE *)(v27 + 16) )
        {
          v16 = a1[2];
          if ( v16 < 0 )
          {
            v18 = a1[2] & 1LL | ((unsigned __int64)v16 >> 1);
            v17 = (float)(int)v18 + (float)(int)v18;
          }
          else
          {
            v17 = (float)(int)v16;
          }
          v19 = v17 * *(float *)(v27 + 12);
        }
        else
        {
          v20 = a1[2];
          if ( v20 < 0 )
          {
            v22 = a1[2] & 1LL | ((unsigned __int64)v20 >> 1);
            v21 = (float)(int)v22 + (float)(int)v22;
          }
          else
          {
            v21 = (float)(int)v20;
          }
          v19 = (float)(v21 * *(float *)(v27 + 12)) * *(float *)(v27 + 8);
        }
        if ( v19 >= 1.8446744e19 )
          return 0xFFFFFFFFLL;
        if ( v19 >= 9.223372e18 )
          v23 = (unsigned int)(int)(float)(v19 - 9.223372e18) ^ 0x8000000000000000LL;
        else
          v23 = (unsigned int)(int)v19;
        if ( (unsigned __int8)sub_40D321((__int64)a1, v23) != 1 )
          return 0xFFFFFFFFLL;
        if ( sub_40CFBE((__int64)a1, a2, &v25, 0) )
          abort();
      }
    }
    if ( *v25 )
    {
      v28 = sub_40CF3E((__int64)a1);
      if ( v28 )
      {
        *v28 = a2;
        v28[1] = v25[1];
        v25[1] = (__int64)v28;
        ++a1[4];
        result = 1LL;
      }
      else
      {
        result = 0xFFFFFFFFLL;
      }
    }
    else
    {
      *v25 = a2;
      ++a1[4];
      ++a1[3];
      result = 1LL;
    }
  }
  return result;
}
