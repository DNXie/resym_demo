#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4047C2(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // [rsp+10h] [rbp-10h]
  __int64 v4; // [rsp+18h] [rbp-8h]

  v3 = (_QWORD *)a1[2];
  if ( v3 )
  {
    if ( *v3 == a2 )
      return v3[1];
  }
  else
  {
    v3 = malloc(0x10uLL);
    a1[2] = v3;
    if ( !v3 )
      return 0LL;
  }
  *v3 = a2;
  v4 = sub_409DE7(*a1, v3);
  if ( !v4 )
    return 0LL;
  if ( (_QWORD *)v4 == v3 )
  {
    a1[2] = 0LL;
    v3[1] = sub_409151(1021LL, 0LL, sub_4047A4, 0LL, 0LL);
  }
  else
  {
    v3[1] = *(_QWORD *)(v4 + 8);
  }
  return v3[1];
}
