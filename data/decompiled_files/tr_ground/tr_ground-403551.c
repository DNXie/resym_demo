#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *__fastcall sub_403551(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *result; // rax

  sub_4032D5((__int64)a1);
  result = (_QWORD *)a1[3];
  if ( (unsigned __int64)result <= a2 )
  {
    result = (_QWORD *)a1[4];
    if ( result == (_QWORD *)1 )
    {
      *(_QWORD *)(a1[5] + 24LL) = a2 - a1[3];
      result = a1;
      a1[3] = a2;
    }
  }
  return result;
}
