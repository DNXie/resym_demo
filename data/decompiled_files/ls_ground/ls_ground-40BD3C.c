#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40BD3C(unsigned __int8 a1)
{
  if ( (unsigned __int8)sub_415750(a1) )
    return 0LL;
  if ( (unsigned __int8)sub_4156D6(a1) )
    return a1;
  if ( a1 == 126 )
    return 0xFFFFFFFFLL;
  return (unsigned int)a1 + 256;
}
