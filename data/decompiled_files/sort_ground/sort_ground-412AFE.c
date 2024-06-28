#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *__fastcall sub_412AFE(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)sub_414F92(4152LL);
  *result = a1;
  result[1] = sub_412A93;
  result[2] = a2;
  return result;
}
