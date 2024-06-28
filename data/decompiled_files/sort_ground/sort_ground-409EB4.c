#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_409EB4(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  if ( *(_DWORD *)(a2 + 80) <= 1u )
  {
    v2 = *(_QWORD *)(a2 + 40) + *(_QWORD *)(a2 + 48);
    if ( !v2 )
      LODWORD(v2) = sub_4097BD(a1, *(_QWORD *)(a2 + 56));
  }
  else
  {
    sub_4096ED(*(_QWORD *)(a2 + 56));
    sub_409DDF(a1, *(_QWORD *)(a2 + 56));
    LODWORD(v2) = sub_40970B(*(_QWORD *)(a2 + 56));
  }
  return v2;
}
