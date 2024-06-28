#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404E56(unsigned __int8 a1)
{
  unsigned __int8 *v1; // rax
  unsigned __int8 *v2; // rax
  _BYTE *v3; // rax
  unsigned __int8 *v4; // rax
  _BYTE *v5; // rax
  int i; // [rsp+18h] [rbp-28h]
  int j; // [rsp+18h] [rbp-28h]
  int k; // [rsp+18h] [rbp-28h]
  int v10; // [rsp+1Ch] [rbp-24h]
  unsigned int v11; // [rsp+20h] [rbp-20h]
  int v12; // [rsp+24h] [rbp-1Ch]
  unsigned __int8 *v13; // [rsp+28h] [rbp-18h]
  _BYTE *v14; // [rsp+28h] [rbp-18h]
  _BYTE *v15; // [rsp+28h] [rbp-18h]
  char s[8]; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-8h]

  v17 = __readfsqword(0x28u);
  v13 = (unsigned __int8 *)qword_610418;
  v12 = 8;
  if ( a1 == byte_61024C )
    v12 = dword_610250;
  if ( a1 == byte_61024C || a1 == 9 )
  {
    v10 = v12 - dword_610398 % v12;
    if ( byte_610388 )
    {
      for ( i = v12 - dword_610398 % v12; i; --i )
      {
        v1 = v13++;
        *v1 = 32;
      }
      v11 = v10;
    }
    else
    {
      *(_BYTE *)qword_610418 = a1;
      v11 = 1;
    }
  }
  else if ( ((*__ctype_b_loc())[a1] & 0x4000) != 0 )
  {
    v10 = 1;
    v11 = 1;
    *v13 = a1;
  }
  else if ( byte_6103D0 )
  {
    v10 = 4;
    v11 = 4;
    v2 = v13;
    v14 = v13 + 1;
    *v2 = 92;
    sprintf(s, "%03o", a1);
    for ( j = 0; j <= 2; ++j )
    {
      v3 = v14++;
      *v3 = s[j];
    }
  }
  else if ( byte_6103D1 )
  {
    if ( (a1 & 0x80u) != 0 )
    {
      v10 = 4;
      v11 = 4;
      v4 = v13;
      v15 = v13 + 1;
      *v4 = 92;
      sprintf(s, "%03o", a1);
      for ( k = 0; k <= 2; ++k )
      {
        v5 = v15++;
        *v5 = s[k];
      }
    }
    else
    {
      v10 = 2;
      v11 = 2;
      *v13 = 94;
      v13[1] = a1 ^ 0x40;
    }
  }
  else if ( a1 == 8 )
  {
    v10 = -1;
    v11 = 1;
    *v13 = 8;
  }
  else
  {
    v10 = 0;
    v11 = 1;
    *v13 = a1;
  }
  if ( v10 >= 0 || dword_610398 )
  {
    if ( v10 >= 0 || -v10 < dword_610398 )
      dword_610398 += v10;
    else
      dword_610398 = 0;
  }
  else
  {
    v11 = 0;
    dword_610398 = 0;
  }
  return v11;
}
