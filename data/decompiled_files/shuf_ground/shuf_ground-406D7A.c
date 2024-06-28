#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_406D7A(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( 0xFFFFFFFFFFFFFFFFLL / a2 < a1 )
    sub_407045(a1, a2, 0xFFFFFFFFFFFFFFFFLL % a2);
  return sub_406EC3(a2 * a1);
}
