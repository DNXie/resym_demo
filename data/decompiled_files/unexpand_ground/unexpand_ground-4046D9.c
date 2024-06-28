#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4046D9(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( 0xFFFFFFFFFFFFFFFFLL / a2 < a1 )
    sub_4049A4(a1, a2, 0xFFFFFFFFFFFFFFFFLL % a2);
  return sub_404822(a2 * a1);
}
