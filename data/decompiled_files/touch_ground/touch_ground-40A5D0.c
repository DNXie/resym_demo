#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40A5D0(int a1)
{
  __int64 result; // rax

  if ( a1 <= 96 || a1 > 122 )
    result = (unsigned int)a1;
  else
    result = (unsigned int)(a1 - 32);
  return result;
}
