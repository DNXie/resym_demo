#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405897(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( 0xFFFFFFFFFFFFFFFFLL / a2 < a1 )
    sub_405B62(a1, a2, 0xFFFFFFFFFFFFFFFFLL % a2);
  return sub_4059E0(a2 * a1);
}
