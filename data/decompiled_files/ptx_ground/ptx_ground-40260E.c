#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40260E(const void *a1, const void *a2)
{
  __int16 v2; // ax
  int v3; // ebx
  int v5; // ebx
  int i; // [rsp+14h] [rbp-14h]
  int j; // [rsp+14h] [rbp-14h]
  int v8; // [rsp+18h] [rbp-10h]
  unsigned int v9; // [rsp+1Ch] [rbp-Ch]
  unsigned int v10; // [rsp+1Ch] [rbp-Ch]

  v2 = *((_WORD *)a1 + 4);
  if ( *((__int16 *)a2 + 4) <= v2 )
    v2 = *((_WORD *)a2 + 4);
  v8 = v2;
  if ( byte_610388 )
  {
    for ( i = 0; i < v8; ++i )
    {
      v3 = (unsigned __int8)byte_610680[(unsigned __int8)sub_401E2D(*(_BYTE *)(*(_QWORD *)a1 + i))];
      v9 = v3 - (unsigned __int8)byte_610680[(unsigned __int8)sub_401E2D(*(_BYTE *)(*(_QWORD *)a2 + i))];
      if ( v9 )
        return v9;
    }
  }
  else
  {
    for ( j = 0; j < v8; ++j )
    {
      v5 = (unsigned __int8)sub_401E2D(*(_BYTE *)(*(_QWORD *)a1 + j));
      v10 = v5 - (unsigned __int8)sub_401E2D(*(_BYTE *)(*(_QWORD *)a2 + j));
      if ( v10 )
        return v10;
    }
  }
  return (unsigned int)(*((__int16 *)a1 + 4) - *((__int16 *)a2 + 4));
}
