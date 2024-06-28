#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4065F0(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // [rsp+20h] [rbp-10h]
  unsigned __int64 i; // [rsp+28h] [rbp-8h]

  v4 = 0LL;
  for ( i = 0LL; i < a2; ++i )
  {
    if ( !strcmp(*(const char **)(96 * i + a1), "-")
      && *(_BYTE *)(96 * i + a1 + 52) != 1
      && *(int *)(96 * i + a1 + 56) >= 0
      && (*(_DWORD *)(96 * i + a1 + 48) & 0xF000) == 4096 )
    {
      *(_BYTE *)(96 * i + a1 + 52) = 1;
    }
    else
    {
      ++v4;
    }
  }
  return v4;
}
