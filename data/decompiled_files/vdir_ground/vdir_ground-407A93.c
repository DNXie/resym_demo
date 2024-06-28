#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_407A93(_QWORD *a1, _QWORD *a2)
{
  bool v3; // [rsp+1Eh] [rbp-2h]
  bool v4; // [rsp+1Fh] [rbp-1h]

  v3 = sub_4068B3((__int64)a1);
  v4 = sub_4068B3((__int64)a2);
  if ( v3 && !v4 )
    return 0xFFFFFFFFLL;
  if ( !v3 && v4 )
    return 1LL;
  return sub_406EFD(a1, a2, (__int64 (__fastcall *)(_QWORD, _QWORD))sub_406C1F);
}
