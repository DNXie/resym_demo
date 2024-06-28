#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *__fastcall sub_403C91(__int64 a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)sub_40986C(16LL);
  *result = a1;
  result[1] = qword_618538;
  qword_618538 = (__int64)result;
  return result;
}
