#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_40918D(__int64 a1, __int64 a2)
{
  float v2; // xmm0_4
  unsigned __int64 result; // rax
  unsigned __int64 v4; // [rsp+8h] [rbp-18h]
  unsigned __int64 v5; // [rsp+8h] [rbp-18h]
  float v6; // [rsp+1Ch] [rbp-4h]

  v4 = a1;
  if ( *(_BYTE *)(a2 + 16) != 1 )
  {
    if ( a1 < 0 )
      v2 = (float)(a1 & 1 | (unsigned int)((unsigned __int64)a1 >> 1))
         + (float)(a1 & 1 | (unsigned int)((unsigned __int64)a1 >> 1));
    else
      v2 = (float)(int)a1;
    v6 = v2 / *(float *)(a2 + 8);
    if ( v6 >= 1.8446744e19 )
      return 0LL;
    if ( v6 >= 9.223372e18 )
      v4 = (unsigned int)(int)(float)(v6 - 9.223372e18) ^ 0x8000000000000000LL;
    else
      v4 = (unsigned int)(int)v6;
  }
  v5 = sub_408FB9(v4);
  if ( v5 <= 0x1FFFFFFFFFFFFFFFLL )
    result = v5;
  else
    result = 0LL;
  return result;
}
