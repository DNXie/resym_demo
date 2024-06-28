#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_410DA2(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( 0xFFFFFFFFFFFFFFFFLL / a2 < a1 )
    sub_41106D(a1, a2, 0xFFFFFFFFFFFFFFFFLL % a2);
  return sub_410EEB(a2 * a1);
}
