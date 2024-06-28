#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401E94(__int64 a1)
{
  __int64 result; // rax

  *(_BYTE *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 4;
  *(_BYTE *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 9) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)(a1 + 24) = isatty(0) != 0;
  *(_BYTE *)(a1 + 25) = 0;
  result = a1;
  *(_BYTE *)(a1 + 26) = 0;
  return result;
}
