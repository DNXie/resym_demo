#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40F00F(wint_t *a1)
{
  unsigned __int8 v2; // [rsp+17h] [rbp-9h]

  v2 = 0;
  while ( *a1 )
  {
    if ( !iswprint(*a1) )
    {
      *a1 = 65533;
      v2 = 1;
    }
    ++a1;
  }
  return v2;
}
