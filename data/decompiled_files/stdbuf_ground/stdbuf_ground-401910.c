#include "/share/binary_recovery/clang-parser/defs.hh"
// attributes: thunk
int __xstat(int ver, const char *filename, struct stat *stat_buf)
{
  return _xstat(ver, filename, stat_buf);
}
