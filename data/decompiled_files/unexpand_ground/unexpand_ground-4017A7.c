#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4017A7(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rax
  __int64 v3; // rax
  __int64 result; // rax
  unsigned __int64 v5; // [rsp+18h] [rbp-8h]

  if ( qword_6072A8 )
    v1 = *(_QWORD *)(8 * qword_6072A8 - 8 + qword_607298);
  else
    v1 = 0LL;
  if ( v1 > a1 )
    v2 = 0LL;
  else
    v2 = a1 - v1;
  v5 = v2;
  if ( qword_6072A8 == qword_6072A0 )
    qword_607298 = sub_404763(qword_607298, &qword_6072A0, 8LL);
  v3 = qword_6072A8++;
  *(_QWORD *)(qword_607298 + 8 * v3) = a1;
  result = qword_607290;
  if ( qword_607290 < v5 )
  {
    result = v5;
    qword_607290 = v5;
  }
  return result;
}
