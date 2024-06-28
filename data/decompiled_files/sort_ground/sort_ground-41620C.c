#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_41620C(_DWORD *a1)
{
  __int64 result; // rax

  result = *a1 & 0x100;
  if ( (_DWORD)result )
    result = sub_41628A(a1, 0LL, 1LL);
  return result;
}
