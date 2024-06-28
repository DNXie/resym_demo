#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403FC5(double a1)
{
  __int64 v1; // rdx
  __int64 v3[2]; // [rsp+10h] [rbp-10h] BYREF

  v3[0] = sub_404253(a1);
  v3[1] = v1;
  do
  {
    *__errno_location() = 0;
    if ( !(unsigned int)sub_4040E9(v3, 0LL) )
      return 0LL;
  }
  while ( *__errno_location() == 4 || !*__errno_location() );
  return 0xFFFFFFFFLL;
}
