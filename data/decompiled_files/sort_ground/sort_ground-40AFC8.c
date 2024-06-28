#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40AFC8(__int64 a1)
{
  __int64 result; // rax
  __int64 *i; // [rsp+10h] [rbp-10h]
  __int64 v3; // [rsp+18h] [rbp-8h]

  v3 = sub_4150B6(a1, 72LL);
  for ( i = &qword_61DA08; *i; i = (__int64 *)(*i + 64) )
    ;
  *i = v3;
  result = v3;
  *(_QWORD *)(v3 + 64) = 0LL;
  return result;
}
