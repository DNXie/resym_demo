#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_405DA6()
{
  if ( byte_60F480 != 1 )
  {
    byte_60F481 = geteuid() == 0;
    byte_60F480 = 1;
  }
  return (unsigned __int8)byte_60F481;
}
