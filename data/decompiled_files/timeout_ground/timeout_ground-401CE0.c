#include "/share/binary_recovery/clang-parser/defs.hh"
// attributes: thunk
int timer_settime(timer_t timerid, int flags, const struct itimerspec *value, struct itimerspec *ovalue)
{
  return timer_settime(timerid, flags, value, ovalue);
}
