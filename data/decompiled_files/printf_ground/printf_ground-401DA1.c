#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_401DA1(char a1)
{
  if ( a1 == 102 )
    return putchar_unlocked(12);
  if ( a1 > 102 )
  {
    if ( a1 == 114 )
      return putchar_unlocked(13);
    if ( a1 > 114 )
    {
      if ( a1 == 116 )
        return putchar_unlocked(9);
      if ( a1 == 118 )
        return putchar_unlocked(11);
    }
    else if ( a1 == 110 )
    {
      return putchar_unlocked(10);
    }
  }
  else
  {
    if ( a1 == 98 )
      return putchar_unlocked(8);
    if ( a1 > 98 )
    {
      if ( a1 == 99 )
        exit(0);
      if ( a1 == 101 )
        return putchar_unlocked(27);
    }
    else if ( a1 == 97 )
    {
      return putchar_unlocked(7);
    }
  }
  return putchar_unlocked(a1);
}
