#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_4097BD(__int64 a1, __int64 a2)
{
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 8));
  sub_4107E3(*(_QWORD *)a1, a2);
  *(_BYTE *)(a2 + 84) = 1;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 8));
  return pthread_cond_signal((pthread_cond_t *)(a1 + 48));
}
