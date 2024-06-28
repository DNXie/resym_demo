#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_41253B()
{
  if ( byte_61DA78 != 1 )
  {
    byte_61DA79 = geteuid() == 0;
    byte_61DA78 = 1;
  }
  return (unsigned __int8)byte_61DA79;
}
