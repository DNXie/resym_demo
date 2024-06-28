#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_406126(unsigned __int64 *a1, int a2)
{
  __int64 result; // rax

  if ( 0xFFFFFFFFFFFFFFFFLL / a2 >= *a1 )
  {
    *a1 *= a2;
    result = 0LL;
  }
  else
  {
    *a1 = -1LL;
    result = 1LL;
  }
  return result;
}
