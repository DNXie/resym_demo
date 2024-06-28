#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40EA03(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( 0xFFFFFFFFFFFFFFFFLL / a2 < a1 )
    sub_40ECCE(a1, a2, 0xFFFFFFFFFFFFFFFFLL % a2);
  return sub_40EB4C(a2 * a1);
}
