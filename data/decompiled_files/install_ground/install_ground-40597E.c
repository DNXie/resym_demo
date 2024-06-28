#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_40597E(__int64 a1)
{
  return (*(_DWORD *)(a1 + 24) & 0xF000) == 0x8000 && *(_QWORD *)(a1 + 64) < *(_QWORD *)(a1 + 48) / 512LL;
}
