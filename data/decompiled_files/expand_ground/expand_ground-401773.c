#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401773(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rdx
  __int64 result; // rax

  if ( qword_607280 == qword_607278 )
    qword_607270 = sub_4044E7(qword_607270, &qword_607278, 8LL);
  v1 = qword_607280++;
  v2 = (_QWORD *)(qword_607270 + 8 * v1);
  result = a1;
  *v2 = a1;
  return result;
}
