#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40A638(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)a2 == a2 + 24 )
  {
    memcpy((void *)(a1 + 24), (const void *)(a2 + 24), *(_QWORD *)(a2 + 8));
    *(_QWORD *)a1 = a1 + 24;
  }
  else
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
  }
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_BYTE *)(a1 + 16) = *(_BYTE *)(a2 + 16);
  result = *(unsigned __int8 *)(a1 + 16);
  if ( (_BYTE)result )
  {
    result = a1;
    *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  }
  return result;
}
