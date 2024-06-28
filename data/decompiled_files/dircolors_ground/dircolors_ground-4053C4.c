#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_4053C4(int a1)
{
  return a1 > 32 && a1 <= 126 && (a1 <= 47 || a1 > 57) && ((int)(a1 & 0xFFFFFFDF) <= 64 || (int)(a1 & 0xFFFFFFDF) > 90);
}
