#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404121(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( 0xFFFFFFFFFFFFFFFFLL / a2 < a1 )
    sub_4043EC(a1, a2, 0xFFFFFFFFFFFFFFFFLL % a2);
  return sub_40426A(a2 * a1);
}
