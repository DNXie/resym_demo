#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402479(__int16 a1, unsigned __int8 a2, int a3, char *a4, _DWORD *a5)
{
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v17; // [rsp+28h] [rbp-18h]
  int v18; // [rsp+2Ch] [rbp-14h]
  int v19; // [rsp+30h] [rbp-10h]
  int v20; // [rsp+30h] [rbp-10h]
  int v21; // [rsp+30h] [rbp-10h]
  int v22; // [rsp+34h] [rbp-Ch]
  int v23; // [rsp+38h] [rbp-8h]

  v17 = a1 & 0xFFF;
  v18 = 0;
  while ( a4[1] )
  {
    v22 = *((_DWORD *)a4 + 1);
    if ( a2 )
      v5 = 3072;
    else
      v5 = 0;
    v23 = ~*((_DWORD *)a4 + 3) & v5;
    v19 = *((_DWORD *)a4 + 2);
    v6 = a4[1];
    if ( v6 == 2 )
    {
      if ( v17 & 0x49 | a2 )
        v19 |= 0x49u;
    }
    else if ( v6 == 3 )
    {
      v20 = v17 & v19;
      if ( (v20 & 0x124) != 0 )
        v7 = 292;
      else
        v7 = 0;
      if ( (v20 & 0x92) != 0 )
        v8 = 146;
      else
        v8 = 0;
      v9 = v8 | v7;
      if ( (v20 & 0x49) != 0 )
        v10 = 73;
      else
        v10 = 0;
      v19 = v9 | v10 | v20;
    }
    if ( v22 )
      v11 = *((_DWORD *)a4 + 1);
    else
      v11 = ~a3;
    v21 = ~v23 & v11 & v19;
    v12 = *a4;
    switch ( v12 )
    {
      case '-':
        v18 |= v21;
        v17 &= ~v21;
        break;
      case '=':
        if ( v22 )
          v13 = ~v22;
        else
          v13 = 0;
        v18 |= ~((unsigned __int16)v23 | (unsigned __int16)v13) & 0xFFF;
        v17 = v21 | v17 & (v23 | v13);
        break;
      case '+':
        v18 |= v21;
        v17 |= v21;
        break;
    }
    a4 += 16;
  }
  if ( a5 )
    *a5 = v18;
  return v17;
}
