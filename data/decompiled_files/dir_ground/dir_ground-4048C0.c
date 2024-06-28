#include "/share/binary_recovery/clang-parser/defs.hh"
bool __fastcall sub_4048C0(char **a1, char **a2, char a3, _QWORD *a4)
{
  int v4; // eax
  char *v5; // rax
  char *v6; // rdx
  int v7; // eax
  char *v8; // rax
  char *v9; // rax
  char *v10; // rax
  int v11; // eax
  char *v12; // rax
  char *v13; // rax
  char *v14; // rax
  char *v15; // rax
  char *v16; // rax
  char *v17; // rdx
  char *v18; // rax
  char v21; // [rsp+23h] [rbp-1Dh]
  unsigned int v22; // [rsp+24h] [rbp-1Ch]
  __int64 v23; // [rsp+28h] [rbp-18h]
  char *v24; // [rsp+30h] [rbp-10h]
  char *v25; // [rsp+38h] [rbp-8h]

  v24 = *a2;
  v25 = *a1;
  v23 = 0LL;
  v21 = 0;
  v22 = 0;
  while ( v22 <= 4 )
  {
    if ( v22 == 2 )
    {
      if ( *v24 > 47 && *v24 <= 55 )
      {
        v10 = v24++;
        v21 = 8 * v21 + *v10 - 48;
      }
      else
      {
        v9 = v25++;
        *v9 = v21;
        ++v23;
        v22 = 0;
      }
    }
    else if ( v22 > 2 )
    {
      if ( v22 == 3 )
      {
        v11 = *v24;
        if ( v11 > 70 )
        {
          if ( (unsigned int)(v11 - 97) > 5 )
          {
LABEL_71:
            v15 = v25++;
            *v15 = v21;
            ++v23;
            v22 = 0;
          }
          else
          {
            v13 = v24++;
            v21 = 16 * v21 + *v13 - 87;
          }
        }
        else if ( v11 >= 65 )
        {
          v14 = v24++;
          v21 = 16 * v21 + *v14 - 55;
        }
        else
        {
          if ( (unsigned int)(v11 - 48) > 9 )
            goto LABEL_71;
          v12 = v24++;
          v21 = 16 * v21 + *v12 - 48;
        }
      }
      else
      {
        v22 = 0;
        if ( *v24 <= 63 || *v24 == 127 )
        {
          if ( *v24 == 63 )
          {
            v18 = v25++;
            *v18 = 127;
            ++v23;
          }
          else
          {
            v22 = 6;
          }
        }
        else
        {
          v16 = v25++;
          v17 = v24++;
          *v16 = *v17 & 0x1F;
          ++v23;
        }
      }
    }
    else if ( v22 )
    {
      v7 = *v24;
      if ( v7 == 98 )
      {
        v21 = 8;
        goto LABEL_57;
      }
      if ( v7 > 98 )
      {
        if ( v7 == 114 )
        {
          v21 = 13;
          goto LABEL_57;
        }
        if ( v7 > 114 )
        {
          switch ( v7 )
          {
            case 'v':
              v21 = 11;
              goto LABEL_57;
            case 'x':
LABEL_44:
              v22 = 3;
              v21 = 0;
              goto LABEL_57;
            case 't':
              v21 = 9;
              goto LABEL_57;
          }
        }
        else
        {
          switch ( v7 )
          {
            case 'f':
              v21 = 12;
              goto LABEL_57;
            case 'n':
              v21 = 10;
              goto LABEL_57;
            case 'e':
              v21 = 27;
              goto LABEL_57;
          }
        }
      }
      else
      {
        if ( v7 == 63 )
        {
          v21 = 127;
          goto LABEL_57;
        }
        if ( v7 > 63 )
        {
          switch ( v7 )
          {
            case '_':
              v21 = 32;
              goto LABEL_57;
            case 'a':
              v21 = 7;
              goto LABEL_57;
            case 'X':
              goto LABEL_44;
          }
        }
        else
        {
          if ( !*v24 )
          {
            v22 = 6;
            goto LABEL_57;
          }
          if ( v7 >= 0 && (unsigned int)(v7 - 48) <= 7 )
          {
            v22 = 2;
            v21 = *v24 - 48;
            goto LABEL_57;
          }
        }
      }
      v21 = *v24;
LABEL_57:
      if ( v22 == 1 )
      {
        v8 = v25++;
        *v8 = v21;
        ++v23;
        v22 = 0;
      }
      ++v24;
    }
    else
    {
      v4 = *v24;
      if ( v4 == 61 )
      {
        if ( !a3 )
          goto LABEL_21;
        v22 = 5;
      }
      else if ( v4 > 61 )
      {
        if ( v4 == 92 )
        {
          v22 = 1;
          ++v24;
        }
        else
        {
          if ( v4 != 94 )
            goto LABEL_21;
          v22 = 4;
          ++v24;
        }
      }
      else if ( !*v24 || v4 == 58 )
      {
        v22 = 5;
      }
      else
      {
LABEL_21:
        v5 = v25++;
        v6 = v24++;
        *v5 = *v6;
        ++v23;
      }
    }
  }
  *a1 = v25;
  *a2 = v24;
  *a4 = v23;
  return v22 != 6;
}
