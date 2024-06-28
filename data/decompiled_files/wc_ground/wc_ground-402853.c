#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402853(const char *a1, __int64 a2)
{
  __int64 result; // rax
  int *v3; // rax
  unsigned __int8 v4; // [rsp+1Bh] [rbp-5h]
  int fd; // [rsp+1Ch] [rbp-4h]

  if ( a1 && strcmp(a1, "-") )
  {
    fd = open(a1, 0);
    if ( fd == -1 || (v4 = sub_401D73(fd, a1, a2), close(fd)) )
    {
      v3 = __errno_location();
      error(0, *v3, "%s", a1);
      result = 0LL;
    }
    else
    {
      result = v4;
    }
  }
  else
  {
    byte_609314 = 1;
    result = sub_401D73(0, a1, a2);
  }
  return result;
}
