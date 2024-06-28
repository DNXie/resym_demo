#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_409729(__int64 a1)
{
  sub_4107BA(*(_QWORD *)a1);
  pthread_cond_destroy((pthread_cond_t *)(a1 + 48));
  return pthread_mutex_destroy((pthread_mutex_t *)(a1 + 8));
}
