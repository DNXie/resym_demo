#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404A7F(__int64 a1)
{
  __int64 result; // rax

  free(*(void **)(a1 + 32));
  *(_QWORD *)(a1 + 32) = 0LL;
  result = a1;
  *(_DWORD *)(a1 + 20) = 0;
  return result;
}
