#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_407793(__int64 a1, char a2)
{
  bool v2; // al

  v2 = *(_BYTE *)(a1 + 44) && *(_WORD *)a1 == 7;
  if ( (a2 & 2) != 0 && !v2 )
    return 0LL;
  return (a2 & 1) == 0 || !v2 || *(int *)(a1 + 4) > 0 && (kill(*(_DWORD *)(a1 + 4), 0) >= 0 || *__errno_location() != 3);
}
