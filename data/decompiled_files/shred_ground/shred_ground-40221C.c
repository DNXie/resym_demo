#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40221C(int a1, char a2, int a3, int a4, int a5, int a6)
{
  __int64 result; // rax
  int v7; // ecx
  int v8; // er8
  int v9; // er9
  int v10; // [rsp+18h] [rbp-8h]

  result = sub_409226(a1, 3, a3, a4, a5, a6);
  v10 = result;
  if ( (int)result > 0 )
  {
    if ( a2 )
      BYTE1(result) |= 0x40u;
    else
      BYTE1(result) &= 0xBFu;
    result = (unsigned int)result;
    if ( (_DWORD)result != v10 )
      result = sub_409226(a1, 4, result, v7, v8, v9);
  }
  return result;
}
