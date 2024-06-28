#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *__fastcall sub_404DDA(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)sub_406EC3(4152LL);
  *result = a1;
  result[1] = sub_404D6F;
  result[2] = a2;
  return result;
}
