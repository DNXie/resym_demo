#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *__fastcall sub_4057AB(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = sub_40505A(0x1038uLL, a2);
  *result = a1;
  result[1] = sub_405740;
  result[2] = a2;
  return result;
}
