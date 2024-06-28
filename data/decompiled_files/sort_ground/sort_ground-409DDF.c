#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_409DDF(__int64 a1, __int64 a2)
{
  int result; // eax
  bool v3; // al
  bool v4; // al

  result = *(unsigned __int8 *)(a2 + 84) ^ 1;
  if ( *(_BYTE *)(a2 + 84) != 1 )
  {
    if ( (unsigned __int64)(*(_QWORD *)a2 - *(_QWORD *)(a2 + 16) + 31LL) <= 0x3E )
    {
      v4 = (unsigned __int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)(a2 + 24) + 31LL) > 0x3E && !*(_QWORD *)(a2 + 40);
      result = v4;
    }
    else
    {
      v3 = (unsigned __int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)(a2 + 24) + 31LL) > 0x3E || !*(_QWORD *)(a2 + 48);
      result = v3;
    }
    if ( (_BYTE)result )
      result = sub_4097BD(a1, a2);
  }
  return result;
}
