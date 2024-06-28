#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_405AC6(struct timespec *a1)
{
  int result; // eax
  struct timeval tv; // [rsp+10h] [rbp-10h] BYREF

  result = clock_gettime(0, a1);
  if ( result )
  {
    gettimeofday(&tv, 0LL);
    a1->tv_sec = tv.tv_sec;
    result = (int)a1;
    a1->tv_nsec = 1000 * tv.tv_usec;
  }
  return result;
}
