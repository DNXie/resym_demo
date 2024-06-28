#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402637(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  *a1 += *a2;
  result = sub_40239D(a1[1], a1[2], a2[1], a2[2]);
  if ( (int)result < 0 )
  {
    v3 = a2[2];
    result = a2[1];
    a1[1] = result;
    a1[2] = v3;
  }
  return result;
}
