#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40BA9A(__int64 a1)
{
  __int64 v2; // rax

  if ( *(_QWORD *)(a1 + 40) > *(_QWORD *)(a1 + 32) )
    return 0LL;
  if ( (*(_DWORD *)a1 & 0x100) != 0 )
    v2 = *(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 72);
  else
    v2 = 0LL;
  return *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8) + v2;
}
