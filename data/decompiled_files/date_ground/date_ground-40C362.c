#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40C362(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( 0xFFFFFFFFFFFFFFFFLL / a2 < a1 )
    sub_40C62D(a1, a2, 0xFFFFFFFFFFFFFFFFLL % a2);
  return sub_40C4AB(a2 * a1);
}
