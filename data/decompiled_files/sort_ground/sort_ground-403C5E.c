#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403C5E(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rdx
  __int64 result; // rax

  if ( qword_61D9F0 == qword_61D9F8 )
    qword_61D9E8 = sub_414ED3(qword_61D9E8, &qword_61D9F8, 8LL);
  v1 = qword_61D9F0++;
  v2 = (_QWORD *)(qword_61D9E8 + 8 * v1);
  result = a1;
  *v2 = a1;
  return result;
}
