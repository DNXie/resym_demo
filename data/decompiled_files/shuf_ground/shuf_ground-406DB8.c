#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_406DB8(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx

  v3 = 0xFFFFFFFFFFFFFFFFLL / a3;
  v4 = 0xFFFFFFFFFFFFFFFFLL % a3;
  if ( v3 < a2 )
    sub_407045(a1, a2, v4);
  return sub_406EF8(a1, a3 * a2);
}