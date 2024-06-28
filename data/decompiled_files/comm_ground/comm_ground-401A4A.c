#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_401A4A(__int64 a1)
{
  FILE *v1; // rax
  const char *v2; // rbx
  int *v3; // rax
  const char *v4; // rbx
  int *v5; // rax
  unsigned __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rax
  const char *v9; // rbx
  int *v10; // rax
  const char *v11; // rbx
  int *v12; // rax
  char v13; // [rsp+10h] [rbp-170h]
  char v14; // [rsp+11h] [rbp-16Fh]
  int i; // [rsp+1Ch] [rbp-164h]
  int j; // [rsp+20h] [rbp-160h]
  int v17; // [rsp+24h] [rbp-15Ch]
  size_t n; // [rsp+28h] [rbp-158h]
  __int64 v19; // [rsp+30h] [rbp-150h]
  __int64 v20; // [rsp+38h] [rbp-148h]
  FILE *stream[40]; // [rsp+40h] [rbp-140h] BYREF

  for ( i = 0; i <= 1; ++i )
  {
    for ( j = 0; j <= 3; ++j )
    {
      sub_402A61(&stream[12 * i + 14] + 3 * j);
      *(&stream[4 * i + 6] + j) = (FILE *)(&stream[12 * i + 14] + 3 * j);
    }
    *((_DWORD *)&stream[2] + 3 * i) = 0;
    *((_DWORD *)&stream[2] + 3 * i + 1) = 0;
    *((_DWORD *)&stream[3] + 3 * i) = 0;
    if ( !strcmp(*(const char **)(8LL * i + a1), "-") )
      v1 = (FILE *)stdin;
    else
      v1 = (FILE *)sub_40291E(*(_QWORD *)(8LL * i + a1), "r");
    stream[i] = v1;
    if ( !stream[i] )
    {
      v2 = *(const char **)(8LL * i + a1);
      v3 = __errno_location();
      error(1, *v3, "%s", v2);
    }
    sub_4028E4(stream[i], 2LL);
    *(&v19 + i) = sub_402A85(*(&stream[4 * i + 6] + *((int *)&stream[2] + 3 * i)), stream[i]);
    if ( ferror_unlocked(stream[i]) )
    {
      v4 = *(const char **)(8LL * i + a1);
      v5 = __errno_location();
      error(1, *v5, "%s", v4);
    }
  }
  while ( v19 || v20 )
  {
    v13 = 0;
    v14 = 0;
    if ( v19 )
    {
      if ( v20 )
      {
        if ( byte_608260 )
        {
          v17 = sub_405168(
                  *(_QWORD *)(v19 + 16),
                  *(_QWORD *)(v19 + 8) - 1LL,
                  *(_QWORD *)(v20 + 16),
                  *(_QWORD *)(v20 + 8) - 1LL);
        }
        else
        {
          v6 = *(_QWORD *)(v19 + 8);
          if ( *(_QWORD *)(v20 + 8) <= v6 )
            v6 = *(_QWORD *)(v20 + 8);
          n = v6 - 1;
          v17 = memcmp(*(const void **)(v19 + 16), *(const void **)(v20 + 16), v6 - 1);
          if ( !v17 )
          {
            if ( *(_QWORD *)(v19 + 8) < *(_QWORD *)(v20 + 8) )
              v7 = -1;
            else
              v7 = *(_QWORD *)(v19 + 8) != *(_QWORD *)(v20 + 8);
            v17 = v7;
          }
        }
      }
      else
      {
        v17 = -1;
      }
    }
    else
    {
      v17 = 1;
    }
    if ( v17 )
    {
      byte_608264 = 1;
      if ( v17 > 0 )
        sub_401849(v20, stdout, 2);
      else
        sub_401849(v19, stdout, 1);
    }
    else
    {
      sub_401849(v20, stdout, 3);
    }
    if ( v17 >= 0 )
      v14 = 1;
    if ( v17 <= 0 )
      v13 = 1;
    for ( i = 0; i <= 1; ++i )
    {
      if ( *(&v13 + i) )
      {
        *((_DWORD *)&stream[3] + 3 * i) = *((_DWORD *)&stream[2] + 3 * i + 1);
        *((_DWORD *)&stream[2] + 3 * i + 1) = *((_DWORD *)&stream[2] + 3 * i);
        *((_DWORD *)&stream[2] + 3 * i) = ((unsigned __int8)*((_DWORD *)&stream[2] + 3 * i) + 1) & 3;
        v8 = sub_402A85(*(&stream[4 * i + 6] + *((int *)&stream[2] + 3 * i)), stream[i]);
        *(&v19 + i) = v8;
        if ( *(&v19 + i) )
        {
          sub_40193A((__int64)*(&stream[4 * i + 6] + *((int *)&stream[2] + 3 * i + 1)), *(&v19 + i), i + 1);
        }
        else if ( (*(&stream[4 * i + 6] + *((int *)&stream[3] + 3 * i)))->_IO_read_end )
        {
          sub_40193A(
            (__int64)*(&stream[4 * i + 6] + *((int *)&stream[3] + 3 * i)),
            (__int64)*(&stream[4 * i + 6] + *((int *)&stream[2] + 3 * i + 1)),
            i + 1);
        }
        if ( ferror_unlocked(stream[i]) )
        {
          v9 = *(const char **)(8LL * i + a1);
          v10 = __errno_location();
          error(1, *v10, "%s", v9);
        }
        *(&v13 + i) = 0;
      }
    }
  }
  for ( i = 0; i <= 1; ++i )
  {
    if ( (unsigned int)sub_405240(stream[i]) )
    {
      v11 = *(const char **)(8LL * i + a1);
      v12 = __errno_location();
      error(1, *v12, "%s", v11);
    }
  }
}
