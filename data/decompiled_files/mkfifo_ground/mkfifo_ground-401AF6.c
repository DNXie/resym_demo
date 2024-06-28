#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401AF6(char *a1)
{
  char *v1; // rax
  _BOOL4 v3; // eax
  int v4; // eax
  char *v5; // rax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  char *v10; // [rsp+8h] [rbp-48h]
  char v11; // [rsp+12h] [rbp-3Eh]
  char v12; // [rsp+13h] [rbp-3Dh]
  unsigned int v13; // [rsp+14h] [rbp-3Ch]
  int v14; // [rsp+18h] [rbp-38h]
  int v15; // [rsp+1Ch] [rbp-34h]
  int v16; // [rsp+20h] [rbp-30h]
  __int64 v17; // [rsp+28h] [rbp-28h]
  __int64 v18; // [rsp+30h] [rbp-20h]
  char *i; // [rsp+38h] [rbp-18h]
  _BYTE *ptr; // [rsp+40h] [rbp-10h]
  char *v21; // [rsp+48h] [rbp-8h]

  v10 = a1;
  v17 = 0LL;
  if ( *a1 > 47 && *a1 <= 55 )
  {
    v13 = 0;
    do
    {
      v1 = v10++;
      v13 = 8 * v13 + *v1 - 48;
      if ( v13 > 0xFFF )
        return 0LL;
    }
    while ( *v10 > 47 && *v10 <= 55 );
    if ( *v10 )
      return 0LL;
    v16 = sub_401A8E(v13);
    return sub_401A9A(v16, v16 & 0xC00 | 0x3FFu);
  }
  v18 = 1LL;
  for ( i = a1; *i; ++i )
  {
    v3 = *i == 61 || *i == 43 || *i == 45;
    v18 += v3;
  }
  ptr = (_BYTE *)sub_404121(v18, 16LL);
  while ( 2 )
  {
    v14 = 0;
    while ( 1 )
    {
      v4 = *v10;
      if ( v4 == 97 )
      {
        v14 |= 0xFFFu;
        goto LABEL_35;
      }
      if ( v4 <= 97 )
        break;
      switch ( v4 )
      {
        case 'o':
          v14 |= 0x207u;
          break;
        case 'u':
          v14 |= 0x9C0u;
          break;
        case 'g':
          v14 |= 0x438u;
          break;
        default:
          goto LABEL_69;
      }
LABEL_35:
      ++v10;
    }
    if ( v4 == 45 || v4 == 61 || v4 == 43 )
    {
      do
      {
        v12 = *v10;
        v11 = 3;
        v5 = v10 + 1;
        v10 += 2;
        v6 = *v5;
        switch ( v6 )
        {
          case 'o':
            v15 = 7;
            break;
          case 'u':
            v15 = 448;
            break;
          case 'g':
            v15 = 56;
            break;
          default:
            v15 = 0;
            v11 = 1;
            --v10;
            while ( 1 )
            {
              v7 = *v10;
              if ( v7 == 115 )
              {
                v15 |= 0xC00u;
              }
              else if ( v7 > 115 )
              {
                switch ( v7 )
                {
                  case 'w':
                    v15 |= 0x92u;
                    break;
                  case 'x':
                    v15 |= 0x49u;
                    break;
                  case 't':
                    v15 |= 0x200u;
                    break;
                  default:
                    goto LABEL_59;
                }
              }
              else if ( v7 == 88 )
              {
                v11 = 2;
              }
              else
              {
                if ( v7 != 114 )
                  goto LABEL_59;
                v15 |= 0x124u;
              }
              ++v10;
            }
        }
LABEL_59:
        v8 = v17++;
        v21 = &ptr[16 * v8];
        *v21 = v12;
        v21[1] = v11;
        *((_DWORD *)v21 + 1) = v14;
        *((_DWORD *)v21 + 2) = v15;
        if ( v14 )
          v9 = v14 & v15;
        else
          v9 = v15;
        *((_DWORD *)v21 + 3) = v9;
      }
      while ( *v10 == 61 || *v10 == 43 || *v10 == 45 );
      if ( *v10 == 44 )
      {
        ++v10;
        continue;
      }
      if ( !*v10 )
      {
        ptr[16 * v17 + 1] = 0;
        return (__int64)ptr;
      }
    }
    break;
  }
LABEL_69:
  free(ptr);
  return 0LL;
}
