#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405999(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 72) & 0x102) != 0 )
  {
    *(_QWORD *)(a1 + 88) = sub_409277(31LL, 0LL, sub_40596F, sub_40591A, free);
    if ( !*(_QWORD *)(a1 + 88) )
      return 0LL;
  }
  else
  {
    *(_QWORD *)(a1 + 88) = malloc(0x20uLL);
    if ( !*(_QWORD *)(a1 + 88) )
      return 0LL;
    sub_40875E(*(_QWORD *)(a1 + 88));
  }
  return 1LL;
}
