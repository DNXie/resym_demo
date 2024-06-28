#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4038F2(__int64 a1)
{
  __int64 v1; // rax
  _BOOL4 v2; // eax
  const unsigned __int16 *v3; // rbx
  __int64 v4; // rax
  const unsigned __int16 *v5; // rbx
  __int64 v6; // rax
  const unsigned __int16 *v7; // rbx
  const unsigned __int16 *v8; // rbx
  const unsigned __int16 *v9; // rbx
  __int64 v10; // rax
  _BOOL4 v11; // eax
  const unsigned __int16 *v12; // rbx
  const unsigned __int16 *v13; // rbx
  __int64 v14; // rax
  _BOOL4 v15; // eax
  const unsigned __int16 *v16; // rbx
  char *v17; // rbx
  __int64 result; // rax
  const unsigned __int16 *v19; // rbx
  int i; // [rsp+14h] [rbp-5Ch]
  unsigned int v21; // [rsp+18h] [rbp-58h]
  int v22; // [rsp+1Ch] [rbp-54h]
  int v23; // [rsp+20h] [rbp-50h]
  int v24; // [rsp+24h] [rbp-4Ch]
  int v25; // [rsp+28h] [rbp-48h]
  int v26; // [rsp+2Ch] [rbp-44h]
  int v27; // [rsp+30h] [rbp-40h]
  int v28; // [rsp+34h] [rbp-3Ch]
  char *string; // [rsp+38h] [rbp-38h]
  char *stringa; // [rsp+38h] [rbp-38h]
  char *stringb; // [rsp+38h] [rbp-38h]
  char *v32; // [rsp+40h] [rbp-30h]
  const char *v33; // [rsp+48h] [rbp-28h]
  unsigned __int64 v34; // [rsp+50h] [rbp-20h]
  unsigned __int64 v35; // [rsp+58h] [rbp-18h]

  qword_610AB0 = *(_QWORD *)a1;
  qword_610AB8 = qword_610AB0 + *(__int16 *)(a1 + 8);
  v34 = qword_610AB0 + *(__int16 *)(a1 + 16);
  v35 = qword_610AB0 + *(__int16 *)(a1 + 18);
  string = (char *)qword_610AB8;
  while ( (unsigned __int64)string < v35 && qword_610AB0 + dword_610A68 >= (unsigned __int64)string )
  {
    qword_610AB8 = (__int64)string;
    if ( qword_610520 )
    {
      v22 = re_match(&stru_610528, string, v35 - (_DWORD)string, 0, 0LL);
      if ( v22 == -2 )
        sub_401F46();
      if ( v22 == -1 )
        v1 = 1LL;
      else
        v1 = v22;
      string += v1;
    }
    else if ( byte_6107C0[(unsigned __int8)sub_401E2D(*string)] )
    {
      while ( (unsigned __int64)string < v35 && byte_6107C0[(unsigned __int8)sub_401E2D(*string)] )
        ++string;
    }
    else
    {
      ++string;
    }
  }
  if ( qword_610AB0 + dword_610A68 >= (unsigned __int64)string )
    qword_610AB8 = (__int64)string;
  v2 = s && qword_610AB8 < v35;
  dword_610AC0 = v2;
  while ( qword_610AB8 > (unsigned __int64)qword_610AB0 )
  {
    v3 = *__ctype_b_loc();
    if ( (v3[(unsigned __int8)sub_401E2D(*(_BYTE *)(qword_610AB8 - 1))] & 0x2000) == 0 )
      break;
    --qword_610AB8;
  }
  if ( -*(__int16 *)(a1 + 16) <= dword_610A60 + dword_6108C0 )
  {
    v32 = (char *)(qword_610AB0 + *(__int16 *)(a1 + 16));
  }
  else
  {
    v32 = (char *)(qword_610AB0 - (dword_610A60 + dword_6108C0));
    if ( qword_610520 )
    {
      v23 = re_match(&stru_610528, v32, qword_610AB0 - (_DWORD)v32, 0, 0LL);
      if ( v23 == -2 )
        sub_401F46();
      if ( v23 == -1 )
        v4 = 1LL;
      else
        v4 = v23;
      v32 += v4;
    }
    else if ( byte_6107C0[(unsigned __int8)sub_401E2D(*v32)] )
    {
      while ( qword_610AB0 > (unsigned __int64)v32 && byte_6107C0[(unsigned __int8)sub_401E2D(*v32)] )
        ++v32;
    }
    else
    {
      ++v32;
    }
  }
  ::string = v32;
  for ( qword_610A98 = qword_610AB0; qword_610A98 > (unsigned __int64)::string; --qword_610A98 )
  {
    v5 = *__ctype_b_loc();
    if ( (v5[(unsigned __int8)sub_401E2D(*(_BYTE *)(qword_610A98 - 1))] & 0x2000) == 0 )
      break;
  }
  while ( (unsigned __int64)&::string[dword_610A64] < qword_610A98 )
  {
    if ( qword_610520 )
    {
      v24 = re_match(&stru_610528, ::string, qword_610A98 - (_DWORD)::string, 0, 0LL);
      if ( v24 == -2 )
        sub_401F46();
      if ( v24 == -1 )
        v6 = 1LL;
      else
        v6 = v24;
      ::string += v6;
    }
    else if ( byte_6107C0[(unsigned __int8)sub_401E2D(*::string)] )
    {
      while ( (unsigned __int64)::string < qword_610A98 && byte_6107C0[(unsigned __int8)sub_401E2D(*::string)] )
        ++::string;
    }
    else
    {
      ++::string;
    }
  }
  if ( s )
  {
    for ( stringa = ::string; qword_610920 < (unsigned __int64)stringa; --stringa )
    {
      v7 = *__ctype_b_loc();
      if ( (v7[(unsigned __int8)sub_401E2D(*(stringa - 1))] & 0x2000) == 0 )
        break;
    }
    dword_610AA0 = (unsigned __int64)stringa > v34;
  }
  else
  {
    dword_610AA0 = 0;
  }
  while ( (unsigned __int64)::string < qword_610928 )
  {
    v8 = *__ctype_b_loc();
    if ( (v8[(unsigned __int8)sub_401E2D(*::string)] & 0x2000) == 0 )
      break;
    ++::string;
  }
  v25 = dword_610A64 + (_DWORD)::string - qword_610A98 - dword_6102B8;
  if ( v25 <= 0 )
  {
    qword_610A70 = 0LL;
    qword_610A78 = 0LL;
    dword_610A80 = 0;
  }
  else
  {
    for ( qword_610A70 = qword_610AB8; qword_610A70 < (unsigned __int64)qword_610928; ++qword_610A70 )
    {
      v9 = *__ctype_b_loc();
      if ( (v9[(unsigned __int8)sub_401E2D(*(_BYTE *)qword_610A70)] & 0x2000) == 0 )
        break;
    }
    qword_610A78 = qword_610A70;
    stringb = (char *)qword_610A70;
    while ( (unsigned __int64)stringb < v35 && qword_610A70 + v25 > (unsigned __int64)stringb )
    {
      qword_610A78 = (__int64)stringb;
      if ( qword_610520 )
      {
        v26 = re_match(&stru_610528, stringb, v35 - (_DWORD)stringb, 0, 0LL);
        if ( v26 == -2 )
          sub_401F46();
        if ( v26 == -1 )
          v10 = 1LL;
        else
          v10 = v26;
        stringb += v10;
      }
      else if ( byte_6107C0[(unsigned __int8)sub_401E2D(*stringb)] )
      {
        while ( (unsigned __int64)stringb < v35 && byte_6107C0[(unsigned __int8)sub_401E2D(*stringb)] )
          ++stringb;
      }
      else
      {
        ++stringb;
      }
    }
    if ( qword_610A70 + v25 > (unsigned __int64)stringb )
      qword_610A78 = (__int64)stringb;
    if ( qword_610A78 <= (unsigned __int64)qword_610A70 )
    {
      dword_610A80 = 0;
    }
    else
    {
      dword_610AC0 = 0;
      v11 = s && qword_610A78 < v35;
      dword_610A80 = v11;
    }
    while ( qword_610A78 > (unsigned __int64)qword_610A70 )
    {
      v12 = *__ctype_b_loc();
      if ( (v12[(unsigned __int8)sub_401E2D(*(_BYTE *)(qword_610A78 - 1))] & 0x2000) == 0 )
        break;
      --qword_610A78;
    }
  }
  v27 = dword_610A68 + qword_610AB0 - qword_610AB8 - dword_6102B8;
  if ( v27 <= 0 )
  {
    qword_610AD0 = 0LL;
    qword_610AD8 = 0LL;
    dword_610AE0 = 0;
  }
  else
  {
    for ( qword_610AD8 = (__int64)::string; qword_610AD8 > (unsigned __int64)qword_610920; --qword_610AD8 )
    {
      v13 = *__ctype_b_loc();
      if ( (v13[(unsigned __int8)sub_401E2D(*(_BYTE *)(qword_610AD8 - 1))] & 0x2000) == 0 )
        break;
    }
    qword_610AD0 = v32;
    while ( (unsigned __int64)&qword_610AD0[v27] < qword_610AD8 )
    {
      if ( qword_610520 )
      {
        v28 = re_match(&stru_610528, qword_610AD0, qword_610AD8 - (_DWORD)qword_610AD0, 0, 0LL);
        if ( v28 == -2 )
          sub_401F46();
        if ( v28 == -1 )
          v14 = 1LL;
        else
          v14 = v28;
        qword_610AD0 += v14;
      }
      else if ( byte_6107C0[(unsigned __int8)sub_401E2D(*qword_610AD0)] )
      {
        while ( (unsigned __int64)qword_610AD0 < qword_610AD8 && byte_6107C0[(unsigned __int8)sub_401E2D(*qword_610AD0)] )
          ++qword_610AD0;
      }
      else
      {
        ++qword_610AD0;
      }
    }
    if ( qword_610AD8 <= (unsigned __int64)qword_610AD0 )
    {
      dword_610AE0 = 0;
    }
    else
    {
      dword_610AA0 = 0;
      v15 = s && (unsigned __int64)qword_610AD0 > v34;
      dword_610AE0 = v15;
    }
    while ( (unsigned __int64)qword_610AD0 < qword_610AD8 )
    {
      v16 = *__ctype_b_loc();
      if ( (v16[(unsigned __int8)sub_401E2D(*qword_610AD0)] & 0x2000) == 0 )
        break;
      ++qword_610AD0;
    }
  }
  if ( byte_610380 )
  {
    for ( i = 0; *(_DWORD *)(4LL * i + qword_610918) < *(_DWORD *)(a1 + 20); ++i )
      ;
    v33 = *(const char **)(8LL * i + qword_610910);
    if ( !v33 )
      v33 = &locale;
    v21 = *(_DWORD *)(a1 + 20) + 1;
    if ( i > 0 )
      v21 -= *(_DWORD *)(4LL * i - 4 + qword_610918);
    sprintf(qword_610AF0, "%s:%d", v33, v21);
    v17 = qword_610AF0;
    result = (__int64)&v17[strlen(qword_610AF0)];
    qword_610AF8 = result;
  }
  else
  {
    result = (unsigned __int8)byte_610381;
    if ( byte_610381 )
    {
      qword_610AF0 = (char *)(qword_610AB0 + (__int16)*(_DWORD *)(a1 + 20));
      for ( qword_610AF8 = (__int64)qword_610AF0; ; ++qword_610AF8 )
      {
        result = qword_610AF8;
        if ( qword_610AF8 >= v35 )
          break;
        v19 = *__ctype_b_loc();
        result = v19[(unsigned __int8)sub_401E2D(*(_BYTE *)qword_610AF8)] & 0x2000;
        if ( (_DWORD)result )
          break;
      }
    }
  }
  return result;
}
