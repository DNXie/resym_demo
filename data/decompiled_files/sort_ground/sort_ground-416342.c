#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_416342(__time_t *a1, struct timespec *a2)
{
  int result; // eax
  int v3; // [rsp+1Ch] [rbp-24h]
  __time_t v4; // [rsp+20h] [rbp-20h]
  struct timespec requested_time; // [rsp+30h] [rbp-10h] BYREF

  if ( a1[1] >= 0 && a1[1] <= 999999999 )
  {
    v4 = *a1;
    for ( requested_time.tv_nsec = a1[1]; ; requested_time.tv_nsec = 0LL )
    {
      if ( v4 <= 2073600 )
      {
        requested_time.tv_sec = v4;
        return nanosleep(&requested_time, a2);
      }
      requested_time.tv_sec = 2073600LL;
      v3 = nanosleep(&requested_time, a2);
      v4 -= 2073600LL;
      if ( v3 )
        break;
    }
    if ( a2 )
      a2->tv_sec += v4;
    result = v3;
  }
  else
  {
    *__errno_location() = 22;
    result = -1;
  }
  return result;
}
