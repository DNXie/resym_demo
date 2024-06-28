#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401B0A(const char *a1, _QWORD *a2)
{
  int v2; // eax
  unsigned int v3; // er14
  unsigned int v4; // er13
  unsigned int v5; // er12
  char *v6; // rax
  char *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v11; // [rsp+0h] [rbp-80h]
  __int64 v12; // [rsp+8h] [rbp-78h]
  __int64 v13; // [rsp+10h] [rbp-70h]
  unsigned __int8 v14; // [rsp+33h] [rbp-4Dh]
  int v15; // [rsp+34h] [rbp-4Ch]
  int v16; // [rsp+34h] [rbp-4Ch]
  __int64 i; // [rsp+38h] [rbp-48h]
  __int64 v18; // [rsp+40h] [rbp-40h]
  size_t v19; // [rsp+48h] [rbp-38h]

  v19 = strlen(a1);
  *a2 = sub_406D88(v19);
  a2[1] = sub_406E73(v19, 1LL);
  v18 = 0LL;
  for ( i = 0LL; a1[i]; ++i )
  {
    if ( a1[i] == 92 )
    {
      *(_BYTE *)(a2[1] + v18) = 1;
      v2 = a1[i + 1];
      if ( v2 == 98 )
      {
        v14 = 8;
        goto LABEL_38;
      }
      if ( v2 > 98 )
      {
        if ( v2 == 114 )
        {
          v14 = 13;
          goto LABEL_38;
        }
        if ( v2 > 114 )
        {
          if ( v2 == 116 )
          {
            v14 = 9;
            goto LABEL_38;
          }
          if ( v2 == 118 )
          {
            v14 = 11;
            goto LABEL_38;
          }
        }
        else
        {
          if ( v2 == 102 )
          {
            v14 = 12;
            goto LABEL_38;
          }
          if ( v2 == 110 )
          {
            v14 = 10;
            goto LABEL_38;
          }
        }
      }
      else
      {
        if ( v2 <= 55 )
        {
          if ( v2 >= 48 )
          {
            v14 = a1[i + 1] - 48;
            v15 = a1[i + 2] - 48;
            if ( v15 >= 0 && v15 <= 7 )
            {
              v14 = 8 * v14 + v15;
              v16 = a1[++i + 2] - 48;
              if ( v16 >= 0 && v16 <= 7 )
              {
                if ( 8 * v14 + v16 > 255 )
                {
                  v3 = a1[i + 2];
                  v4 = a1[i + 1];
                  v5 = a1[i];
                  v6 = gettext(
                         "warning: the ambiguous octal escape \\%c%c%c is being\n"
                         "\tinterpreted as the 2-byte sequence \\0%c%c, %c");
                  LODWORD(v13) = v3;
                  LODWORD(v12) = v4;
                  LODWORD(v11) = v5;
                  error(0, 0, v6, v5, v4, v3, v11, v12, v13);
                }
                else
                {
                  v14 = 8 * v14 + v16;
                  ++i;
                }
              }
            }
          }
          else
          {
            if ( a1[i + 1] )
              goto LABEL_37;
            v7 = gettext("warning: an unescaped backslash at end of string is not portable");
            error(0, 0, v7);
            *(_BYTE *)(a2[1] + v18) = 0;
            --i;
            v14 = 92;
          }
LABEL_38:
          ++i;
          v8 = v18++;
          *(_BYTE *)(*a2 + v8) = v14;
          continue;
        }
        if ( v2 == 92 )
        {
          v14 = 92;
          goto LABEL_38;
        }
        if ( v2 == 97 )
        {
          v14 = 7;
          goto LABEL_38;
        }
      }
LABEL_37:
      v14 = a1[i + 1];
      goto LABEL_38;
    }
    v9 = v18++;
    *(_BYTE *)(*a2 + v9) = a1[i];
  }
  a2[2] = v18;
  return 1LL;
}
