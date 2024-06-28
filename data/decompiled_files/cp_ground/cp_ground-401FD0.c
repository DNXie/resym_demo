#include "/share/binary_recovery/clang-parser/defs.hh"
// attributes: thunk
int __lxstat(int ver, const char *filename, struct stat *stat_buf)
{
  return _lxstat(ver, filename, stat_buf);
}
