#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401F81(const char *a1)
{
  size_t v1; // rax
  int v2; // eax
  char v3; // al
  const unsigned __int16 *v4; // rbx
  _BYTE *v5; // rax
  unsigned __int8 *v6; // rax
  unsigned __int8 *v7; // rax
  unsigned __int8 *v8; // rax
  unsigned __int8 *v9; // rax
  unsigned __int8 *v10; // rax
  unsigned __int8 *v11; // rax
  unsigned __int8 *v12; // rax
  unsigned __int8 *v13; // rax
  unsigned __int8 *v14; // rax
  unsigned __int8 *v15; // rax
  unsigned __int8 *v16; // rdx
  unsigned __int8 *v17; // rax
  unsigned __int8 *v18; // rdx
  unsigned __int8 *s; // [rsp+8h] [rbp-38h]
  unsigned __int8 v21; // [rsp+18h] [rbp-28h]
  unsigned __int8 v22; // [rsp+18h] [rbp-28h]
  int v23; // [rsp+1Ch] [rbp-24h]
  int v24; // [rsp+1Ch] [rbp-24h]
  unsigned __int8 *v25; // [rsp+20h] [rbp-20h]
  __int64 v26; // [rsp+28h] [rbp-18h]

  s = (unsigned __int8 *)a1;
  v1 = strlen(a1);
  v26 = sub_4095E8(v1 + 1);
  v25 = (unsigned __int8 *)v26;
  while ( *s )
  {
    if ( *s == 92 )
    {
      v2 = (char)*++s;
      if ( v2 == 102 )
      {
        v10 = v25++;
        *v10 = 12;
        ++s;
      }
      else if ( v2 > 102 )
      {
        if ( v2 == 116 )
        {
          v13 = v25++;
          *v13 = 9;
          ++s;
        }
        else if ( v2 > 116 )
        {
          if ( v2 == 118 )
          {
            v14 = v25++;
            *v14 = 11;
            ++s;
          }
          else
          {
            if ( v2 != 120 )
              goto LABEL_50;
            v21 = 0;
            v23 = 0;
            ++s;
            while ( v23 <= 2 )
            {
              v4 = *__ctype_b_loc();
              if ( (v4[(unsigned __int8)sub_401E2D(*s)] & 0x1000) == 0 )
                break;
              if ( (char)*s <= 96 || (char)*s > 102 )
              {
                if ( (char)*s <= 64 || (char)*s > 70 )
                  v3 = *s - 48;
                else
                  v3 = *s - 55;
              }
              else
              {
                v3 = *s - 87;
              }
              v21 = 16 * v21 + v3;
              ++v23;
              ++s;
            }
            if ( v23 )
            {
              v6 = v25++;
              *v6 = v21;
            }
            else
            {
              *v25 = 92;
              v5 = v25 + 1;
              v25 += 2;
              *v5 = 120;
            }
          }
        }
        else if ( v2 == 110 )
        {
          v11 = v25++;
          *v11 = 10;
          ++s;
        }
        else if ( v2 == 114 )
        {
          v12 = v25++;
          *v12 = 13;
          ++s;
        }
        else
        {
LABEL_50:
          *v25 = 92;
          v15 = v25 + 1;
          v25 += 2;
          v16 = s++;
          *v15 = *v16;
        }
      }
      else if ( v2 == 97 )
      {
        v8 = v25++;
        *v8 = 7;
        ++s;
      }
      else if ( v2 > 97 )
      {
        if ( v2 == 98 )
        {
          v9 = v25++;
          *v9 = 8;
          ++s;
        }
        else
        {
          if ( v2 != 99 )
            goto LABEL_50;
          while ( *s )
            ++s;
        }
      }
      else if ( *s )
      {
        if ( v2 != 48 )
          goto LABEL_50;
        v22 = 0;
        v24 = 0;
        ++s;
        while ( v24 <= 2 && (char)*s > 47 && (char)*s <= 55 )
        {
          v22 = 8 * v22 + *s - 48;
          ++v24;
          ++s;
        }
        v7 = v25++;
        *v7 = v22;
      }
    }
    else
    {
      v17 = v25++;
      v18 = s++;
      *v17 = *v18;
    }
  }
  *v25 = 0;
  return v26;
}
