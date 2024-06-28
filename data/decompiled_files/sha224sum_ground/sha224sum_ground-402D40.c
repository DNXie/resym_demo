#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402D40(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)a1 = 1779033703;
  *(_DWORD *)(a1 + 4) = -1150833019;
  *(_DWORD *)(a1 + 8) = 1013904242;
  *(_DWORD *)(a1 + 12) = -1521486534;
  *(_DWORD *)(a1 + 16) = 1359893119;
  *(_DWORD *)(a1 + 20) = -1694144372;
  *(_DWORD *)(a1 + 24) = 528734635;
  *(_DWORD *)(a1 + 28) = 1541459225;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 36);
  result = a1;
  *(_QWORD *)(a1 + 40) = 0LL;
  return result;
}
