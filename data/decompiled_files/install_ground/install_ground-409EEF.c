#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_409EEF(int a1, __int64 a2)
{
  int v2; // edx
  __int64 result; // rax

  *(_DWORD *)a2 = a1;
  *(_DWORD *)(a2 + 20) = 0;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_BYTE *)(a2 + 24) = 0;
  *(_BYTE *)(a2 + 25) = 0;
  v2 = (unsigned __int8)sub_409EE4();
  result = a2;
  *(_DWORD *)(a2 + 16) = v2;
  return result;
}
