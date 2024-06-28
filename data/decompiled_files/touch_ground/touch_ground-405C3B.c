#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405C3B(__int64 *a1, unsigned __int8 **a2)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 result; // rax
  char *v5; // rax
  char *v6; // rax
  char *v7; // rax
  char *v8; // rax
  unsigned __int8 *v9; // rax
  unsigned __int8 v10; // [rsp+13h] [rbp-7Dh]
  unsigned __int8 v11; // [rsp+13h] [rbp-7Dh]
  int v12; // [rsp+14h] [rbp-7Ch]
  int v13; // [rsp+18h] [rbp-78h]
  int j; // [rsp+1Ch] [rbp-74h]
  __int64 v15; // [rsp+20h] [rbp-70h]
  unsigned __int8 *v16; // [rsp+28h] [rbp-68h]
  unsigned __int8 *v17; // [rsp+28h] [rbp-68h]
  unsigned __int64 i; // [rsp+30h] [rbp-60h]
  __int64 v19; // [rsp+38h] [rbp-58h]
  __int64 v20; // [rsp+40h] [rbp-50h]
  char *v21; // [rsp+48h] [rbp-48h]
  char **v22; // [rsp+50h] [rbp-40h]
  __int64 v23; // [rsp+58h] [rbp-38h]
  char v24[24]; // [rsp+60h] [rbp-30h] BYREF
  unsigned __int64 v25; // [rsp+78h] [rbp-18h]

  v25 = __readfsqword(0x28u);
  while ( 1 )
  {
LABEL_3:
    while ( 1 )
    {
      v10 = **a2;
      if ( !(unsigned __int8)sub_40A516(v10) )
        break;
      ++*a2;
    }
    if ( (unsigned int)v10 - 48 > 9 && v10 != 45 && v10 != 43 )
    {
      if ( (unsigned __int8)sub_40A3C6(v10) )
      {
        v21 = v24;
        do
        {
          if ( (unsigned __int64)(v21 - v24) <= 0x12 )
          {
            v7 = v21++;
            *v7 = v10;
          }
          v10 = *++*a2;
        }
        while ( (unsigned __int8)sub_40A3C6(v10) || v10 == 46 );
        *v21 = 0;
        v22 = sub_405914((__int64)a2, v24);
        if ( v22 )
        {
          *a1 = *((int *)v22 + 3);
          result = *((unsigned int *)v22 + 2);
        }
        else
        {
          result = 63LL;
        }
      }
      else if ( v10 == 40 )
      {
        v15 = 0LL;
        while ( 1 )
        {
          v9 = (*a2)++;
          v11 = *v9;
          if ( !*v9 )
            break;
          if ( v11 == 40 )
          {
            ++v15;
          }
          else if ( v11 == 41 )
          {
            --v15;
          }
          if ( !v15 )
            goto LABEL_3;
        }
        result = 0LL;
      }
      else
      {
        v8 = (char *)(*a2)++;
        result = (unsigned int)*v8;
      }
      return result;
    }
    if ( v10 != 45 && v10 != 43 )
      break;
    if ( v10 == 45 )
      v2 = -1;
    else
      v2 = 1;
    v12 = v2;
    do
      v10 = *++*a2;
    while ( (unsigned __int8)sub_40A516(v10) );
    if ( (unsigned int)v10 - 48 <= 9 )
      goto LABEL_17;
  }
  v12 = 0;
LABEL_17:
  v16 = *a2;
  for ( i = 0LL; ; i = 10 * v23 )
  {
    v3 = v10 - 48;
    v23 = v3 + i;
    if ( v3 + i < i )
      return 63LL;
    v10 = *++v16;
    if ( (unsigned int)*v16 - 48 > 9 )
      break;
    if ( (unsigned __int64)v23 > 0x1999999999999999LL )
      return 63LL;
  }
  if ( (v10 == 46 || v10 == 44) && (unsigned int)((char)v16[1] - 48) <= 9 )
  {
    if ( v12 >= 0 )
    {
      v19 = v3 + i;
      if ( v23 < 0 )
        return 63LL;
      v20 = v3 + i;
    }
    else
    {
      v19 = -v23;
      if ( -v23 >= 0 && v23 != 0 )
        return 63LL;
      v20 = v3 + i;
    }
    if ( v23 != v20 )
      return 63LL;
    v5 = (char *)(v16 + 1);
    v17 = v16 + 2;
    v13 = *v5 - 48;
    for ( j = 2; j <= 9; ++j )
    {
      v13 *= 10;
      if ( (unsigned int)((char)*v17 - 48) <= 9 )
      {
        v6 = (char *)v17++;
        v13 += *v6 - 48;
      }
    }
    if ( v12 < 0 )
    {
      while ( (unsigned int)((char)*v17 - 48) <= 9 )
      {
        if ( *v17 != 48 )
        {
          ++v13;
          break;
        }
        ++v17;
      }
    }
    while ( (unsigned int)((char)*v17 - 48) <= 9 )
      ++v17;
    if ( v12 < 0 && v13 )
    {
      if ( --v19 >= 0 )
        return 63LL;
      v13 = 1000000000 - v13;
    }
    *a1 = v19;
    a1[1] = v13;
    *a2 = v17;
    if ( v12 )
      result = 276LL;
    else
      result = 277LL;
  }
  else
  {
    *(_BYTE *)a1 = v12 < 0;
    if ( v12 >= 0 )
    {
      a1[1] = v23;
      if ( a1[1] < 0 )
        return 63LL;
    }
    else
    {
      a1[1] = -v23;
      if ( a1[1] > 0 )
        return 63LL;
    }
    a1[2] = v16 - *a2;
    *a2 = v16;
    if ( v12 )
      result = 274LL;
    else
      result = 275LL;
  }
  return result;
}
