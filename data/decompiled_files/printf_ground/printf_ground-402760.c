#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402760(char *a1, int a2, __int64 *a3)
{
  int v3; // eax
  const char *v4; // rax
  int v5; // eax
  __int64 v6; // rbx
  char *v7; // rax
  __int64 v8; // rbx
  char *v9; // rax
  char *v10; // rax
  char **v11; // rax
  char *v12; // rax
  int v15; // [rsp+24h] [rbp-16Ch]
  char v16; // [rsp+39h] [rbp-157h]
  char v17; // [rsp+3Ah] [rbp-156h]
  int v18; // [rsp+3Ch] [rbp-154h]
  int v19; // [rsp+40h] [rbp-150h]
  size_t v21; // [rsp+50h] [rbp-140h]
  const char *v22; // [rsp+58h] [rbp-138h]
  intmax_t v23; // [rsp+60h] [rbp-130h]
  intmax_t v24; // [rsp+68h] [rbp-128h]
  char s[65]; // [rsp+70h] [rbp-120h] BYREF
  char v26; // [rsp+B1h] [rbp-DFh]
  char v27; // [rsp+B5h] [rbp-DBh]
  char v28; // [rsp+B6h] [rbp-DAh]
  char v29; // [rsp+B7h] [rbp-D9h]
  char v30; // [rsp+C8h] [rbp-C8h]
  char v31; // [rsp+D1h] [rbp-BFh]
  char v32; // [rsp+D3h] [rbp-BDh]
  char v33; // [rsp+D4h] [rbp-BCh]
  char v34; // [rsp+D5h] [rbp-BBh]
  char v35; // [rsp+D6h] [rbp-BAh]
  char v36; // [rsp+D7h] [rbp-B9h]
  char v37; // [rsp+D9h] [rbp-B7h]
  char v38; // [rsp+DFh] [rbp-B1h]
  char v39; // [rsp+E3h] [rbp-ADh]
  char v40; // [rsp+E5h] [rbp-ABh]
  char v41; // [rsp+E8h] [rbp-A8h]
  unsigned __int64 v42; // [rsp+178h] [rbp-18h]

  v15 = a2;
  v42 = __readfsqword(0x28u);
  v18 = 0;
  v19 = 0;
  while ( *a1 )
  {
    v3 = *a1;
    if ( v3 != 37 )
    {
      if ( v3 == 92 )
        a1 += (int)sub_401E74((__int64)a1, 0);
      else
        putchar_unlocked(*a1);
      goto LABEL_67;
    }
    v4 = a1++;
    v22 = v4;
    v21 = 1LL;
    v17 = 0;
    v16 = 0;
    if ( *a1 == 37 )
    {
      putchar_unlocked(37);
      goto LABEL_67;
    }
    if ( *a1 == 98 )
    {
      if ( v15 > 0 )
      {
        sub_402254((_BYTE *)*a3++);
        --v15;
      }
      goto LABEL_67;
    }
    memset(s, 0, 0x100uLL);
    v30 = 1;
    v41 = 1;
    v40 = 1;
    v39 = 1;
    v38 = 1;
    v37 = 1;
    v29 = 1;
    v36 = 1;
    v28 = 1;
    v35 = 1;
    v27 = 1;
    v34 = 1;
    v33 = 1;
    v32 = 1;
    v26 = 1;
    v31 = 1;
    while ( 1 )
    {
      v5 = *a1;
      if ( v5 == 43 )
        goto LABEL_25;
      if ( v5 > 43 )
        break;
      switch ( v5 )
      {
        case '#':
          v40 = 0;
          v39 = 0;
          v37 = 0;
          v33 = 0;
          v32 = 0;
          break;
        case '\'':
          goto LABEL_22;
        case ' ':
          break;
        default:
          goto LABEL_26;
      }
LABEL_25:
      ++a1;
      ++v21;
    }
    switch ( v5 )
    {
      case '0':
        v39 = 0;
        v32 = 0;
        goto LABEL_25;
      case 'I':
LABEL_22:
        v30 = 0;
        v41 = 0;
        v39 = 0;
        v38 = 0;
        v27 = 0;
        v34 = 0;
        v32 = 0;
        v26 = 0;
        v31 = 0;
        goto LABEL_25;
      case '-':
        goto LABEL_25;
    }
LABEL_26:
    if ( *a1 == 42 )
    {
      ++a1;
      ++v21;
      if ( v15 <= 0 )
      {
        v18 = 0;
      }
      else
      {
        v23 = sub_401B15(*a3);
        if ( v23 < (__int64)0xFFFFFFFF80000000LL || v23 > 0x7FFFFFFF )
        {
          v6 = *a3;
          v7 = gettext("invalid field width: %s");
          error(1, 0, v7, v6);
        }
        else
        {
          v18 = v23;
        }
        ++a3;
        --v15;
      }
      v16 = 1;
    }
    else
    {
      while ( (unsigned int)(*a1 - 48) <= 9 )
      {
        ++a1;
        ++v21;
      }
    }
    if ( *a1 == 46 )
    {
      ++a1;
      ++v21;
      v32 = 0;
      if ( *a1 == 42 )
      {
        ++a1;
        ++v21;
        if ( v15 <= 0 )
        {
          v19 = 0;
        }
        else
        {
          v24 = sub_401B15(*a3);
          if ( v24 >= 0 )
          {
            if ( v24 <= 0x7FFFFFFF )
            {
              v19 = v24;
            }
            else
            {
              v8 = *a3;
              v9 = gettext("invalid precision: %s");
              error(1, 0, v9, v8);
            }
          }
          else
          {
            v19 = -1;
          }
          ++a3;
          --v15;
        }
        v17 = 1;
      }
      else
      {
        while ( (unsigned int)(*a1 - 48) <= 9 )
        {
          ++a1;
          ++v21;
        }
      }
    }
    while ( *a1 == 108 || *a1 == 76 || *a1 == 104 || *a1 == 106 || *a1 == 116 || *a1 == 122 )
      ++a1;
    if ( !s[(unsigned __int8)*a1] )
    {
      v10 = gettext("%.*s: invalid conversion specification");
      error(1, 0, v10, (unsigned int)((_DWORD)a1 + 1 - (_DWORD)v22), v22);
    }
    if ( v15 <= 0 )
    {
      v12 = (char *)&locale;
    }
    else
    {
      --v15;
      v11 = (char **)a3++;
      v12 = *v11;
    }
    sub_4022A9(v22, v21, *a1, v16, v18, v17, v19, v12);
LABEL_67:
    ++a1;
  }
  return (unsigned int)(a2 - v15);
}
