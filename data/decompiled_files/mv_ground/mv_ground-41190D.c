#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_41190D(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 72) & 0x102) != 0 )
  {
    if ( *(_QWORD *)(a1 + 88) )
      sub_40C2B3(*(_QWORD *)(a1 + 88));
  }
  else
  {
    free(*(void **)(a1 + 88));
  }
}
