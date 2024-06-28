#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40B048(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( 0xFFFFFFFFFFFFFFFFLL / a2 < a1 )
    sub_40B313(a1, a2, 0xFFFFFFFFFFFFFFFFLL % a2);
  return sub_40B191(a2 * a1);
}
