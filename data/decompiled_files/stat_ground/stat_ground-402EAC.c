#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_402EAC(void *a1, size_t a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // eax
  int v6; // eax
  int v7; // eax
  char *v8; // rax
  __int64 v9; // rax
  int result; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  char v16; // [rsp+42h] [rbp-7Eh]
  bool v17; // [rsp+43h] [rbp-7Dh]
  int v18; // [rsp+44h] [rbp-7Ch]
  int v19; // [rsp+48h] [rbp-78h]
  int v20; // [rsp+4Ch] [rbp-74h]
  int j; // [rsp+50h] [rbp-70h]
  unsigned int v22; // [rsp+54h] [rbp-6Ch]
  unsigned int v23; // [rsp+5Ch] [rbp-64h]
  int v24; // [rsp+64h] [rbp-5Ch]
  int v25; // [rsp+68h] [rbp-58h]
  int v26; // [rsp+6Ch] [rbp-54h]
  __int64 v27; // [rsp+78h] [rbp-48h]
  char *nptr; // [rsp+80h] [rbp-40h]
  char *nptra; // [rsp+80h] [rbp-40h]
  char *v30; // [rsp+88h] [rbp-38h]
  char *i; // [rsp+90h] [rbp-30h]
  char *v32; // [rsp+98h] [rbp-28h]
  __int64 v33; // [rsp+A0h] [rbp-20h]
  __int64 v34; // [rsp+A8h] [rbp-18h]

  v32 = (char *)memchr(a1, 46, a2);
  v27 = a2;
  v18 = 0;
  v19 = 0;
  v16 = 0;
  if ( v32 )
  {
    v27 = v32 - (_BYTE *)a1;
    *((_BYTE *)a1 + a2) = 0;
    if ( (unsigned int)(v32[1] - 48) > 9 )
    {
      v19 = 9;
    }
    else
    {
      v33 = strtol(v32 + 1, 0LL, 10);
      v5 = 0x7FFFFFFF;
      if ( v33 <= 0x7FFFFFFF )
        v5 = v33;
      v19 = v5;
    }
    if ( v19 && (unsigned int)(*(v32 - 1) - 48) <= 9 )
    {
      nptr = v32;
      *v32 = 0;
      do
        --nptr;
      while ( (unsigned int)(*(nptr - 1) - 48) <= 9 );
      v34 = strtol(nptr, 0LL, 10);
      v6 = 0x7FFFFFFF;
      if ( v34 <= 0x7FFFFFFF )
        v6 = v34;
      v18 = v6;
      if ( v6 > 1 )
      {
        nptra = &nptr[*nptr == 48];
        v27 = nptra - (_BYTE *)a1;
        v7 = v6 <= (unsigned __int64)qword_6163B0 ? 0 : v6 - qword_6163B0;
        if ( v7 > 1 )
        {
          v23 = v7 - v19;
          if ( v7 - v19 > 1 )
          {
            v30 = (char *)a1;
            for ( i = (char *)a1; i < nptra; ++i )
            {
              if ( *i == 45 )
              {
                v16 = 1;
              }
              else
              {
                v8 = v30++;
                *v8 = *i;
              }
            }
            if ( v16 != 1 )
              v9 = sprintf(v30, "%d", v23);
            else
              v9 = 0LL;
            v27 = v30 - (_BYTE *)a1 + v9;
          }
        }
      }
    }
  }
  v20 = 1;
  for ( j = v19; j <= 8; ++j )
    v20 *= 10;
  v22 = a5 / v20;
  v17 = 0;
  if ( a4 < 0 && a5 )
  {
    v22 = 1000000000 / v20 - v22 - (a5 % v20 != 0);
    a4 += v22 != 0;
    v17 = a4 == 0;
  }
  if ( v17 )
    result = sub_402E5C((const char *)a1, v27);
  else
    result = sub_402D3C((const char *)a1, v27, a4);
  v24 = result;
  if ( v19 )
  {
    v11 = 9;
    if ( v19 <= 9 )
      v11 = v19;
    v25 = v11;
    v26 = v19 - v11;
    v12 = 0;
    if ( v24 >= 0 )
      v12 = v24;
    if ( v12 >= v18 || v18 - v12 <= (unsigned __int64)qword_6163B0 )
      v13 = 0;
    else
      v13 = v18 - v12 - qword_6163B0 - v25;
    result = printf("%s%.*d%-*.*d", qword_6163A8, v25, v22, v13, v26, 0);
  }
  return result;
}
