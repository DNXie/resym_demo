#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_4016E6(_QWORD *a1, __int64 a2, char a3)
{
  return *(_BYTE *)(*a1 + a2) == a3 && *(_BYTE *)(a1[1] + a2) != 1;
}
