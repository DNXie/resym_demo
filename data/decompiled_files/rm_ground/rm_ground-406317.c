#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_406317(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 72) & 0x102) != 0 )
  {
    *(_QWORD *)(a1 + 88) = sub_409BF5(31LL, 0LL, sub_4062ED, sub_406298, free);
    if ( !*(_QWORD *)(a1 + 88) )
      return 0LL;
  }
  else
  {
    *(_QWORD *)(a1 + 88) = malloc(0x20uLL);
    if ( !*(_QWORD *)(a1 + 88) )
      return 0LL;
    sub_4090DC(*(_QWORD *)(a1 + 88));
  }
  return 1LL;
}
