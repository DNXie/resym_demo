#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40374F(unsigned int a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 == 2 )
    return a2 + 4;
  if ( a1 > 2 )
  {
    if ( a1 == 3 )
    {
      result = a2 + 12;
    }
    else
    {
      if ( a1 != 4 )
        abort();
      result = 0LL;
    }
  }
  else if ( a1 )
  {
    result = a2;
  }
  else
  {
    result = a2 + 8;
  }
  return result;
}
