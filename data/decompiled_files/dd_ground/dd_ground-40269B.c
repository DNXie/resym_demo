#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40269B(int a1, __int64 a2)
{
  void *v2; // rax
  __int64 v4; // [rsp+0h] [rbp-20h]
  __int64 v5; // [rsp+18h] [rbp-8h]

  if ( a1 )
    v2 = &unk_60E5B0;
  else
    v2 = &unk_60E5A8;
  if ( !a2 )
    return *(_QWORD *)v2;
  v5 = *(_QWORD *)v2 + a2;
  *(_QWORD *)v2 = v5 % (unsigned __int64)qword_60E350;
  if ( *(_QWORD *)v2 >= v5 )
    v4 = 0LL;
  else
    v4 = v5 - *(_QWORD *)v2;
  return v4;
}
