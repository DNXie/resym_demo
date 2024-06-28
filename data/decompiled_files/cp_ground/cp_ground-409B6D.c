#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_409B6D()
{
  if ( mask == -1 )
  {
    mask = umask(0);
    umask(mask);
  }
  return mask;
}
