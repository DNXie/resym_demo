#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_406F59(const char *a1, __int16 a2)
{
  return (a2 & 0xF000) == 40960 || (unsigned __int8)sub_412553() || !euidaccess(a1, 2);
}
