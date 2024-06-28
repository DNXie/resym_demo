#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 *__fastcall sub_4069C0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 *result; // rax
  __int64 *v4; // [rsp+18h] [rbp-8h]

  v4 = a1;
  if ( !a1 )
    v4 = &qword_60E8A0;
  *(_DWORD *)v4 = 8;
  if ( !a2 || !a3 )
    abort();
  v4[5] = a2;
  result = v4;
  v4[6] = a3;
  return result;
}
