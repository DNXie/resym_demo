#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_403524(int a1, int a2, const char *a3)
{
  int *v3; // rax
  int *v4; // rax
  __int16 s[8]; // [rsp+10h] [rbp-10h] BYREF

  if ( (unsigned int)sub_4034F5(0, (__int64)s) )
  {
    if ( *__errno_location() != 22 )
    {
      v3 = __errno_location();
      error(1, *v3, "%s", a3);
    }
    memset(s, 0, 8uLL);
  }
  if ( a1 >= 0 )
    s[0] = a1;
  if ( a2 >= 0 )
    s[1] = a2;
  if ( ioctl(0, 0x5414uLL, s) )
  {
    v4 = __errno_location();
    error(1, *v4, "%s", a3);
  }
}
