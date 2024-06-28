#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *__fastcall sub_40598B(__int64 a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)sub_414989(16LL);
  *result = a1;
  result[1] = qword_61D6E8;
  qword_61D6E8 = (__int64)result;
  return result;
}
