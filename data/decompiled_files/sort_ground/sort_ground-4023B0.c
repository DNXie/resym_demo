#include "/share/binary_recovery/clang-parser/defs.hh"
// attributes: thunk
int sigaction(int sig, const struct sigaction *act, struct sigaction *oact)
{
  return sigaction(sig, act, oact);
}
