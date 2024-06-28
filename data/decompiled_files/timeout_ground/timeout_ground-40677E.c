#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40677E(const char *a1, int *a2)
{
  __int64 result; // rax

  *a2 = sub_4065CC(a1);
  if ( *a2 >= 0 )
    result = 0LL;
  else
    result = 0xFFFFFFFFLL;
  return result;
}
