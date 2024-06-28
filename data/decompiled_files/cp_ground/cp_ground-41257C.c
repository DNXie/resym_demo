#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_41257C(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( 0xFFFFFFFFFFFFFFFFLL / a2 < a1 )
    sub_412847(a1, a2, 0xFFFFFFFFFFFFFFFFLL % a2);
  return sub_4126C5(a2 * a1);
}
