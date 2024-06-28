#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_4022A9(const char *a1, size_t a2, char a3, char a4, int a5, char a6, int a7, char *a8)
{
  void *v8; // rax
  _BYTE *v9; // rax
  int v10; // ecx
  int v11; // er8
  int v12; // er9
  int v13; // ecx
  int v14; // er8
  int v15; // er9
  int v16; // ecx
  int v17; // er8
  int v18; // er9
  int v19; // er8
  int v20; // er9
  const char *v25; // [rsp+30h] [rbp-40h]
  size_t v26; // [rsp+38h] [rbp-38h]
  void *dest; // [rsp+40h] [rbp-30h]
  int v28; // [rsp+50h] [rbp-20h]
  int v29; // [rsp+58h] [rbp-18h]
  long double v30; // [rsp+60h] [rbp-10h]

  if ( a3 == 100 )
    goto LABEL_17;
  if ( a3 > 100 )
  {
    if ( a3 != 105 )
    {
      if ( a3 <= 105 )
      {
        if ( a3 <= 103 )
          goto LABEL_18;
        goto LABEL_19;
      }
      if ( a3 != 117 && a3 != 120 && a3 != 111 )
        goto LABEL_19;
    }
LABEL_17:
    v25 = "ld";
    v26 = 1LL;
    goto LABEL_20;
  }
  if ( a3 <= 71 )
  {
    if ( a3 < 69 && a3 != 65 )
      goto LABEL_19;
LABEL_18:
    v25 = "L";
    v26 = 1LL;
    goto LABEL_20;
  }
  if ( a3 == 88 )
    goto LABEL_17;
  if ( a3 == 97 )
    goto LABEL_18;
LABEL_19:
  v25 = a1;
  v26 = 0LL;
LABEL_20:
  dest = (void *)sub_4059E0(a2 + v26 + 2);
  v8 = mempcpy(dest, a1, a2);
  v9 = mempcpy(v8, v25, v26);
  *v9 = a3;
  v9[1] = 0;
  if ( a3 == 100 )
  {
LABEL_39:
    v28 = sub_401B15((__int64)a8);
    if ( a4 != 1 )
    {
      if ( a6 != 1 )
        sub_405B97((_DWORD)dest, v28, v28, v13, v14, v15);
      else
        sub_405B97((_DWORD)dest, a7, v28, v13, v14, v15);
    }
    else if ( a6 != 1 )
    {
      sub_405B97((_DWORD)dest, a5, v28, a5, v14, v15);
    }
    else
    {
      sub_405B97((_DWORD)dest, a5, a7, v28, v14, v15);
    }
    goto LABEL_70;
  }
  if ( a3 > 100 )
  {
    if ( a3 != 111 )
    {
      if ( a3 <= 111 )
      {
        if ( a3 <= 103 )
          goto LABEL_53;
        if ( a3 != 105 )
          goto LABEL_70;
        goto LABEL_39;
      }
      if ( a3 != 117 && a3 != 120 )
      {
        if ( a3 == 115 )
        {
          if ( a4 != 1 )
          {
            if ( a6 != 1 )
              sub_405B97((_DWORD)dest, (_DWORD)a8, (_DWORD)a8, v10, v11, v12);
            else
              sub_405B97((_DWORD)dest, a7, (_DWORD)a8, v10, v11, v12);
          }
          else if ( a6 != 1 )
          {
            sub_405B97((_DWORD)dest, a5, (_DWORD)a8, a5, v11, v12);
          }
          else
          {
            sub_405B97((_DWORD)dest, a5, a7, (_DWORD)a8, v11, v12);
          }
        }
        goto LABEL_70;
      }
    }
LABEL_46:
    v29 = sub_401BEA((__int64)a8);
    if ( a4 != 1 )
    {
      if ( a6 != 1 )
        sub_405B97((_DWORD)dest, v29, v29, v16, v17, v18);
      else
        sub_405B97((_DWORD)dest, a7, v29, v16, v17, v18);
    }
    else if ( a6 != 1 )
    {
      sub_405B97((_DWORD)dest, a5, v29, a5, v17, v18);
    }
    else
    {
      sub_405B97((_DWORD)dest, a5, a7, v29, v17, v18);
    }
    goto LABEL_70;
  }
  if ( a3 <= 71 )
  {
    if ( a3 < 69 && a3 != 65 )
      goto LABEL_70;
LABEL_53:
    v30 = sub_401CBF((__int64)a8);
    if ( a4 != 1 )
    {
      if ( a6 != 1 )
        sub_405B97((_DWORD)dest, (_DWORD)v25, DWORD2(v30), (_DWORD)dest, v19, v20);
      else
        sub_405B97((_DWORD)dest, a7, DWORD2(v30), (_DWORD)dest, v19, v20);
    }
    else if ( a6 != 1 )
    {
      sub_405B97((_DWORD)dest, a5, DWORD2(v30), (_DWORD)dest, v19, v20);
    }
    else
    {
      sub_405B97((_DWORD)dest, a5, a7, (_DWORD)dest, v19, v20);
    }
    goto LABEL_70;
  }
  if ( a3 == 97 )
    goto LABEL_53;
  if ( a3 != 99 )
  {
    if ( a3 != 88 )
      goto LABEL_70;
    goto LABEL_46;
  }
  if ( a4 != 1 )
    sub_405B97((_DWORD)dest, *a8, *a8, v10, v11, v12);
  else
    sub_405B97((_DWORD)dest, a5, *a8, a5, v11, v12);
LABEL_70:
  free(dest);
}
