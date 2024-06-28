#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40CF94(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __m128 a7, __m128 a8, __m128 a9, __m128 a10, __m128 a11, __m128 a12, __m128 a13, __m128 a14)
{
  int v14; // ecx
  int v15; // er8
  int v16; // er9
  int v18; // [rsp+10h] [rbp-E0h]
  int v19; // [rsp+14h] [rbp-DCh]
  int v20; // [rsp+18h] [rbp-D8h]
  int v21; // [rsp+1Ch] [rbp-D4h]
  __int64 v22; // [rsp+50h] [rbp-A0h]
  __int64 v23; // [rsp+58h] [rbp-98h]
  __int64 v24; // [rsp+60h] [rbp-90h]
  __int64 v25; // [rsp+68h] [rbp-88h]
  __m128 v26; // [rsp+70h] [rbp-80h]
  __m128 v27; // [rsp+80h] [rbp-70h]
  __m128 v28; // [rsp+90h] [rbp-60h]
  __m128 v29; // [rsp+A0h] [rbp-50h]
  __m128 v30; // [rsp+B0h] [rbp-40h]
  __m128 v31; // [rsp+C0h] [rbp-30h]
  __m128 v32; // [rsp+D0h] [rbp-20h]
  __m128 v33; // [rsp+E0h] [rbp-10h]

  v22 = a3;
  v23 = a4;
  v24 = a5;
  v25 = a6;
  v26 = a7;
  v27 = a8;
  v28 = a9;
  v29 = a10;
  v30 = a11;
  v31 = a12;
  v32 = a13;
  v33 = a14;
  if ( a2 != 1030 )
    return (unsigned int)fcntl(a1, a2, v22);
  v19 = v22;
  if ( dword_610400 < 0 )
  {
    v18 = sub_40CF94(a1, 0, v22, a4, a5, a6);
  }
  else
  {
    v18 = fcntl(a1, 1030, (unsigned int)v22);
    if ( v18 < 0 && *__errno_location() == 22 )
    {
      v18 = sub_40CF94(a1, 0, v19, v14, v15, v16);
      if ( v18 < 0 )
        return (unsigned int)v18;
      dword_610400 = -1;
    }
    else
    {
      dword_610400 = 1;
    }
  }
  if ( v18 >= 0 && dword_610400 == -1 )
  {
    v20 = fcntl(v18, 1);
    if ( v20 < 0 || fcntl(v18, 2, v20 | 1u) == -1 )
    {
      v21 = *__errno_location();
      close(v18);
      *__errno_location() = v21;
      v18 = -1;
    }
  }
  return (unsigned int)v18;
}
