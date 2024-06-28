#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_406393(__int64 a1)
{
  return !*(_QWORD *)(a1 + 32)
      && !*(_QWORD *)(a1 + 40)
      && *(_BYTE *)(a1 + 48) != 1
      && *(_BYTE *)(a1 + 49) != 1
      && !sub_40603C((_BYTE *)a1)
      && *(_BYTE *)(a1 + 54) != 1
      && *(_BYTE *)(a1 + 56) != 1
      && *(_BYTE *)(a1 + 51) != 1;
}
