#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_4030E9(_BYTE *a1)
{
  int v2; // eax

  if ( *a1 != 45 )
    return 0LL;
  v2 = (char)a1[1];
  if ( v2 == 107 )
    return 1LL;
  if ( v2 > 107 )
  {
    if ( v2 > 117 )
    {
      if ( v2 < 119 || v2 > 120 && v2 != 122 )
        return 0LL;
    }
    else if ( v2 < 114 && (unsigned int)(v2 - 110) > 2 )
    {
      return 0LL;
    }
    return 1LL;
  }
  if ( v2 > 79 )
    return v2 == 83 || v2 >= 83 && (unsigned int)(v2 - 97) <= 7;
  return v2 >= 78 || v2 == 71 || v2 == 76;
}
