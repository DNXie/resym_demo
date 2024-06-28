#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404289(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // [rsp+2Ch] [rbp-4h]

  v4 = sub_4043AA(a1, a2, a3);
  if ( v4 == -1 && *__errno_location() == 12 )
    sub_404254();
  return v4;
}
