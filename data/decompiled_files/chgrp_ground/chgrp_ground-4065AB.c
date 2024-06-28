#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4065AB(int a1, int a2, int a3, int *a4, int a5, int a6)
{
  int fd; // [rsp+20h] [rbp-10h]
  _BYTE v9[12]; // [rsp+24h] [rbp-Ch]

  fd = sub_40AC03(a1, a2, a3 | 0x10900u, a2, a5, a6);
  if ( fd < 0 )
    return 0LL;
  sub_408EA0((unsigned int)fd, 1LL);
  *(_QWORD *)&v9[4] = fdopendir(fd);
  if ( *(_QWORD *)&v9[4] )
  {
    *a4 = fd;
  }
  else
  {
    *(_QWORD *)v9 = (unsigned int)*__errno_location();
    close(fd);
    *__errno_location() = *(_DWORD *)v9;
  }
  return *(_QWORD *)&v9[4];
}
