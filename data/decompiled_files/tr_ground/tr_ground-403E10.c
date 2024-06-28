#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403E10(_QWORD *a1, char a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 i; // [rsp+28h] [rbp-8h]

  a1[2] = -2LL;
  for ( result = sub_402C37(a1, 0LL); (_DWORD)result != -1; result = sub_402C37(a1, 0LL) )
    *(_BYTE *)((int)result + a3) = 1;
  if ( a2 )
  {
    for ( i = 0LL; i <= 0xFF; ++i )
    {
      result = *(unsigned __int8 *)(a3 + i) == 0;
      *(_BYTE *)(i + a3) = result;
    }
  }
  return result;
}
