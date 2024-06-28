#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40982B(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // [rsp+20h] [rbp-10h]
  __int64 v6; // [rsp+28h] [rbp-8h]

  v5 = sub_410EEB(24LL);
  *(_QWORD *)(v5 + 16) = sub_411040(a1);
  *(_QWORD *)v5 = a2;
  *(_QWORD *)(v5 + 8) = a3;
  v6 = sub_40CCDE(qword_61B840, v5);
  if ( !v6 )
    sub_41106D();
  if ( v6 == v5 )
    return 0LL;
  sub_409750((void **)v5);
  return *(_QWORD *)(v6 + 16);
}
