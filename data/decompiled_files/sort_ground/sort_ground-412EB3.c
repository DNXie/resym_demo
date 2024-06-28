#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_412EB3(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = a1;
  *(_QWORD *)(a1 + 16) = a2;
  return result;
}
