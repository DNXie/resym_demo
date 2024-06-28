#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_40FE47(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 72) & 0x102) != 0 )
  {
    if ( *(_QWORD *)(a1 + 88) )
      sub_4093BC(*(_QWORD *)(a1 + 88));
  }
  else
  {
    free(*(void **)(a1 + 88));
  }
}
