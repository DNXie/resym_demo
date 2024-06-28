#include "/share/binary_recovery/clang-parser/defs.hh"
// attributes: thunk
int sigprocmask(int how, const sigset_t *set, sigset_t *oset)
{
  return sigprocmask(how, set, oset);
}
