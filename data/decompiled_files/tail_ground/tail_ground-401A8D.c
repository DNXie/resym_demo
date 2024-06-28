#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401A8D(__int64 a1, int a2, __int64 a3, int a4)
{
  if ( a1 < a3 )
    return 0xFFFFFFFFLL;
  if ( a1 > a3 )
    return 1LL;
  return (unsigned int)(a2 - a4);
}
