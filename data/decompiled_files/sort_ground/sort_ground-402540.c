#include "/share/binary_recovery/clang-parser/defs.hh"
// attributes: thunk
int nanosleep(const struct timespec *requested_time, struct timespec *remaining)
{
  return nanosleep(requested_time, remaining);
}
