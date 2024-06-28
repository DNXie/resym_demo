#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_414D4D(int a1, char a2, __m128 a3, __m128 a4, __m128 a5, __m128 a6, __m128 a7, __m128 a8, __m128 a9, __m128 a10, __int64 a11, __int64 a12, __int64 a13, __int64 a14)
{
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  unsigned int v19; // eax
  __int64 result; // rax
  int v21; // [rsp+18h] [rbp-8h]

  v21 = sub_4111E8(a1, 1, 0LL, a12, a13, a14, a3, a4, a5, a6, a7, a8, a9, a10);
  if ( v21 < 0
    || (!a2 ? (v19 = v21 & 0xFFFFFFFE) : (v19 = v21 | 1),
        v21 != v19 && (unsigned int)sub_4111E8(a1, 2, v19, v14, v15, v16, a3, a4, a5, a6, v17, v18, a9, a10) == -1) )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    result = 0LL;
  }
  return result;
}
