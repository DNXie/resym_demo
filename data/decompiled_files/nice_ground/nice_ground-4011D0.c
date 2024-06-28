#include "/share/binary_recovery/clang-parser/defs.hh"
// attributes: thunk
int setpriority(__priority_which_t which, id_t who, int prio)
{
  return setpriority(which, who, prio);
}
