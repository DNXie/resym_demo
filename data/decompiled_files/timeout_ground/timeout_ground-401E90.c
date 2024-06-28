#include "/share/binary_recovery/clang-parser/defs.hh"
signed __int64 sub_401E90()
{
  signed __int64 result; // rax

  if ( !byte_60C518 )
  {
    result = sub_401E20();
    byte_60C518 = 1;
  }
  return result;
}
