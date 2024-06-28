#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4037B0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // [rsp+18h] [rbp-18h]
  _BYTE *v4; // [rsp+20h] [rbp-10h]
  __int64 i; // [rsp+28h] [rbp-8h]

  v3 = a1;
  if ( byte_60E5A0 )
  {
    v3 = a1 - 1;
    *(_BYTE *)(a1 - 1) = byte_60E5A1;
    ++*a2;
    byte_60E5A0 = 0;
  }
  if ( (*a2 & 1LL) != 0 )
  {
    byte_60E5A1 = *(_BYTE *)(--*a2 + v3);
    byte_60E5A0 = 1;
  }
  v4 = (_BYTE *)(*a2 + v3);
  for ( i = *a2 >> 1; i; --i )
  {
    *v4 = *(v4 - 2);
    v4 -= 2;
  }
  return v3 + 1;
}
