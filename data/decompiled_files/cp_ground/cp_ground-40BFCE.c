#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_40BFCE(__int64 a1)
{
  _QWORD *i; // [rsp+8h] [rbp-20h]
  __int64 v3; // [rsp+10h] [rbp-18h]
  __int64 v4; // [rsp+18h] [rbp-10h]
  _QWORD *v5; // [rsp+20h] [rbp-8h]

  v3 = 0LL;
  v4 = 0LL;
  for ( i = *(_QWORD **)a1; *(_QWORD *)(a1 + 8) > (unsigned __int64)i; i += 2 )
  {
    if ( *i )
    {
      v5 = i;
      ++v3;
      ++v4;
      while ( 1 )
      {
        v5 = (_QWORD *)v5[1];
        if ( !v5 )
          break;
        ++v4;
      }
    }
  }
  return *(_QWORD *)(a1 + 24) == v3 && *(_QWORD *)(a1 + 32) == v4;
}
