#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_406D6C(_QWORD *a1, _QWORD *a2, __int64 (__fastcall *a3)(_QWORD, _QWORD))
{
  __int64 v3; // r12
  int v4; // edx
  int v5; // er13
  __int64 v6; // rax
  int v7; // edx
  __int64 result; // rax
  unsigned int v10; // [rsp+2Ch] [rbp-24h]

  v3 = sub_4027E1((__int64)(a1 + 2));
  v5 = v4;
  v6 = sub_4027E1((__int64)(a2 + 2));
  v10 = sub_402583(v6, v7, v3, v5);
  if ( v10 )
    result = v10;
  else
    result = a3(*a1, *a2);
  return result;
}
