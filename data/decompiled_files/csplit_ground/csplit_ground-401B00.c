#include "/share/binary_recovery/clang-parser/defs.hh"
signed __int64 sub_401B00()
{
  signed __int64 result; // rax

  if ( !byte_60B318 )
  {
    result = sub_401A90();
    byte_60B318 = 1;
  }
  return result;
}
