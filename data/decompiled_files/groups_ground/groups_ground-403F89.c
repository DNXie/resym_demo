#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403F89(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdx

  v2 = 0xFFFFFFFFFFFFFFFFLL % a2;
  if ( 0xFFFFFFFFFFFFFFFFLL / a2 < a1 )
    sub_404254(a1, a2, v2);
  return sub_4040D2(a2 * a1, a2, v2);
}
