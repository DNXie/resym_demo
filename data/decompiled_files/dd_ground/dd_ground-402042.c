#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402042(__int64 a1)
{
  __int64 result; // rax
  int i; // [rsp+14h] [rbp-4h]

  for ( i = 0; i <= 255; ++i )
  {
    result = i;
    byte_60E4A0[i] = *(_BYTE *)((unsigned __int8)byte_60E4A0[i] + a1);
  }
  byte_60E390 = 1;
  return result;
}
