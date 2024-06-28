#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403143(__int64 a1)
{
  __int64 result; // rax

  if ( !qword_61DAA8 )
  {
    qword_61DAA8 = sub_40F78B(47LL, 0LL, sub_402FEF, sub_40301A, 0LL);
    if ( !qword_61DAA8 )
      sub_415114();
  }
  *(_BYTE *)(a1 + 12) = 1;
  result = sub_410421(qword_61DAA8, a1);
  if ( !result )
    sub_415114();
  return result;
}
