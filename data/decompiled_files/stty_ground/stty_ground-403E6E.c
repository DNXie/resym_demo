#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403E6E(const struct termios *a1, unsigned __int8 a2)
{
  speed_t v2; // ebx
  speed_t v3; // eax
  __int64 v4; // rdx
  speed_t v5; // eax
  __int64 v6; // rbx
  speed_t v7; // eax
  __int64 v8; // rcx
  __int64 result; // rax

  if ( cfgetispeed(a1) && (v2 = cfgetispeed(a1), v2 != cfgetospeed(a1)) )
  {
    v5 = cfgetospeed(a1);
    v6 = sub_4042A7(v5);
    v7 = cfgetispeed(a1);
    v8 = sub_4042A7(v7);
    if ( a2 )
      sub_4019C6((__int64)"ispeed %lu baud; ospeed %lu baud;", v8, v6);
    else
      sub_4019C6((__int64)"%lu %lu\n", v8, v6);
  }
  else
  {
    v3 = cfgetospeed(a1);
    v4 = sub_4042A7(v3);
    if ( a2 )
      sub_4019C6((__int64)"speed %lu baud;", v4);
    else
      sub_4019C6((__int64)"%lu\n", v4);
  }
  result = a2 ^ 1u;
  if ( a2 != 1 )
    dword_6132C8 = 0;
  return result;
}
