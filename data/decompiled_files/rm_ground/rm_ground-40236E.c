#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_40236E(_BYTE *a1)
{
  __int64 v1; // rax
  char v4; // [rsp+17h] [rbp-1h]

  if ( *a1 != 46 )
    return 0LL;
  if ( a1[1] == 46 )
    v1 = 2LL;
  else
    v1 = 1LL;
  v4 = a1[v1];
  return !v4 || v4 == 47;
}
