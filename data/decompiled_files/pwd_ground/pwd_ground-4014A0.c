#include "/share/binary_recovery/clang-parser/defs.hh"
// attributes: thunk
int __fxstatat(int ver, int fildes, const char *filename, struct stat *stat_buf, int flag)
{
  return _fxstatat(ver, fildes, filename, stat_buf, flag);
}
