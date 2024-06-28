#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402452(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)a1 = 2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 16) = 1;
  *(_BYTE *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 17) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
