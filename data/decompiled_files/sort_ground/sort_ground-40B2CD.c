#include "/share/binary_recovery/clang-parser/defs.hh"
_BYTE *__fastcall sub_40B2CD(_BYTE *a1, __int64 a2, int a3)
{
  int v3; // eax

  while ( *a1 )
  {
    v3 = (char)*a1;
    if ( v3 == 102 )
    {
      *(_QWORD *)(a2 + 40) = byte_61D8E0;
    }
    else if ( v3 > 102 )
    {
      if ( v3 == 105 )
      {
        if ( !*(_QWORD *)(a2 + 32) )
          *(_QWORD *)(a2 + 32) = &unk_61D6E0;
      }
      else if ( v3 > 105 )
      {
        if ( v3 == 110 )
        {
          *(_BYTE *)(a2 + 50) = 1;
        }
        else
        {
          if ( v3 != 114 )
            return a1;
          *(_BYTE *)(a2 + 55) = 1;
        }
      }
      else if ( v3 == 103 )
      {
        *(_BYTE *)(a2 + 52) = 1;
      }
      else
      {
        *(_BYTE *)(a2 + 53) = 1;
      }
    }
    else if ( v3 == 86 )
    {
      *(_BYTE *)(a2 + 56) = 1;
    }
    else if ( v3 > 86 )
    {
      if ( v3 == 98 )
      {
        if ( !a3 || a3 == 2 )
          *(_BYTE *)(a2 + 48) = 1;
        if ( a3 == 1 || a3 == 2 )
          *(_BYTE *)(a2 + 49) = 1;
      }
      else
      {
        if ( v3 != 100 )
          return a1;
        *(_QWORD *)(a2 + 32) = &unk_61D7E0;
      }
    }
    else if ( v3 == 77 )
    {
      *(_BYTE *)(a2 + 54) = 1;
    }
    else
    {
      if ( v3 != 82 )
        return a1;
      *(_BYTE *)(a2 + 51) = 1;
    }
    ++a1;
  }
  return a1;
}
