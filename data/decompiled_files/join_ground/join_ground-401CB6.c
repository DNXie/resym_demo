#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401CB6(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    free(*(void **)(a1 + 40));
    *(_QWORD *)(a1 + 40) = 0LL;
    free(*(void **)(a1 + 16));
    result = a1;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
