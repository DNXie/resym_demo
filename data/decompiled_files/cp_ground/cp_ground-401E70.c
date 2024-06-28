#include "/share/binary_recovery/clang-parser/defs.hh"
// attributes: thunk
int utimensat(int fd, const char *path, const struct timespec times[2], int flags)
{
  return utimensat(fd, path, times, flags);
}
