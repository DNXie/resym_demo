#include "/share/binary_recovery/clang-parser/defs.hh"
// attributes: thunk
int futimesat(int fd, const char *file, const struct timeval tvp[2])
{
  return futimesat(fd, file, tvp);
}
