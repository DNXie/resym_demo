#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4059F3(__int64 a1, unsigned int a2, size_t a3, signed __int64 *a4)
{
  __int64 result; // rax

  *a4 = 0LL;
  if ( byte_61031D )
    result = sub_405790(a1, a2, a3, a4);
  else
    result = sub_405459(a1, a2, a3, a4);
  return result;
}
