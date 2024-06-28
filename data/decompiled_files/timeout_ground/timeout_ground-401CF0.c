#include "/share/binary_recovery/clang-parser/defs.hh"
// attributes: thunk
int timer_create(clockid_t clock_id, struct sigevent *evp, timer_t *timerid)
{
  return timer_create(clock_id, evp, timerid);
}
