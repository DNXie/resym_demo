#include "/share/binary_recovery/clang-parser/defs.hh"
// attributes: thunk
int __xmknod(int ver, const char *path, __mode_t mode, __dev_t *dev)
{
  return _xmknod(ver, path, mode, dev);
}
