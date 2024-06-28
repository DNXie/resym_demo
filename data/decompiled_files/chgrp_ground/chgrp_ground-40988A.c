#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40988A(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 1065353216;
  *(_DWORD *)(a1 + 8) = 1061997773;
  *(_DWORD *)(a1 + 12) = 1068826100;
  result = a1;
  *(_BYTE *)(a1 + 16) = 0;
  return result;
}
