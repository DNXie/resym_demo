#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402602(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  *a1 = a2;
  result = a3;
  a1[1] = a3;
  a1[2] = a4;
  return result;
}
