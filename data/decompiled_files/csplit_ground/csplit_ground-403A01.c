#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403A01(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  int v4; // [rsp+14h] [rbp-Ch]
  __int64 i; // [rsp+18h] [rbp-8h]

  v4 = 0;
  for ( i = 0LL; ; ++i )
  {
    v2 = *(char *)(a1 + i);
    if ( v2 == 39 )
    {
      v4 |= 1u;
      continue;
    }
    if ( v2 > 39 )
      break;
    if ( v2 != 35 )
      goto LABEL_11;
    v4 |= 2u;
LABEL_12:
    ;
  }
  if ( v2 == 45 || v2 == 48 )
    goto LABEL_12;
LABEL_11:
  *a2 = v4;
  return i;
}
