#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404DE3(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( 0xFFFFFFFFFFFFFFFFLL / a2 < a1 )
    sub_4050AE(a1, a2, 0xFFFFFFFFFFFFFFFFLL % a2);
  return sub_404F2C(a2 * a1);
}
