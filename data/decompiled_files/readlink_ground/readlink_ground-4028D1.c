#include "/share/binary_recovery/clang-parser/defs.hh"
bool __fastcall sub_4028D1(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4[4]; // [rsp+20h] [rbp-20h] BYREF

  if ( !a1 )
    return 0;
  v4[0] = a2;
  v4[1] = a3[1];
  v4[2] = *a3;
  return sub_402C06(a1, v4) != 0;
}
