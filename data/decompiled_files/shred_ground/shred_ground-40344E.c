#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40344E(const char *a1, const char *a2, __int64 a3)
{
  __int64 v3; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // er8
  int v7; // er9
  char *v8; // rax
  const char *v9; // rax
  char *v10; // rax
  char *v11; // rbx
  int *v12; // rax
  char *v13; // rax
  char *v14; // rbx
  int *v15; // rax
  char v18; // [rsp+2Ah] [rbp-D6h]
  unsigned __int8 v19; // [rsp+2Bh] [rbp-D5h]
  int fd; // [rsp+2Ch] [rbp-D4h]
  __int64 n; // [rsp+30h] [rbp-D0h]
  char *newa; // [rsp+38h] [rbp-C8h]
  void *s; // [rsp+40h] [rbp-C0h]
  void *ptr; // [rsp+48h] [rbp-B8h]
  void *v25; // [rsp+50h] [rbp-B0h]
  const char *v26; // [rsp+58h] [rbp-A8h]
  struct stat stat_buf; // [rsp+60h] [rbp-A0h] BYREF

  newa = (char *)sub_408C03(a1);
  s = (void *)sub_404082(newa);
  n = sub_4040EB(s);
  ptr = (void *)sub_403F34(newa);
  v3 = sub_40685A(ptr);
  v25 = (void *)sub_408C03(v3);
  v18 = 1;
  v19 = 1;
  fd = sub_404139((_DWORD)ptr, 67840, v4, v5, v6, v7);
  if ( *(_BYTE *)(a3 + 25) )
  {
    v8 = gettext("%s: removing");
    error(0, 0, v8, a2);
  }
  while ( n )
  {
    memset(s, 48, n);
    *((_BYTE *)s + n) = 0;
    while ( (int)sub_409CB0(newa, &stat_buf) >= 0 )
    {
      if ( !(unsigned __int8)sub_4033A2((__int64)s, n) )
        goto LABEL_18;
    }
    if ( !rename(a1, newa) )
    {
      if ( fd >= 0 && (unsigned int)sub_402132(fd, (__int64)v25) )
        v19 = 0;
      if ( *(_BYTE *)(a3 + 25) )
      {
        if ( v18 )
          v9 = a2;
        else
          v9 = a1;
        v26 = v9;
        v10 = gettext("%s: renamed to %s");
        error(0, 0, v10, v26, newa);
        v18 = 0;
      }
      memcpy((void *)&a1[(_BYTE *)s - newa], s, n + 1);
    }
LABEL_18:
    --n;
  }
  if ( unlink(a1) )
  {
    v11 = gettext("%s: failed to remove");
    v12 = __errno_location();
    error(0, *v12, v11, a2);
    v19 = 0;
  }
  else if ( *(_BYTE *)(a3 + 25) )
  {
    v13 = gettext("%s: removed");
    error(0, 0, v13, a2);
  }
  if ( fd >= 0 )
  {
    if ( (unsigned int)sub_402132(fd, (__int64)v25) )
      v19 = 0;
    if ( close(fd) )
    {
      v14 = gettext("%s: failed to close");
      v15 = __errno_location();
      error(0, *v15, v14, v25);
      v19 = 0;
    }
  }
  free(newa);
  free(ptr);
  free(v25);
  return v19;
}
