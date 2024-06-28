#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_40BA8F(const struct timespec *a1)
{
  int v2; // [rsp+1Ch] [rbp-14h]
  struct timeval tv; // [rsp+20h] [rbp-10h] BYREF

  v2 = clock_settime(0, a1);
  if ( !v2 || *__errno_location() == 1 )
    return v2;
  tv.tv_sec = a1->tv_sec;
  tv.tv_usec = a1->tv_nsec / 1000;
  return settimeofday(&tv, 0LL);
}
