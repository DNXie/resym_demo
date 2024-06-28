#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_404129(int a1)
{
  int result; // eax
  int i; // [rsp+1Ch] [rbp-4h]

  if ( byte_610378 )
    return putchar_unlocked(12);
  result = a1;
  for ( i = a1; i; --i )
    result = putchar_unlocked(10);
  return result;
}
