#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401E87(__int64 a1, int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rdx
  __int64 result; // rax

  *(_DWORD *)(a1 + 56) = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = sub_401BF2(a4);
  *(_QWORD *)(a1 + 24) = v5;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)a4;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a4 + 8);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a4 + 24);
  *(_DWORD *)(a1 + 64) = a5;
  *(_QWORD *)(a1 + 88) = 0LL;
  result = a1;
  *(_BYTE *)(a1 + 52) = 0;
  return result;
}
