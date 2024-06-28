#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405B46(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = a1;
  *(_QWORD *)(a1 + 8) = a2;
  return result;
}
