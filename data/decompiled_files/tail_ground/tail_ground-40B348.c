#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40B348(double a1)
{
  __int64 v1; // rdx
  __int64 v3[2]; // [rsp+10h] [rbp-10h] BYREF

  v3[0] = sub_40C2A8(a1);
  v3[1] = v1;
  do
  {
    *__errno_location() = 0;
    if ( !(unsigned int)sub_40C13E(v3, 0LL) )
      return 0LL;
  }
  while ( *__errno_location() == 4 || !*__errno_location() );
  return 0xFFFFFFFFLL;
}
