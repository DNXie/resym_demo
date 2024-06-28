#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4097D9(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+18h] [rbp-28h]
  __int64 v4[4]; // [rsp+20h] [rbp-20h] BYREF

  v4[0] = a1;
  v4[1] = a2;
  v3 = sub_40BA0F(qword_61B840, v4);
  if ( v3 )
    result = *(_QWORD *)(v3 + 16);
  else
    result = 0LL;
  return result;
}
