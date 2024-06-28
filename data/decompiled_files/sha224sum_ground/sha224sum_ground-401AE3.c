#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401AE3(__int64 a1, unsigned __int64 a2, _QWORD *a3, _DWORD *a4, _QWORD *a5)
{
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  int v9; // eax
  _BYTE *v10; // rax
  _BYTE *v11; // rax
  _BYTE *v12; // rax
  __int64 v13; // rdx
  char v17; // [rsp+37h] [rbp-19h]
  __int64 i; // [rsp+38h] [rbp-18h]
  __int64 v19; // [rsp+38h] [rbp-18h]
  __int64 v20; // [rsp+38h] [rbp-18h]
  unsigned __int64 v21; // [rsp+38h] [rbp-18h]
  _BYTE *v22; // [rsp+40h] [rbp-10h]

  v17 = 0;
  for ( i = 0LL; *(_BYTE *)(a1 + i) == 32 || *(_BYTE *)(a1 + i) == 9; ++i )
    ;
  if ( strncmp((const char *)(a1 + i), "SHA224", 6uLL) )
    goto LABEL_10;
  if ( *(_BYTE *)(i + 6 + a1) == 32 )
    ++i;
  if ( *(_BYTE *)(i + 6 + a1) == 40 )
  {
    *a4 = 0;
    result = sub_4019C8(i + 7 + a1, a2 - (i + 6) - 1, a3, a5);
  }
  else
  {
LABEL_10:
    if ( a2 - i >= (unsigned __int64)(*(_BYTE *)(a1 + i) == 92) + qword_60C288 )
    {
      if ( *(_BYTE *)(a1 + i) == 92 )
      {
        ++i;
        v17 = 1;
      }
      *a3 = i + a1;
      v19 = qword_60C290 + i;
      if ( *(_BYTE *)(a1 + v19) == 32 || *(_BYTE *)(a1 + v19) == 9 )
      {
        v6 = v19;
        v20 = v19 + 1;
        *(_BYTE *)(a1 + v6) = 0;
        if ( *(_BYTE *)(a1 + v20) == 32 || *(_BYTE *)(a1 + v20) == 42 )
        {
          v7 = v20;
          v21 = v20 + 1;
          *a4 = *(_BYTE *)(a1 + v7) == 42;
          *a5 = v21 + a1;
          if ( v17 )
          {
            v22 = (_BYTE *)(a1 + v21);
            while ( v21 < a2 )
            {
              if ( !*(_BYTE *)(a1 + v21) )
                return 0LL;
              if ( *(_BYTE *)(a1 + v21) == 92 )
              {
                if ( a2 - 1 == v21 )
                  return 0LL;
                v8 = v21 + 1;
                v21 += 2LL;
                v9 = *(char *)(a1 + v8);
                if ( v9 == 92 )
                {
                  v11 = v22++;
                  *v11 = 92;
                }
                else
                {
                  if ( v9 != 110 )
                    return 0LL;
                  v10 = v22++;
                  *v10 = 10;
                }
              }
              else
              {
                v12 = v22++;
                v13 = v21++;
                *v12 = *(_BYTE *)(a1 + v13);
              }
            }
            *v22 = 0;
          }
          result = 1LL;
        }
        else
        {
          result = 0LL;
        }
      }
      else
      {
        result = 0LL;
      }
    }
    else
    {
      result = 0LL;
    }
  }
  return result;
}
