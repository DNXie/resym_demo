#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404104(_DWORD *a1)
{
  __int64 result; // rax

  result = *a1 & 0x100;
  if ( (_DWORD)result )
    result = sub_404182(a1, 0LL, 1LL);
  return result;
}