#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_40848A()
{
  time_t timer; // [rsp+8h] [rbp-428h] BYREF
  struct tm *v2; // [rsp+10h] [rbp-420h]
  __int64 v3; // [rsp+18h] [rbp-418h]
  char v4[1016]; // [rsp+20h] [rbp-410h] BYREF
  unsigned __int64 v5; // [rsp+418h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  if ( dword_61D534 < 0 )
  {
    timer = 0LL;
    v2 = localtime(&timer);
    if ( v2 )
    {
      v3 = sub_4082D4((__int64)v4, 1001LL, haystack, (__int64)v2, 0, 0);
      if ( v3 )
        dword_61D534 = sub_40F5CF(v4, v3, 0LL);
    }
    if ( dword_61D534 < 0 )
      dword_61D534 = 0;
  }
  return (unsigned int)dword_61D534;
}
