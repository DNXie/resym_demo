#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_4048CB(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v5; // [rsp+18h] [rbp-8h]

  do
  {
    v5 = a1 % a2;
    a1 = a2;
    a2 = v5;
  }
  while ( v5 );
  return a1;
}
