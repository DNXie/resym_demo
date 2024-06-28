#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_406223(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 72) & 0x102) != 0 )
  {
    *(_QWORD *)(a1 + 88) = sub_409B01(31LL, 0LL, sub_4061F9, sub_4061A4, free);
    if ( !*(_QWORD *)(a1 + 88) )
      return 0LL;
  }
  else
  {
    *(_QWORD *)(a1 + 88) = malloc(0x20uLL);
    if ( !*(_QWORD *)(a1 + 88) )
      return 0LL;
    sub_408FE8(*(_QWORD *)(a1 + 88));
  }
  return 1LL;
}
