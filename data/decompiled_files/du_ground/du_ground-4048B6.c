#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4048B6(__int64 a1, unsigned __int64 a2)
{
  if ( a2 && a2 <= 0x7FFFFFFFFFFFFFFELL )
    return a2;
  if ( *(_QWORD *)(a1 + 8) )
    return sub_40B0E2(*(_QWORD *)(a1 + 8), a2);
  *(_QWORD *)(a1 + 8) = sub_40B025(0x7FFFFFFFFFFFFFFFLL);
  if ( *(_QWORD *)(a1 + 8) )
    return sub_40B0E2(*(_QWORD *)(a1 + 8), a2);
  return -1LL;
}
