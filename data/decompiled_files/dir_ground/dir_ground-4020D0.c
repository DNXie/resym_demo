#include "/share/binary_recovery/clang-parser/defs.hh"
// attributes: thunk
int _setjmp(struct __jmp_buf_tag env[1])
{
  return setjmp(env);
}
