#include "/share/binary_recovery/clang-parser/defs.hh"
bool __fastcall sub_402933(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  bool result; // al
  __int64 v4; // [rsp+18h] [rbp-18h]
  unsigned __int64 v5; // [rsp+20h] [rbp-10h]
  __int64 v6; // [rsp+28h] [rbp-8h]

  v5 = (a2 + 1) * *(_QWORD *)(a1 + 8);
  sub_402FA4();
  v4 = sub_4023EB();
  while ( 1 )
  {
    v2 = v4++;
    if ( v2 >= v5 )
      break;
    v6 = sub_402446();
    if ( !v6 )
      sub_402862(a1, a2);
    sub_40332F(v6);
  }
  sub_403131();
  result = sub_402694();
  if ( result )
    sub_402862(a1, a2);
  return result;
}
