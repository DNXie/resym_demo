#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_409CFA(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // [rsp+20h] [rbp-10h]
  __int64 v6; // [rsp+28h] [rbp-8h]

  v5 = sub_4126C5(24LL);
  *(_QWORD *)(v5 + 16) = sub_41281A(a1);
  *(_QWORD *)v5 = a2;
  *(_QWORD *)(v5 + 8) = a3;
  v6 = sub_40D4A6(qword_61D8E0, v5);
  if ( !v6 )
    sub_412847();
  if ( v6 == v5 )
    return 0LL;
  sub_409C1F((void **)v5);
  return *(_QWORD *)(v6 + 16);
}
