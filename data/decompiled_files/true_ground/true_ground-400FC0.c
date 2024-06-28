#include "/share/binary_recovery/clang-parser/defs.hh"
// attributes: thunk
int __fastcall __libc_start_main(int (__fastcall *main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end)
{
  return _libc_start_main(main, argc, ubp_av, init, fini, rtld_fini, stack_end);
}
