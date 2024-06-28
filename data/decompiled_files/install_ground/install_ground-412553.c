#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_412553()
{
  if ( byte_622A78 != 1 )
  {
    byte_622A79 = geteuid() == 0;
    byte_622A78 = 1;
  }
  return (unsigned __int8)byte_622A79;
}
