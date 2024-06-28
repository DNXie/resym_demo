#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405ED4(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10, __int64 a11, __int64 a12, __int64 a13)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 160) += a2 * a13;
  *(_QWORD *)(a1 + 152) += a2 * a12;
  *(_QWORD *)(a1 + 144) += a2 * a11;
  *(_QWORD *)(a1 + 136) += a2 * a10;
  *(_QWORD *)(a1 + 128) += a2 * a9;
  *(_QWORD *)(a1 + 120) += a2 * a8;
  *(_QWORD *)(a1 + 112) += a2 * a7;
  result = a1;
  *(_BYTE *)(a1 + 169) = 1;
  return result;
}
