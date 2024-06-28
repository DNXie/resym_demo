#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *__fastcall sub_405FF1(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *result; // rax

  a1[10] = a2;
  a1[11] = a3;
  a1[12] = a4;
  result = a1;
  a1[13] = a5;
  return result;
}
