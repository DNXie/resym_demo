#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40981D(__int64 a1)
{
  __int64 v2; // [rsp+18h] [rbp-8h]

  pthread_mutex_lock((pthread_mutex_t *)(a1 + 8));
  while ( 1 )
  {
    v2 = sub_41088C(*(_QWORD *)a1);
    if ( v2 )
      break;
    pthread_cond_wait((pthread_cond_t *)(a1 + 48), (pthread_mutex_t *)(a1 + 8));
  }
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 8));
  sub_4096ED(v2);
  *(_BYTE *)(v2 + 84) = 0;
  return v2;
}
