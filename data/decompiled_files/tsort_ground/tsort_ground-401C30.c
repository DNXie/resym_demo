#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401C30(_QWORD *a1)
{
  if ( !a1[4] && *a1 )
  {
    if ( qword_607248 )
      *(_QWORD *)(qword_607250 + 40) = a1;
    else
      qword_607248 = (__int64)a1;
    qword_607250 = (__int64)a1;
  }
  return 0LL;
}
