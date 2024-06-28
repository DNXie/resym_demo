#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40503C(__int64 a1, int a2, int a3)
{
  void *v3; // rdx
  void *v4; // rax
  __int64 v7; // [rsp+18h] [rbp-8h]

  v7 = sub_40EC0C(40LL);
  *(_DWORD *)(v7 + 8) = a2;
  *(_DWORD *)(v7 + 12) = a3;
  if ( !a2 )
  {
    if ( (a3 & 0x10) != 0 )
      v3 = sub_404FE8;
    else
      v3 = sub_404FAE;
    if ( (a3 & 0x10) != 0 )
      v4 = sub_404E4D;
    else
      v4 = sub_404E20;
    *(_QWORD *)(v7 + 16) = sub_409151(0LL, 0LL, v4, v3, sub_405022);
  }
  if ( *(_QWORD *)(a1 + 8) )
    **(_QWORD **)(a1 + 8) = v7;
  else
    *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v7;
  return v7;
}
