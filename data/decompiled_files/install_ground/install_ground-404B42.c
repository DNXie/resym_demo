#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404B42(__int64 a1, __int64 a2)
{
  unsigned int v3; // [rsp+1Ch] [rbp-4h]

  v3 = sub_411A48(a1, a2);
  if ( v3 && *__errno_location() == 38 )
    v3 = 0;
  return v3;
}