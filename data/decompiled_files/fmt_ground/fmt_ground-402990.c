#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402990(unsigned __int64 a1)
{
  __int64 v2; // [rsp+10h] [rbp-8h]

  v2 = 4900LL;
  if ( a1 > (unsigned __int64)&unk_609640 )
  {
    if ( (*(_BYTE *)(a1 - 40 + 16) & 2) != 0 )
    {
      if ( (*(_BYTE *)(a1 - 40 + 16) & 8) != 0 )
        v2 = 2400LL;
      else
        v2 = 364900LL;
    }
    else if ( (*(_BYTE *)(a1 - 40 + 16) & 4) != 0 )
    {
      v2 = 3300LL;
    }
    else if ( a1 > (unsigned __int64)&unk_609668 && (*(_BYTE *)(a1 - 80 + 16) & 8) != 0 )
    {
      v2 = 40000LL / (*(_DWORD *)(a1 - 40 + 8) + 2) + 4900;
    }
  }
  if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
  {
    v2 -= 1600LL;
  }
  else if ( (*(_BYTE *)(a1 + 16) & 8) != 0 )
  {
    v2 += 22500LL / (*(_DWORD *)(a1 + 8) + 2);
  }
  return v2;
}
