#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401BFD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, __int64 a14)
{
  __int64 result; // rax

  if ( a14 <= 0 || (unsigned __int64)a14 > 0x2000000000000000LL || a14 <= 0x7FFF )
    result = 0x8000LL;
  else
    result = a14;
  return result;
}
