#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_409AE5(__int64 a1)
{
  return (*__errno_location() == 1 || *__errno_location() == 22) && *(_BYTE *)(a1 + 25) != 1;
}
