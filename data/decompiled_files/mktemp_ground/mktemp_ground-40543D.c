#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *__fastcall sub_40543D(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = sub_40505A(0x18uLL, a2);
  *result = a1;
  result[2] = 0LL;
  result[1] = result[2];
  return result;
}
