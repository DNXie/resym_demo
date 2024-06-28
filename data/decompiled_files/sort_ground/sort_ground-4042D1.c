#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4042D1(unsigned int a1, char a2, __int64 a3)
{
  int v4; // eax
  double v5; // xmm1_8
  double v6; // xmm0_8
  unsigned __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // [rsp+0h] [rbp-30h]
  unsigned int v11; // [rsp+14h] [rbp-1Ch]
  unsigned __int64 v12; // [rsp+18h] [rbp-18h] BYREF
  char *v13; // [rsp+20h] [rbp-10h] BYREF
  double v14; // [rsp+28h] [rbp-8h]

  v9 = a3;
  v11 = sub_415A31(a3, &v13, 10LL, &v12, "EgGkKmMPtTYZ");
  if ( !v11 && (unsigned int)(*(v13 - 1) - 48) <= 9 )
  {
    if ( v12 > 0x3FFFFFFFFFFFFFLL )
      v11 = 1;
    else
      v12 <<= 10;
  }
  if ( v11 == 2 && (unsigned int)(*(v13 - 1) - 48) <= 9 && !v13[1] )
  {
    v4 = *v13;
    if ( v4 == 37 )
    {
      v5 = sub_411075(a3, &v13);
      if ( (v12 & 0x8000000000000000LL) != 0LL )
        v6 = (double)(int)(v12 & 1 | (v12 >> 1)) + (double)(int)(v12 & 1 | (v12 >> 1));
      else
        v6 = (double)(int)v12;
      v14 = v6 * v5 / 100.0;
      if ( v14 >= 1.844674407370955e19 )
      {
        v11 = 1;
      }
      else
      {
        if ( v14 >= 9.223372036854776e18 )
          v7 = (unsigned int)(int)(v14 - 9.223372036854776e18) ^ 0x8000000000000000LL;
        else
          v7 = (unsigned int)(int)v14;
        v12 = v7;
        v11 = 0;
      }
    }
    else if ( v4 == 98 )
    {
      v11 = 0;
    }
  }
  if ( v11 )
    sub_41594B(v11, a1, (unsigned int)a2, &longopts, v9);
  result = qword_61D9E0;
  if ( v12 >= qword_61D9E0 )
  {
    qword_61D9E0 = v12;
    result = v12;
    if ( 34 * (unsigned __int64)(unsigned int)dword_61D4EC >= v12 )
      result = 34LL * (unsigned int)dword_61D4EC;
    qword_61D9E0 = result;
  }
  return result;
}
