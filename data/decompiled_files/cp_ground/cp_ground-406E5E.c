#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_406E5E(const char *a1, __int16 a2)
{
  return (a2 & 0xF000) == 40960 || (unsigned __int8)sub_41253B() || !euidaccess(a1, 2);
}
