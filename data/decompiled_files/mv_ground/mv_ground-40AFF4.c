#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_40AFF4(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v4; // [rsp+20h] [rbp-10h]
  __int64 v5; // [rsp+28h] [rbp-8h]

  if ( a1 )
  {
    v4 = (_QWORD *)sub_410EEB(24LL);
    *v4 = sub_411040(a2);
    v4[1] = a3[1];
    v4[2] = *a3;
    v5 = sub_40CCDE(a1, v4);
    if ( !v5 )
      sub_41106D();
    if ( (_QWORD *)v5 != v4 )
      sub_40D13C(v4);
  }
}
