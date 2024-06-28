#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40D888(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  float v4; // xmm0_4
  __int64 v5; // rdx
  __int64 v6; // rax
  float v7; // xmm1_4
  __int64 v8; // rdx
  __int64 v9; // rax
  float v10; // xmm0_4
  __int64 v11; // rdx
  __int64 v12; // rax
  float v13; // xmm1_4
  __int64 v14; // rdx
  __int64 v15; // rax
  float v16; // xmm0_4
  __int64 v17; // rdx
  float v18; // xmm0_4
  __int64 v19; // rax
  __int64 v20; // rax
  float v21; // xmm0_4
  __int64 v22; // rdx
  float v23; // xmm0_4
  _QWORD *v24; // [rsp+10h] [rbp-30h] BYREF
  void *ptr; // [rsp+18h] [rbp-28h]
  __int64 v26; // [rsp+20h] [rbp-20h]
  __int64 v27; // [rsp+28h] [rbp-18h]
  __int64 v28; // [rsp+30h] [rbp-10h]
  void *v29; // [rsp+38h] [rbp-8h]

  v26 = sub_40CFBE(a1, a2, &v24, 1);
  if ( !v26 )
    return 0LL;
  --*(_QWORD *)(a1 + 32);
  if ( !*v24 )
  {
    v3 = --*(_QWORD *)(a1 + 24);
    if ( v3 < 0 )
    {
      v5 = *(_QWORD *)(a1 + 24) & 1LL | ((unsigned __int64)v3 >> 1);
      v4 = (float)(int)v5 + (float)(int)v5;
    }
    else
    {
      v4 = (float)(int)v3;
    }
    v6 = *(_QWORD *)(a1 + 16);
    if ( v6 < 0 )
    {
      v8 = *(_QWORD *)(a1 + 16) & 1LL | ((unsigned __int64)v6 >> 1);
      v7 = (float)(int)v8 + (float)(int)v8;
    }
    else
    {
      v7 = (float)(int)v6;
    }
    if ( (float)(v7 * **(float **)(a1 + 40)) > v4 )
    {
      sub_40C9C7(a1);
      v9 = *(_QWORD *)(a1 + 24);
      if ( v9 < 0 )
      {
        v11 = *(_QWORD *)(a1 + 24) & 1LL | ((unsigned __int64)v9 >> 1);
        v10 = (float)(int)v11 + (float)(int)v11;
      }
      else
      {
        v10 = (float)(int)v9;
      }
      v12 = *(_QWORD *)(a1 + 16);
      if ( v12 < 0 )
      {
        v14 = *(_QWORD *)(a1 + 16) & 1LL | ((unsigned __int64)v12 >> 1);
        v13 = (float)(int)v14 + (float)(int)v14;
      }
      else
      {
        v13 = (float)(int)v12;
      }
      if ( (float)(v13 * **(float **)(a1 + 40)) > v10 )
      {
        v27 = *(_QWORD *)(a1 + 40);
        if ( *(_BYTE *)(v27 + 16) )
        {
          v15 = *(_QWORD *)(a1 + 16);
          if ( v15 < 0 )
          {
            v17 = *(_QWORD *)(a1 + 16) & 1LL | ((unsigned __int64)v15 >> 1);
            v16 = (float)(int)v17 + (float)(int)v17;
          }
          else
          {
            v16 = (float)(int)v15;
          }
          v18 = v16 * *(float *)(v27 + 4);
          if ( v18 >= 9.223372e18 )
            v19 = (unsigned int)(int)(float)(v18 - 9.223372e18) ^ 0x8000000000000000LL;
          else
            v19 = (unsigned int)(int)v18;
        }
        else
        {
          v20 = *(_QWORD *)(a1 + 16);
          if ( v20 < 0 )
          {
            v22 = *(_QWORD *)(a1 + 16) & 1LL | ((unsigned __int64)v20 >> 1);
            v21 = (float)(int)v22 + (float)(int)v22;
          }
          else
          {
            v21 = (float)(int)v20;
          }
          v23 = (float)(v21 * *(float *)(v27 + 4)) * *(float *)(v27 + 8);
          if ( v23 >= 9.223372e18 )
            v19 = (unsigned int)(int)(float)(v23 - 9.223372e18) ^ 0x8000000000000000LL;
          else
            v19 = (unsigned int)(int)v23;
        }
        v28 = v19;
        if ( (unsigned __int8)sub_40D321(a1, v19) != 1 )
        {
          for ( ptr = *(void **)(a1 + 72); ptr; ptr = v29 )
          {
            v29 = (void *)*((_QWORD *)ptr + 1);
            free(ptr);
          }
          *(_QWORD *)(a1 + 72) = 0LL;
        }
      }
    }
  }
  return v26;
}
