#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401711(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+18h] [rbp-8h]

  v3 = sub_404F2C(56LL);
  if ( a1 )
    v1 = sub_405081(a1);
  else
    v1 = 0LL;
  *(_QWORD *)v3 = v1;
  *(_QWORD *)(v3 + 16) = 0LL;
  *(_QWORD *)(v3 + 8) = *(_QWORD *)(v3 + 16);
  *(_DWORD *)(v3 + 24) = 0;
  *(_QWORD *)(v3 + 32) = 0LL;
  *(_QWORD *)(v3 + 40) = 0LL;
  *(_QWORD *)(v3 + 48) = 0LL;
  return v3;
}
