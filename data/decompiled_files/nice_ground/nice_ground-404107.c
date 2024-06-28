#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404107(__int64 *a1, int a2)
{
  __int64 result; // rax

  if ( *a1 >= (__int64)0x8000000000000000LL / a2 )
  {
    if ( 0x7FFFFFFFFFFFFFFFLL / a2 >= *a1 )
    {
      *a1 *= a2;
      result = 0LL;
    }
    else
    {
      *a1 = 0x7FFFFFFFFFFFFFFFLL;
      result = 1LL;
    }
  }
  else
  {
    *a1 = 0x8000000000000000LL;
    result = 1LL;
  }
  return result;
}
