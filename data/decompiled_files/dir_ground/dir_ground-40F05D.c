#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40F05D(wchar_t *a1, unsigned __int64 a2)
{
  int v4; // [rsp+14h] [rbp-Ch]
  __int64 v5; // [rsp+18h] [rbp-8h]

  v5 = 0LL;
  while ( *a1 )
  {
    v4 = wcwidth(*a1);
    if ( v4 == -1 )
    {
      *a1 = 65533;
      v4 = 1;
    }
    if ( v4 + v5 > a2 )
      break;
    v5 += v4;
    ++a1;
  }
  *a1 = 0;
  return v5;
}
