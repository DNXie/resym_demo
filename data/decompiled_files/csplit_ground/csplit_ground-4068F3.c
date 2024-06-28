#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4068F3(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( 0xFFFFFFFFFFFFFFFFLL / a2 < a1 )
    sub_401CAF(a1, a2, 0xFFFFFFFFFFFFFFFFLL % a2);
  return sub_406A3C(a2 * a1);
}
