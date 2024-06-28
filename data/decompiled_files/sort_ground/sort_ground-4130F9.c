#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4130F9(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+18h] [rbp-8h]

  v2 = *a1;
  memset(a1, 0, 0x1038uLL);
  free(a1);
  if ( v2 )
    result = sub_415E9D(v2);
  else
    result = 0LL;
  return result;
}
