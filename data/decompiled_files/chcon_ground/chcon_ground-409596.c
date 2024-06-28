#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_409596(unsigned __int64 a1)
{
  __int64 v2; // [rsp+0h] [rbp-8h]
  __int64 i; // [rsp+0h] [rbp-8h]

  v2 = a1;
  if ( a1 <= 9 )
    v2 = 10LL;
  for ( i = v2 | 1; i != -1 && !sub_40952A(i); i += 2LL )
    ;
  return i;
}
