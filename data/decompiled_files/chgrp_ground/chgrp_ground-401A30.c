#include "/share/binary_recovery/clang-parser/defs.hh"
// attributes: thunk
int fchownat(int fd, const char *file, __uid_t owner, __gid_t group, int flag)
{
  return fchownat(fd, file, owner, group, flag);
}
