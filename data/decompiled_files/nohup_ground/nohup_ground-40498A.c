#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40498A(int a1, const char *a2, int a3, unsigned int a4)
{
  int fd; // [rsp+24h] [rbp-Ch]
  unsigned int v6; // [rsp+28h] [rbp-8h]
  int v7; // [rsp+2Ch] [rbp-4h]

  fd = open(a2, a3, a4);
  if ( fd == a1 || fd < 0 )
    return (unsigned int)fd;
  v6 = dup2(fd, a1);
  v7 = *__errno_location();
  close(fd);
  *__errno_location() = v7;
  return v6;
}
