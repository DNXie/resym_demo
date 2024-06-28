#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40FB91(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 72) & 0x102) != 0 )
  {
    *(_QWORD *)(a1 + 88) = sub_409151(
                             31LL,
                             0LL,
                             sub_40FB67,
                             (bool (__fastcall *)(__int64, __int64))sub_40FB12,
                             (size_t)free);
    if ( !*(_QWORD *)(a1 + 88) )
      return 0LL;
  }
  else
  {
    *(_QWORD *)(a1 + 88) = malloc(0x20uLL);
    if ( !*(_QWORD *)(a1 + 88) )
      return 0LL;
    sub_412970(*(_QWORD *)(a1 + 88));
  }
  return 1LL;
}
