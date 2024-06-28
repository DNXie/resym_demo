#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4035B5(_QWORD *a1)
{
  __int64 result; // rax

  a1[1] = sub_406D88(32LL);
  *a1 = a1[1];
  result = *a1;
  *(_QWORD *)(*a1 + 8LL) = 0LL;
  return result;
}
