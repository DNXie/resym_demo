#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_403497(int a1, __int64 a2, struct termios *a3)
{
  int result; // eax
  speed_t speed; // [rsp+2Ch] [rbp-4h]

  result = sub_404219(a2);
  speed = result;
  if ( !a1 || a1 == 2 )
    result = cfsetispeed(a3, result);
  if ( a1 == 1 || a1 == 2 )
    result = cfsetospeed(a3, speed);
  return result;
}
