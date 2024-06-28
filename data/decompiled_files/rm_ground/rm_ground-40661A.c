#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40661A(__int64 a1)
{
  __int64 result; // rax
  int fd; // [rsp+1Ch] [rbp-4h]

  while ( 1 )
  {
    result = (unsigned int)sub_40ABDB(a1) ^ 1;
    if ( !(_BYTE)result )
      break;
    fd = sub_40AC75(a1);
    if ( fd >= 0 )
      close(fd);
  }
  return result;
}
