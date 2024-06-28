#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4054A4(int a1)
{
  __int64 result; // rax

  if ( a1 <= 64 || a1 > 90 )
    result = (unsigned int)a1;
  else
    result = (unsigned int)(a1 + 32);
  return result;
}
