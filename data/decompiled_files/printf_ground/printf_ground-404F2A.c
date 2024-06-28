#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404F2A(_BYTE *a1, unsigned int a2, int a3)
{
  unsigned int v4; // [rsp+4h] [rbp-1Ch]
  int v5; // [rsp+1Ch] [rbp-4h]

  v4 = a2;
  if ( a2 > 0x7F )
  {
    if ( a2 > 0x7FF )
    {
      if ( a2 > 0xFFFF )
      {
        if ( a2 > 0x10FFFF )
          return 0xFFFFFFFFLL;
        v5 = 4;
      }
      else
      {
        if ( a2 > 0xD7FF && a2 <= 0xDFFF )
          return 0xFFFFFFFFLL;
        v5 = 3;
      }
    }
    else
    {
      v5 = 2;
    }
    if ( a3 < v5 )
      return 4294967294LL;
    if ( v5 != 3 )
    {
      if ( v5 != 4 )
      {
LABEL_19:
        a1[1] = v4 & 0x3F | 0x80;
        *a1 = (v4 >> 6) | 0xC0;
        return (unsigned int)v5;
      }
      a1[3] = a2 & 0x3F | 0x80;
      v4 = (a2 >> 6) | 0x10000;
    }
    a1[2] = v4 & 0x3F | 0x80;
    v4 = (v4 >> 6) | 0x800;
    goto LABEL_19;
  }
  if ( a3 > 0 )
  {
    *a1 = a2;
    return 1LL;
  }
  return 4294967294LL;
}
