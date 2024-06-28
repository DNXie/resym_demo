#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4057C9(__int64 a1)
{
  __int64 result; // rax
  int fd; // [rsp+1Ch] [rbp-4h]

  while ( 1 )
  {
    result = (unsigned int)sub_40A83A(a1) ^ 1;
    if ( !(_BYTE)result )
      break;
    fd = sub_40A8D4(a1);
    if ( fd >= 0 )
      close(fd);
  }
  return result;
}
