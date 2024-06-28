#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_410D61()
{
  if ( byte_61B9D8 != 1 )
  {
    byte_61B9D9 = geteuid() == 0;
    byte_61B9D8 = 1;
  }
  return (unsigned __int8)byte_61B9D9;
}
