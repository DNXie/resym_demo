#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_409DF5(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // [rsp+20h] [rbp-10h]
  __int64 v6; // [rsp+28h] [rbp-8h]

  v5 = sub_4126DD(24LL);
  *(_QWORD *)(v5 + 16) = sub_412832(a1);
  *(_QWORD *)v5 = a2;
  *(_QWORD *)(v5 + 8) = a3;
  v6 = sub_40D1B3(qword_6228E0, v5);
  if ( !v6 )
    sub_41285F();
  if ( v6 == v5 )
    return 0LL;
  sub_409D1A((void **)v5);
  return *(_QWORD *)(v6 + 16);
}
