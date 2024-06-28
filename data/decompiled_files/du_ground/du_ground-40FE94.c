#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40FE94(__int64 a1)
{
  __int64 result; // rax
  int fd; // [rsp+1Ch] [rbp-4h]

  while ( 1 )
  {
    result = (unsigned int)sub_412BCF(a1) ^ 1;
    if ( !(_BYTE)result )
      break;
    fd = sub_412C69(a1);
    if ( fd >= 0 )
      close(fd);
  }
  return result;
}
