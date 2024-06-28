#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_409515()
{
  struct timespec tp; // [rsp+0h] [rbp-10h] BYREF

  if ( clock_gettime(1, &tp) )
    sub_4099ED(&tp);
  return sub_4094F5(tp.tv_sec, tp.tv_nsec);
}
