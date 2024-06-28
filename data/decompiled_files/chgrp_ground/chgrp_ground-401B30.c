#include "/share/binary_recovery/clang-parser/defs.hh"
signed __int64 sub_401B30()
{
  signed __int64 result; // rax

  if ( !byte_60F2F8 )
  {
    result = sub_401AC0();
    byte_60F2F8 = 1;
  }
  return result;
}
