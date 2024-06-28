#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402C0D(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 8) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  result = a1;
  *(_QWORD *)(a1 + 16) = -1LL;
  return result;
}
