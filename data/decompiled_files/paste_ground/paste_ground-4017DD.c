#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_4017DD(char a1)
{
  int result; // eax

  result = putchar_unlocked(a1);
  if ( result < 0 )
    sub_4017A7();
  return result;
}
