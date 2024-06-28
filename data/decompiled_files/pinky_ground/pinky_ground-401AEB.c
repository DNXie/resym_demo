#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401AEB(_BYTE *a1)
{
  _BYTE *v1; // rax
  __int64 v4; // [rsp+10h] [rbp-8h]

  v4 = 0LL;
  do
  {
    if ( *a1 == 38 )
      ++v4;
    v1 = a1++;
  }
  while ( *v1 );
  return v4;
}
