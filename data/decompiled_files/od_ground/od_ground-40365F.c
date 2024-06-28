#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_40365F(unsigned __int64 a1, char a2)
{
  int result; // eax

  putchar_unlocked(40);
  result = sub_4034ED(a1, 41);
  if ( a2 )
    result = putchar_unlocked(a2);
  return result;
}
