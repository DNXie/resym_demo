#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_401D7F()
{
  __int64 result; // rax

  if ( byte_60A2F9 != 1 )
    return sub_4025C1();
  result = sub_40250C(stderr);
  if ( (_DWORD)result )
    _exit(1);
  return result;
}
