#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_40941E(__int64 a1, __int64 a2)
{
  return (*(_DWORD *)(a1 + 72) & 0x10) != 0 && (*(_DWORD *)(a1 + 72) & 1) == 0
      || (*(_DWORD *)(a1 + 72) & 0x10) != 0 && (*(_DWORD *)(a1 + 72) & 1) != 0 && *(_QWORD *)(a2 + 88);
}
