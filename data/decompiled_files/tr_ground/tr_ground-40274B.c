#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_40274B(_QWORD *a1, __int64 a2)
{
  unsigned __int64 i; // [rsp+18h] [rbp-8h]

  if ( !sub_4016E6(a1, a2, 42) )
    return 0LL;
  for ( i = a2 + 1; a1[2] > i; ++i )
  {
    if ( (unsigned int)(unsigned __int8)sub_4015CD(*(_BYTE *)(*a1 + i)) - 48 > 9 || *(_BYTE *)(a1[1] + i) )
      return sub_4016E6(a1, i, 93);
  }
  return 0LL;
}
