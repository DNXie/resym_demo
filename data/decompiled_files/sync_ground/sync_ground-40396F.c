#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40396F(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdx

  v2 = 0xFFFFFFFFFFFFFFFFLL % a2;
  if ( 0xFFFFFFFFFFFFFFFFLL / a2 < a1 )
    sub_403C3A(a1, a2, v2);
  return sub_403AB8(a2 * a1, a2, v2);
}
