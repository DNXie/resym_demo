#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_409675(__int64 a1, __int64 a2)
{
  _BOOL8 result; // rax

  if ( *(_DWORD *)(a1 + 80) == *(_DWORD *)(a2 + 80) )
    result = *(_QWORD *)(a1 + 40) + *(_QWORD *)(a1 + 48) < *(_QWORD *)(a2 + 40) + *(_QWORD *)(a2 + 48);
  else
    result = *(_DWORD *)(a1 + 80) < *(_DWORD *)(a2 + 80);
  return result;
}
