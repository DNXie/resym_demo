#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_40370B(const char *a1, _QWORD *a2)
{
  const char *v2; // rbx
  int *v3; // rax
  __int64 i; // [rsp+28h] [rbp-D8h]
  __int64 j; // [rsp+28h] [rbp-D8h]
  __int64 v6; // [rsp+30h] [rbp-D0h]
  size_t v7; // [rsp+38h] [rbp-C8h]
  char *s; // [rsp+40h] [rbp-C0h]
  size_t v9; // [rsp+48h] [rbp-B8h]
  size_t n; // [rsp+50h] [rbp-B0h]
  char *ptr; // [rsp+58h] [rbp-A8h]
  struct stat stat_buf; // [rsp+60h] [rbp-A0h] BYREF

  v6 = 0LL;
  s = canonicalize_file_name(a1);
  if ( s && *s == 47 )
  {
    v9 = strlen(s);
    v7 = 0LL;
    for ( i = qword_618548; i; i = *(_QWORD *)(i + 40) )
    {
      if ( strcmp(*(const char **)(i + 16), "lofs")
        && (!v6 || (*(_BYTE *)(v6 + 32) & 1) != 0 || (*(_BYTE *)(i + 32) & 1) == 0) )
      {
        n = strlen(*(const char **)(i + 8));
        if ( v7 <= n && n <= v9 && (n == 1 || (n == v9 || s[n] == 47) && !strncmp(*(const char **)(i + 8), s, n)) )
        {
          v6 = i;
          v7 = n;
        }
      }
    }
  }
  free(s);
  if ( v6 && ((unsigned int)sub_413F40(*(char **)(v6 + 8), &stat_buf) || stat_buf.st_dev != *a2) )
    v6 = 0LL;
  if ( !v6 )
  {
    for ( j = qword_618548; j; j = *(_QWORD *)(j + 40) )
    {
      if ( *(_QWORD *)(j + 24) == -1LL )
      {
        if ( (unsigned int)sub_413F40(*(char **)(j + 8), &stat_buf) )
        {
          if ( *__errno_location() == 5 )
          {
            v2 = (const char *)sub_407086(*(_QWORD *)(j + 8));
            v3 = __errno_location();
            error(0, *v3, "%s", v2);
            status = 1;
          }
          *(_QWORD *)(j + 24) = -2LL;
        }
        else
        {
          *(_QWORD *)(j + 24) = stat_buf.st_dev;
        }
      }
      if ( *a2 == *(_QWORD *)(j + 24)
        && strcmp(*(const char **)(j + 16), "lofs")
        && (!v6 || (*(_BYTE *)(v6 + 32) & 1) != 0 || (*(_BYTE *)(j + 32) & 1) == 0) )
      {
        if ( !(unsigned int)sub_413F40(*(char **)(j + 8), &stat_buf) && stat_buf.st_dev == *(_QWORD *)(j + 24) )
          v6 = j;
        else
          *(_QWORD *)(j + 24) = -2LL;
      }
    }
  }
  if ( v6 )
  {
    sub_402BA3(
      *(const char **)v6,
      *(const char **)(v6 + 8),
      a1,
      *(const char **)(v6 + 16),
      (*(_BYTE *)(v6 + 32) & 1) != 0,
      (*(_BYTE *)(v6 + 32) & 2) != 0,
      0LL);
  }
  else
  {
    ptr = (char *)sub_4046C9(a1, a2);
    if ( ptr )
    {
      sub_402BA3(0LL, ptr, 0LL, 0LL, 0, 0, 0LL);
      free(ptr);
    }
  }
}
