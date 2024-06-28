#include "/share/binary_recovery/clang-parser/defs.hh"
// attributes: thunk
int _obstack_begin(struct obstack *a1, int a2, int a3, void *(*a4)(__int64), void (*a5)(void *))
{
  return obstack_begin(a1, a2, a3, a4, a5);
}
