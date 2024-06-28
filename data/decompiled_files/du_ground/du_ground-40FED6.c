#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40FED6(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( *(_WORD *)(a1 + 112) != 11 )
    abort();
  if ( a2 )
    result = 2LL;
  else
    result = 1LL;
  *(_QWORD *)(a1 + 168) = result;
  return result;
}
