#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40B0E2(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // [rsp+10h] [rbp-10h]
  __int64 v5; // [rsp+18h] [rbp-8h]

  v4 = *(_QWORD **)(a1 + 16);
  if ( v4 )
  {
    if ( *v4 == a2 )
      return v4[1];
  }
  else
  {
    v4 = malloc(0x10uLL);
    *(_QWORD *)(a1 + 16) = v4;
    if ( !v4 )
      return -1LL;
  }
  *v4 = a2;
  v5 = sub_409DE7(*(_QWORD **)a1, (__int64)v4);
  if ( !v5 )
    return -1LL;
  if ( (_QWORD *)v5 == v4 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    v3 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v3 + 1;
    v4[1] = v3;
  }
  else
  {
    v4[1] = *(_QWORD *)(v5 + 8);
  }
  return v4[1];
}
