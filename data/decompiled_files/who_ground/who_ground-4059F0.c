#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4059F0(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( 0xFFFFFFFFFFFFFFFFLL / a2 < a1 )
    sub_405CBB(a1, a2, 0xFFFFFFFFFFFFFFFFLL % a2);
  return sub_405B39(a2 * a1);
}
