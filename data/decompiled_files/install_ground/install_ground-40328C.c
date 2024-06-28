#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40328C(char *a1, char *a2, __int64 a3)
{
  __int64 result; // rax
  char v5; // [rsp+2Fh] [rbp-1h] BYREF

  if ( byte_6204A4 && !sub_402960(a1, a2, a3) )
    result = 1LL;
  else
    result = sub_409AEE(a1, a2, 0LL, a3, &v5, 0LL);
  return result;
}
