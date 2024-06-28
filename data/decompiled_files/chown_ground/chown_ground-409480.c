#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_409480(int a1, char a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // ecx
  int v7; // er8
  int v8; // er9
  unsigned int v9; // eax
  __int64 result; // rax
  int v11; // [rsp+18h] [rbp-8h]

  v11 = sub_40B41F(a1, 1, 0, a4, a5, a6);
  if ( v11 < 0
    || (!a2 ? (v9 = v11 & 0xFFFFFFFE) : (v9 = v11 | 1),
        v11 != v9 && (unsigned int)sub_40B41F(a1, 2, v9, v6, v7, v8) == -1) )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    result = 0LL;
  }
  return result;
}
