#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_407B1C(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx

  v3 = 0xFFFFFFFFFFFFFFFFLL / a3;
  v4 = 0xFFFFFFFFFFFFFFFFLL % a3;
  if ( v3 < a2 )
    sub_407DA9(a1, a2, v4);
  return sub_407C5C(a1, a3 * a2);
}
