#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40B31D(int a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  unsigned int fd; // [rsp+Ch] [rbp-14h]
  unsigned int v8; // [rsp+18h] [rbp-8h]
  int v9; // [rsp+1Ch] [rbp-4h]

  fd = a1;
  if ( a1 >= 0 && a1 <= 2 )
  {
    v8 = sub_40B2F7(a1, a2, a3, a4, a5, a6);
    v9 = *__errno_location();
    close(a1);
    *__errno_location() = v9;
    fd = v8;
  }
  return fd;
}
