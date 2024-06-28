#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402692(unsigned __int8 *a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4)
{
  _BYTE *v5; // rbx
  int v6; // er12
  _BYTE *v7; // rbx
  int v8; // er12
  _BYTE *v9; // rbx
  int v10; // er12
  _BYTE *v13; // [rsp+28h] [rbp-18h]

  v13 = (_BYTE *)*a3;
  if ( a2 <= 1 )
    return 0LL;
  if ( (unsigned __int8)sub_40253F(*a1) != 1 || (unsigned __int8)sub_40253F(a1[1]) != 1 )
    return 0LL;
  if ( *a4 )
  {
    v5 = v13++;
    v6 = 4 * byte_406140[(unsigned __int8)sub_40229E(*a1)];
    *v5 = v6 | (byte_406140[(unsigned __int8)sub_40229E(a1[1])] >> 4);
    --*a4;
  }
  if ( a2 == 2 )
  {
    *a3 = v13;
    return 0LL;
  }
  if ( a1[2] == 61 )
  {
    if ( a2 != 4 )
    {
      *a3 = v13;
      return 0LL;
    }
    if ( a1[3] != 61 )
    {
      *a3 = v13;
      return 0LL;
    }
  }
  else
  {
    if ( (unsigned __int8)sub_40253F(a1[2]) != 1 )
    {
      *a3 = v13;
      return 0LL;
    }
    if ( *a4 )
    {
      v7 = v13++;
      v8 = 16 * byte_406140[(unsigned __int8)sub_40229E(a1[1])];
      *v7 = v8 | (byte_406140[(unsigned __int8)sub_40229E(a1[2])] >> 2);
      --*a4;
    }
    if ( a2 == 3 )
    {
      *a3 = v13;
      return 0LL;
    }
    if ( a1[3] == 61 )
    {
      if ( a2 != 4 )
      {
        *a3 = v13;
        return 0LL;
      }
    }
    else
    {
      if ( (unsigned __int8)sub_40253F(a1[3]) != 1 )
      {
        *a3 = v13;
        return 0LL;
      }
      if ( *a4 )
      {
        v9 = v13++;
        v10 = byte_406140[(unsigned __int8)sub_40229E(a1[2])] << 6;
        *v9 = v10 | byte_406140[(unsigned __int8)sub_40229E(a1[3])];
        --*a4;
      }
    }
  }
  *a3 = v13;
  return 1LL;
}
