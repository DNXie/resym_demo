#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405E24(int a1)
{
  int fd; // [rsp+1Ch] [rbp-4h]

  fd = open("/dev/null", 0);
  if ( fd == a1 )
    return 1LL;
  if ( fd >= 0 )
  {
    close(fd);
    *__errno_location() = 9;
  }
  return 0LL;
}
