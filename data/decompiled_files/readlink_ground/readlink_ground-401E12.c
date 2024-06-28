#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_401E12(char *a1, int a2)
{
  _BYTE *v3; // rax
  char *v4; // rax
  size_t v5; // rax
  size_t v6; // rax
  char *v7; // [rsp+8h] [rbp-118h]
  int v8; // [rsp+1Ch] [rbp-104h]
  __int64 v9; // [rsp+20h] [rbp-100h] BYREF
  char *s; // [rsp+28h] [rbp-F8h]
  void *dest; // [rsp+30h] [rbp-F0h]
  void *ptr; // [rsp+38h] [rbp-E8h]
  void *src; // [rsp+40h] [rbp-E0h]
  char *i; // [rsp+48h] [rbp-D8h]
  char *v15; // [rsp+50h] [rbp-D0h]
  size_t v16; // [rsp+58h] [rbp-C8h]
  __int64 v17; // [rsp+60h] [rbp-C0h]
  char *v18; // [rsp+68h] [rbp-B8h]
  __int64 v19; // [rsp+70h] [rbp-B0h]
  char *v20; // [rsp+78h] [rbp-A8h]
  size_t n; // [rsp+80h] [rbp-A0h]
  size_t v22; // [rsp+88h] [rbp-98h]
  struct stat stat_buf; // [rsp+90h] [rbp-90h] BYREF

  v7 = a1;
  ptr = 0LL;
  v16 = 0LL;
  v9 = 0LL;
  if ( !a1 )
  {
    *__errno_location() = 22;
    return 0LL;
  }
  if ( !*a1 )
  {
    *__errno_location() = 2;
    return 0LL;
  }
  if ( *a1 == 47 )
  {
    s = (char *)sub_40679A(4096LL);
    v15 = s + 4096;
    *s = 47;
    dest = s + 1;
  }
  else
  {
    s = (char *)sub_406951();
    if ( !s )
      return 0LL;
    dest = strchr(s, 0);
    if ( (_BYTE *)dest - s > 4095 )
    {
      v15 = (char *)dest;
    }
    else
    {
      v18 = (char *)sub_4067CF(s, 4096LL);
      dest = &v18[(_BYTE *)dest - s];
      s = v18;
      v15 = v18 + 4096;
    }
  }
  for ( src = a1; *(_BYTE *)src; src = i )
  {
    while ( *(_BYTE *)src == 47 )
      src = (char *)src + 1;
    for ( i = (char *)src; *i && *i != 47; ++i )
      ;
    if ( i == src )
      break;
    if ( i - (_BYTE *)src == 1 && *(_BYTE *)src == 46 )
      continue;
    if ( i - (_BYTE *)src == 2 && *(_BYTE *)src == 46 && *((_BYTE *)src + 1) == 46 )
    {
      if ( s + 1 < dest )
      {
        do
          dest = (char *)dest - 1;
        while ( *((char *)dest - 1) != 47 );
      }
      continue;
    }
    if ( *((char *)dest - 1) != 47 )
    {
      v3 = dest;
      dest = (char *)dest + 1;
      *v3 = 47;
    }
    if ( (char *)dest + i - (_BYTE *)src >= v15 )
    {
      v19 = (_BYTE *)dest - s;
      v17 = v15 - s;
      if ( i - (_BYTE *)src + 1 <= 4096 )
        v17 += 4096LL;
      else
        v17 += i - (_BYTE *)src + 1;
      s = (char *)sub_4067CF(s, v17);
      v15 = &s[v17];
      dest = &s[v19];
    }
    v4 = (char *)memcpy(dest, src, i - (_BYTE *)src);
    dest = &v4[i - (_BYTE *)src];
    *(_BYTE *)dest = 0;
    if ( (unsigned int)sub_407600(s, &stat_buf) )
    {
      v8 = *__errno_location();
      if ( !a2 )
        goto LABEL_76;
      if ( a2 == 1 )
      {
        v5 = strspn(i, "/");
        if ( i[v5] || v8 != 2 )
          goto LABEL_76;
        continue;
      }
      stat_buf.st_mode = 0;
    }
    if ( (stat_buf.st_mode & 0xF000) == 40960 )
    {
      if ( (unsigned __int8)sub_401D6B(&v9, (__int64)v7, (__int64)&stat_buf) )
      {
        if ( a2 != 2 )
        {
          v8 = 40;
LABEL_76:
          free(ptr);
          free(s);
          if ( v9 )
            sub_4034AA(v9);
          *__errno_location() = v8;
          return 0LL;
        }
      }
      else
      {
        v20 = sub_401C1C(s, stat_buf.st_size);
        if ( v20 )
        {
          n = strlen(v20);
          v22 = strlen(i);
          if ( v16 )
          {
            if ( n + v22 + 1 > v16 )
            {
              v16 = n + v22 + 1;
              ptr = (void *)sub_4067CF(ptr, v16);
            }
          }
          else
          {
            v6 = n + v22 + 1;
            if ( v6 < 0x1000 )
              v6 = 4096LL;
            v16 = v6;
            ptr = (void *)sub_40679A(v6);
          }
          memmove((char *)ptr + n, i, v22 + 1);
          i = (char *)memcpy(ptr, v20, n);
          v7 = i;
          if ( *v20 == 47 )
          {
            dest = s + 1;
          }
          else if ( s + 1 < dest )
          {
            do
              dest = (char *)dest - 1;
            while ( *((char *)dest - 1) != 47 );
          }
          free(v20);
        }
        else if ( a2 != 2 || *__errno_location() == 12 )
        {
          v8 = *__errno_location();
          goto LABEL_76;
        }
      }
    }
    else if ( (stat_buf.st_mode & 0xF000) != 0x4000 && *i && a2 != 2 )
    {
      v8 = 20;
      goto LABEL_76;
    }
  }
  if ( s + 1 < dest && *((char *)dest - 1) == 47 )
    dest = (char *)dest - 1;
  *(_BYTE *)dest = 0;
  if ( (char *)dest + 1 != v15 )
    s = (char *)sub_4067CF(s, (_BYTE *)dest - s + 1);
  free(ptr);
  if ( v9 )
    sub_4034AA(v9);
  return s;
}
