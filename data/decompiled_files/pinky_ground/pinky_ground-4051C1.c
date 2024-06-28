#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4051C1(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( 0xFFFFFFFFFFFFFFFFLL / a2 < a1 )
    sub_40548C(a1, a2, 0xFFFFFFFFFFFFFFFFLL % a2);
  return sub_40530A(a2 * a1);
}
