#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402081(int a1, int a2)
{
  __int64 result; // rax

  result = sub_404851(32LL);
  *(_BYTE *)result = 61;
  *(_BYTE *)(result + 1) = 1;
  *(_DWORD *)(result + 4) = 4095;
  *(_DWORD *)(result + 8) = a1;
  *(_DWORD *)(result + 12) = a2;
  *(_BYTE *)(result + 17) = 0;
  return result;
}
