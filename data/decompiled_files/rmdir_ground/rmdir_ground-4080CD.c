#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_4080CD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int16 a8)
{
  if ( (a8 & 0x7FFF) == 0 )
    return HIDWORD(a7) >> 31;
  if ( (a8 & 0x7FFF) == 0x7FFF )
    return (HIDWORD(a7) ^ 0x80000000 | (unsigned int)a7) != 0;
  return a7 >= 0;
}
