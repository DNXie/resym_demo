#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40AAD2(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // ecx
  int v4; // er8
  int v5; // er9
  __int64 result; // rax

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)a1 = sub_408E30(".", 0, a3);
  if ( *(int *)a1 >= 0 )
  {
    sub_408BF3(*(_DWORD *)a1, 1, a1, v3, v4, v5);
    result = 0LL;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = sub_40B4DA(0LL, 0LL);
    if ( *(_QWORD *)(a1 + 8) )
      result = 0LL;
    else
      result = 0xFFFFFFFFLL;
  }
  return result;
}
