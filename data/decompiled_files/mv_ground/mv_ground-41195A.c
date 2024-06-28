#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_41195A(__int64 a1)
{
  __int64 result; // rax
  int fd; // [rsp+1Ch] [rbp-4h]

  while ( 1 )
  {
    result = (unsigned int)sub_415090(a1) ^ 1;
    if ( !(_BYTE)result )
      break;
    fd = sub_41512A(a1);
    if ( fd >= 0 )
      close(fd);
  }
  return result;
}
