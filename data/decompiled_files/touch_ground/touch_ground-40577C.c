#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40577C(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    if ( a2 == 1 )
    {
      if ( a1 <= 0 || a1 > 11 )
      {
        if ( a1 == 12 )
          result = 12LL;
        else
          result = 0xFFFFFFFFLL;
      }
      else
      {
        result = (unsigned int)(a1 + 12);
      }
    }
    else if ( a1 < 0 || a1 > 23 )
    {
      result = 0xFFFFFFFFLL;
    }
    else
    {
      result = a1;
    }
  }
  else if ( a1 > 0 && a1 <= 11 )
  {
    result = a1;
  }
  else if ( a1 == 12 )
  {
    result = 0LL;
  }
  else
  {
    result = 0xFFFFFFFFLL;
  }
  return result;
}
