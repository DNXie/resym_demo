#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_402AF2(char *a1, unsigned __int64 a2, __int64 a3)
{
  int *v3; // rax
  int *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  int v8; // [rsp+24h] [rbp-3Ch]
  int v9; // [rsp+24h] [rbp-3Ch]
  int v10; // [rsp+24h] [rbp-3Ch]
  __int64 v11; // [rsp+28h] [rbp-38h]
  unsigned __int64 v12; // [rsp+28h] [rbp-38h]
  int *src; // [rsp+30h] [rbp-30h]
  char *dest; // [rsp+38h] [rbp-28h]
  unsigned __int64 i; // [rsp+40h] [rbp-20h]
  unsigned __int64 j; // [rsp+40h] [rbp-20h]
  unsigned __int64 v17; // [rsp+48h] [rbp-18h]
  __int64 v18; // [rsp+50h] [rbp-10h]

  if ( a2 )
  {
    src = (int *)&unk_40AB80;
    v11 = 0LL;
    dest = a1;
    for ( i = a2; ; i -= v8 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v3 = src++;
          v8 = *v3;
          if ( *v3 )
            break;
          src = (int *)&unk_40AB80;
        }
        if ( v8 >= 0 )
          break;
        v9 = -v8;
        if ( v9 >= i )
        {
          v11 += i;
          goto LABEL_18;
        }
        v11 += v9;
        i -= v9;
      }
      if ( v8 > i )
        break;
      memcpy(dest, src, 4LL * v8);
      src += v8;
      dest += 4 * v8;
    }
    if ( i > 1 && 3 * i >= v8 )
    {
      do
      {
        if ( v8 == i || sub_401DA7(a3, v8) < i )
        {
          v4 = (int *)dest;
          dest += 4;
          *v4 = *src;
          --i;
        }
        ++src;
      }
      while ( i );
    }
    else
    {
      v11 += i;
    }
LABEL_18:
    v18 = a2 - v11;
    v12 = v11 - 1;
    v17 = v12;
    for ( j = 0LL; j < a2; ++j )
    {
      if ( v17 > v12 )
      {
        v6 = sub_401DA7(a3, v18 - j);
        v10 = *(_DWORD *)&a1[4 * j];
        *(_DWORD *)&a1[4 * j] = *(_DWORD *)&a1[4 * j + 4 * v6];
        *(_DWORD *)&a1[4 * j + 4 * v6] = v10;
      }
      else
      {
        v17 = a2 + v17 - 1;
        v5 = v18++;
        *(_DWORD *)&a1[4 * v5] = *(_DWORD *)&a1[4 * j];
        *(_DWORD *)&a1[4 * j] = -1;
      }
      v17 -= v12;
    }
  }
}
