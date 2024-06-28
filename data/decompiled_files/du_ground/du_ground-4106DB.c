#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_4106DB(int a1)
{
  _BOOL8 result; // rax
  struct statfs buf; // [rsp+10h] [rbp-80h] BYREF

  if ( fstatfs(a1, &buf) )
    result = 0LL;
  else
    result = buf.f_type == 1382369651;
  return result;
}
