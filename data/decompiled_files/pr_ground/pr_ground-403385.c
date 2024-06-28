#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403385(__int64 a1)
{
  int i; // [rsp+Ch] [rbp-Ch]
  _DWORD *v3; // [rsp+10h] [rbp-8h]

  if ( byte_610370 != 1 )
  {
    v3 = qword_610340;
    for ( i = dword_61025C; i; --i )
    {
      if ( byte_610241 )
        v3[4] = 1;
      else
        v3[4] = 2;
      v3 += 16;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 2;
  }
  *(_DWORD *)(a1 + 48) = 0;
  return (unsigned int)--dword_6103A8;
}
