#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_40C696(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  result = a2;
  if ( a1 >= a2 )
    result = a1;
  return result;
}
