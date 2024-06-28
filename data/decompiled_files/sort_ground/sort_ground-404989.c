#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404989(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 sizea; // [rsp+8h] [rbp-18h]

  while ( 1 )
  {
    sizea = (a3 & 0xFFFFFFFFFFFFFFE0LL) + 32;
    *(_QWORD *)a1 = malloc(sizea);
    if ( *(_QWORD *)a1 )
      break;
    a3 = sizea >> 1;
    if ( a2 + 1 >= a3 )
      sub_415114();
  }
  *(_QWORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 24) = sizea;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a1 + 32);
  result = a1;
  *(_BYTE *)(a1 + 48) = 0;
  return result;
}
