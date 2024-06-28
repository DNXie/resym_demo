#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_402A7F()
{
  const unsigned __int16 *v0; // rbx
  const unsigned __int16 *v1; // rbx
  int v2; // eax
  const unsigned __int16 *v3; // rbx
  const unsigned __int16 *v4; // rbx
  const unsigned __int16 *v5; // rbx
  const unsigned __int16 *v6; // rbx
  const unsigned __int16 *v7; // rbx
  __int64 v8; // rdx
  __int64 result; // rax
  int v10; // [rsp+8h] [rbp-78h]
  int v11; // [rsp+Ch] [rbp-74h]
  char *string; // [rsp+10h] [rbp-70h]
  unsigned __int8 *j; // [rsp+18h] [rbp-68h]
  __int64 v14; // [rsp+20h] [rbp-60h]
  unsigned __int8 *v15; // [rsp+28h] [rbp-58h]
  unsigned __int8 *v16; // [rsp+30h] [rbp-50h]
  unsigned __int8 *i; // [rsp+38h] [rbp-48h]
  unsigned __int64 v18; // [rsp+40h] [rbp-40h]
  unsigned __int8 *v19; // [rsp+48h] [rbp-38h]
  __int64 v20; // [rsp+50h] [rbp-30h]
  char *v21; // [rsp+58h] [rbp-28h]
  unsigned __int64 v22; // [rsp+60h] [rbp-20h] BYREF
  __int64 v23; // [rsp+68h] [rbp-18h]

  v10 = 0;
  v14 = qword_610920;
  v15 = (unsigned __int8 *)qword_610920;
  if ( byte_610381 )
  {
    while ( qword_610928 > (unsigned __int64)v15 )
    {
      v0 = *__ctype_b_loc();
      if ( (v0[(unsigned __int8)sub_401E2D(*v15)] & 0x2000) != 0 )
        break;
      ++v15;
    }
    v10 = (_DWORD)v15 - v14;
    while ( qword_610928 > (unsigned __int64)v15 )
    {
      v1 = *__ctype_b_loc();
      if ( (v1[(unsigned __int8)sub_401E2D(*v15)] & 0x2000) == 0 )
        break;
      ++v15;
    }
  }
  string = (char *)qword_610920;
LABEL_85:
  result = qword_610928;
  if ( qword_610928 > (unsigned __int64)string )
  {
    v16 = (unsigned __int8 *)string;
    v20 = qword_610928;
    if ( qword_6103C0 )
    {
      v2 = re_search(&buffer, string, qword_610928 - (_DWORD)string, 0, qword_610928 - (_DWORD)string, &regs);
      if ( v2 == -2 )
        sub_401F46();
      if ( v2 != -1 )
        v20 = (__int64)&string[*regs.end];
    }
    for ( i = (unsigned __int8 *)v20; i > (unsigned __int8 *)string; --i )
    {
      v3 = *__ctype_b_loc();
      if ( (v3[(unsigned __int8)sub_401E2D(*(i - 1))] & 0x2000) == 0 )
        break;
    }
    while ( 1 )
    {
      if ( qword_610520 )
      {
        v11 = re_search(&stru_610528, string, (_DWORD)i - (_DWORD)string, 0, (_DWORD)i - (_DWORD)string, &stru_6107A0);
        if ( v11 == -2 )
          sub_401F46();
        if ( v11 == -1 )
        {
LABEL_84:
          string = (char *)v20;
          goto LABEL_85;
        }
        v18 = (unsigned __int64)&string[*stru_6107A0.start];
        v19 = (unsigned __int8 *)&string[*stru_6107A0.end];
      }
      else
      {
        for ( j = (unsigned __int8 *)string; j < i && !byte_6107C0[(unsigned __int8)sub_401E2D(*j)]; ++j )
          ;
        if ( j == i )
          goto LABEL_84;
        v18 = (unsigned __int64)j;
        while ( j < i && byte_6107C0[(unsigned __int8)sub_401E2D(*j)] )
          ++j;
        v19 = j;
      }
      if ( v19 == (unsigned __int8 *)v18 )
      {
        string = (char *)(v18 + 1);
      }
      else
      {
        v22 = v18;
        LOWORD(v23) = (_WORD)v19 - v18;
        string = (char *)((__int16)((_WORD)v19 - v18) + v18);
        if ( (__int16)((_WORD)v19 - v18) > dword_6108C0 )
          dword_6108C0 = (__int16)v23;
        if ( !byte_610381 )
          goto LABEL_88;
        while ( v22 > (unsigned __int64)v15 )
        {
          if ( *v15 == 10 )
          {
            ++dword_61090C;
            v14 = (__int64)++v15;
            while ( qword_610928 > (unsigned __int64)v15 )
            {
              v4 = *__ctype_b_loc();
              if ( (v4[(unsigned __int8)sub_401E2D(*v15)] & 0x2000) != 0 )
                break;
              ++v15;
            }
            v10 = (_DWORD)v15 - v14;
          }
          else
          {
            ++v15;
          }
        }
        if ( v22 >= (unsigned __int64)v15 )
        {
LABEL_88:
          if ( (!qword_6103A0 || !(unsigned int)sub_402798(&v22, qword_6108D0))
            && (!qword_610398 || (unsigned int)sub_402798(&v22, qword_6108F0)) )
          {
            if ( nmemb == qword_610938 )
            {
              if ( (unsigned __int64)qword_610938 > 0x555555555555554LL )
                sub_40976A();
              qword_610938 = 2 * qword_610938 + 1;
              base = (void *)sub_40961D(base, 24 * qword_610938);
            }
            v21 = (char *)base + 24 * nmemb;
            if ( byte_610380 )
            {
              while ( v22 > (unsigned __int64)v15 )
              {
                if ( *v15 == 10 )
                {
                  ++dword_61090C;
                  v14 = (__int64)++v15;
                  while ( qword_610928 > (unsigned __int64)v15 )
                  {
                    v5 = *__ctype_b_loc();
                    if ( (v5[(unsigned __int8)sub_401E2D(*v15)] & 0x2000) != 0 )
                      break;
                    ++v15;
                  }
                }
                else
                {
                  ++v15;
                }
              }
              *((_DWORD *)v21 + 5) = dword_61090C;
            }
            else if ( byte_610381 )
            {
              *((_DWORD *)v21 + 5) = (__int16)(v14 - v22);
              if ( v10 > dword_6108C4 )
                dword_6108C4 = v10;
            }
            if ( byte_610381 && (unsigned __int8 *)v14 == v16 )
            {
              while ( v16 < i )
              {
                v6 = *__ctype_b_loc();
                if ( (v6[(unsigned __int8)sub_401E2D(*v16)] & 0x2000) != 0 )
                  break;
                ++v16;
              }
              while ( v16 < i )
              {
                v7 = *__ctype_b_loc();
                if ( (v7[(unsigned __int8)sub_401E2D(*v16)] & 0x2000) == 0 )
                  break;
                ++v16;
              }
            }
            v8 = v23;
            *(_QWORD *)v21 = v22;
            *((_QWORD *)v21 + 1) = v8;
            *((_WORD *)v21 + 8) = (_WORD)v16 - v22;
            *((_WORD *)v21 + 9) = (_WORD)i - v22;
            ++nmemb;
          }
        }
      }
    }
  }
  return result;
}
