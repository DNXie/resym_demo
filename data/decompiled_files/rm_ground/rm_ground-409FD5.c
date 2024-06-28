#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_409FD5(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  *a2 = 0LL;
  a2[1] = *(_QWORD *)(a1 + 72);
  result = a1;
  *(_QWORD *)(a1 + 72) = a2;
  return result;
}
