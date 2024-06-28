#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401800(unsigned __int64 a1, __int64 a2)
{
  const char *v2; // rbx
  int *v3; // rax
  char *v4; // rax
  const char *v5; // rbx
  int *v6; // rax
  size_t v7; // rax
  char v8; // al
  unsigned __int8 v10; // [rsp+1Ch] [rbp-54h]
  char v11; // [rsp+1Dh] [rbp-53h]
  char v12; // [rsp+1Eh] [rbp-52h]
  int v13; // [rsp+20h] [rbp-50h]
  int errnum; // [rsp+24h] [rbp-4Ch]
  unsigned __int64 i; // [rsp+28h] [rbp-48h]
  char *v16; // [rsp+30h] [rbp-40h]
  size_t n; // [rsp+38h] [rbp-38h]
  unsigned __int64 j; // [rsp+40h] [rbp-30h]
  __int64 v19; // [rsp+48h] [rbp-28h]
  void *ptr; // [rsp+50h] [rbp-20h]
  _QWORD *v21; // [rsp+58h] [rbp-18h]

  v10 = 1;
  ptr = (void *)sub_40476E(a1 + 2);
  v21 = (_QWORD *)sub_404625(a1 + 1, 8LL);
  v11 = 0;
  for ( i = 0LL; i < a1; ++i )
  {
    if ( !strcmp(*(const char **)(8 * i + a2), "-") )
    {
      byte_607260 = 1;
      v21[i] = stdin;
    }
    else
    {
      v21[i] = fopen(*(const char **)(8 * i + a2), "r");
      if ( v21[i] )
      {
        if ( !fileno((FILE *)v21[i]) )
          v11 = 1;
      }
      else
      {
        v2 = *(const char **)(8 * i + a2);
        v3 = __errno_location();
        error(1, *v3, "%s", v2);
      }
      sub_40253A(v21[i], 2LL);
    }
  }
  if ( v11 && byte_607260 )
  {
    v4 = gettext("standard input is closed");
    error(1, 0, v4);
  }
  while ( i )
  {
    v12 = 0;
    v16 = (char *)::ptr;
    n = 0LL;
    for ( j = 0LL; j < a1 && i; ++j )
    {
      v19 = 0LL;
      if ( v21[j] )
      {
        v13 = getc_unlocked((FILE *)v21[j]);
        errnum = *__errno_location();
        if ( v13 != -1 && n )
        {
          if ( fwrite_unlocked(ptr, 1uLL, n, stdout) != n )
            sub_4017A7();
          n = 0LL;
        }
        while ( v13 != -1 )
        {
          ++v19;
          if ( v13 == 10 )
            break;
          sub_4017DD(v13);
          v13 = getc_unlocked((FILE *)v21[j]);
          errnum = *__errno_location();
        }
      }
      if ( v19 )
      {
        v12 = 1;
        if ( j + 1 == a1 )
        {
          if ( v13 == -1 )
            v8 = 10;
          else
            v8 = v13;
          sub_4017DD(v8);
        }
        else
        {
          if ( v13 != 10 && v13 != -1 )
            sub_4017DD(v13);
          if ( *v16 )
            sub_4017DD(*v16);
          if ( ++v16 == (char *)qword_607270 )
            v16 = (char *)::ptr;
        }
      }
      else
      {
        if ( v21[j] )
        {
          if ( ferror_unlocked((FILE *)v21[j]) )
          {
            error(0, errnum, "%s", *(const char **)(8 * j + a2));
            v10 = 0;
          }
          if ( v21[j] == stdin )
          {
            clearerr_unlocked((FILE *)v21[j]);
          }
          else if ( (unsigned int)sub_404925(v21[j]) == -1 )
          {
            v5 = *(const char **)(8 * j + a2);
            v6 = __errno_location();
            error(0, *v6, "%s", v5);
            v10 = 0;
          }
          v21[j] = 0LL;
          --i;
        }
        if ( j + 1 == a1 )
        {
          if ( v12 )
          {
            if ( n )
            {
              if ( fwrite_unlocked(ptr, 1uLL, n, stdout) != n )
                sub_4017A7();
              n = 0LL;
            }
            sub_4017DD(10);
          }
        }
        else
        {
          if ( *v16 )
          {
            v7 = n++;
            *((_BYTE *)ptr + v7) = *v16;
          }
          if ( ++v16 == (char *)qword_607270 )
            v16 = (char *)::ptr;
        }
      }
    }
  }
  free(v21);
  free(ptr);
  return v10;
}
