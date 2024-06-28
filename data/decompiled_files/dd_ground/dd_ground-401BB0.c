#include "/share/binary_recovery/clang-parser/defs.hh"
signed __int64 sub_401BB0()
{
  signed __int64 result; // rax

  if ( !byte_60E320 )
  {
    result = sub_401B40();
    byte_60E320 = 1;
  }
  return result;
}
