#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40494A(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-8h]

  v4 = *(_QWORD *)(8 * a2 + a1);
  *(_QWORD *)(a1 + 8 * a2) = *(_QWORD *)(8 * a3 + a1);
  result = v4;
  *(_QWORD *)(a1 + 8 * a3) = v4;
  return result;
}
