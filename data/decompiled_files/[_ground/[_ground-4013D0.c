#include "/share/binary_recovery/clang-parser/defs.hh"
// positive sp value has been detected, the output may be wrong!
void __fastcall __noreturn start(__int64 a1, __int64 a2, void (*a3)(void))
{
  __int64 v3; // rax
  int v4; // esi
  __int64 v5; // [rsp-8h] [rbp-8h] BYREF
  char *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v4 = v5;
  v5 = v3;
  __libc_start_main((int (__fastcall *)(int, char **, char **))main, v4, &retaddr, (void (*)(void))init, fini, a3, &v5);
  __halt();
}
