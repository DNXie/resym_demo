#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401B06(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // eax
  int v4; // er8
  int v5; // er9

  result = *(_QWORD *)(a2 + 24);
  if ( result )
  {
    v3 = sub_402D8F(a1);
    result = sub_401F32((_DWORD)stdout, *(_QWORD *)(a2 + 24), v3, *(_QWORD *)(a2 + 24), v4, v5, a2);
  }
  return result;
}
