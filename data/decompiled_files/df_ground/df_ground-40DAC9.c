#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40DAC9(int a1)
{
  unsigned int fd; // [rsp+Ch] [rbp-14h]
  unsigned int v3; // [rsp+18h] [rbp-8h]
  int v4; // [rsp+1Ch] [rbp-4h]

  fd = a1;
  if ( a1 >= 0 && a1 <= 2 )
  {
    v3 = sub_411F74((unsigned int)a1);
    v4 = *__errno_location();
    close(a1);
    *__errno_location() = v4;
    fd = v3;
  }
  return fd;
}
