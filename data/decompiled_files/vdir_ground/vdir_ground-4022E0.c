#include "/share/binary_recovery/clang-parser/defs.hh"
// attributes: thunk
void __noreturn longjmp(struct __jmp_buf_tag env[1], int val)
{
  longjmp(env, val);
}
