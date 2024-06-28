#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401615(char *a1)
{
  char *v1; // rax
  char *v2; // rdx
  int v3; // eax
  char *v4; // rax
  char *v5; // rax
  char *v6; // rax
  char *v7; // rax
  char *v8; // rax
  char *v9; // rax
  char *v10; // rax
  char *v11; // rax
  char *v12; // rax
  char *v14; // [rsp+8h] [rbp-18h]
  char *v15; // [rsp+8h] [rbp-18h]
  unsigned __int8 v16; // [rsp+17h] [rbp-9h]
  char *v17; // [rsp+18h] [rbp-8h]

  v14 = a1;
  v17 = (char *)sub_4048C3(a1);
  v16 = 0;
  ptr = v17;
  while ( *v14 )
  {
    if ( *v14 == 92 )
    {
      v15 = v14 + 1;
      v3 = *v15;
      if ( v3 == 102 )
      {
        v6 = v17++;
        *v6 = 12;
        goto LABEL_30;
      }
      if ( v3 > 102 )
      {
        if ( v3 == 114 )
        {
          v8 = v17++;
          *v8 = 13;
          goto LABEL_30;
        }
        if ( v3 > 114 )
        {
          if ( v3 == 116 )
          {
            v9 = v17++;
            *v9 = 9;
            goto LABEL_30;
          }
          if ( v3 == 118 )
          {
            v10 = v17++;
            *v10 = 11;
            goto LABEL_30;
          }
        }
        else if ( v3 == 110 )
        {
          v7 = v17++;
          *v7 = 10;
          goto LABEL_30;
        }
      }
      else
      {
        if ( v3 == 48 )
        {
          v4 = v17++;
          *v4 = 0;
          goto LABEL_30;
        }
        if ( v3 > 48 )
        {
          if ( v3 == 92 )
          {
            v11 = v17++;
            *v11 = 92;
            goto LABEL_30;
          }
          if ( v3 == 98 )
          {
            v5 = v17++;
            *v5 = 8;
            goto LABEL_30;
          }
        }
        else if ( !*v15 )
        {
          v16 = 1;
          break;
        }
      }
      v12 = v17++;
      *v12 = *v15;
LABEL_30:
      v14 = v15 + 1;
    }
    else
    {
      v1 = v17++;
      v2 = v14++;
      *v1 = *v2;
    }
  }
  qword_607270 = (__int64)v17;
  return v16;
}
