#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_409766(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = sub_410719(sub_409675, 2 * a2);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 8), 0LL);
  return pthread_cond_init((pthread_cond_t *)(a1 + 48), 0LL);
}
