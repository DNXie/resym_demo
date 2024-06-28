#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *__fastcall sub_401A03(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax

  if ( a1[3] >= a1[4] )
    a1[5] = sub_406247(a1[5], a1 + 4, 16LL);
  *(_QWORD *)(16LL * a1[3] + a1[5]) = a2;
  *(_QWORD *)(16LL * a1[3] + a1[5] + 8) = a3;
  result = a1;
  ++a1[3];
  return result;
}
