#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *__fastcall sub_406D47(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)sub_408AAE(4152LL);
  *result = a1;
  result[1] = sub_406CDC;
  result[2] = a2;
  return result;
}
