#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_40314D(int a1)
{
  int result; // eax
  int i; // [rsp+1Ch] [rbp-4h]

  result = a1;
  for ( i = a1; i > 0; --i )
    result = putchar_unlocked(32);
  return result;
}
