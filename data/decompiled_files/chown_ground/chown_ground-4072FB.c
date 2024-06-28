#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_4072FB(int a1)
{
  struct statfs buf; // [rsp+10h] [rbp-80h] BYREF

  if ( fstatfs(a1, &buf) )
    return 1LL;
  return buf.f_type != 26985 && buf.f_type != 16914836;
}
