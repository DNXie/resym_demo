#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_40969E()
{
  if ( mask == -1 )
  {
    mask = umask(0);
    umask(mask);
  }
  return mask;
}
