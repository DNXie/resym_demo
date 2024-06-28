#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402D8A(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edx
  int v5; // ecx
  int v6; // er8
  int v7; // er9
  char *v8; // rbx
  int *v9; // rax
  char *v11; // rax
  char *v12; // rax
  __blksize_t v13; // rcx
  __blksize_t v14; // rbx
  char *v15; // rbx
  int *v16; // rax
  unsigned __int8 v19; // [rsp+3Fh] [rbp-D1h]
  int v20; // [rsp+40h] [rbp-D0h]
  int v21; // [rsp+44h] [rbp-CCh]
  __off_t v22; // [rsp+48h] [rbp-C8h] BYREF
  unsigned __int64 i; // [rsp+50h] [rbp-C0h]
  __int64 v24; // [rsp+58h] [rbp-B8h]
  void *s; // [rsp+60h] [rbp-B0h]
  __int64 v26; // [rsp+68h] [rbp-A8h]
  struct stat stat_buf; // [rsp+70h] [rbp-A0h] BYREF

  v19 = 1;
  v24 = 0LL;
  if ( *(_BYTE *)(a4 + 25) )
    v24 = *(_QWORD *)(a4 + 8) + *(unsigned __int8 *)(a4 + 27);
  if ( (unsigned int)sub_409CA0(a1, &stat_buf) )
  {
    v8 = gettext("%s: fstat failed");
    v9 = __errno_location();
    error(0, *v9, v8, a2);
    return 0LL;
  }
  if ( (stat_buf.st_mode & 0xF000) == 0x2000 && isatty(a1)
    || (stat_buf.st_mode & 0xF000) == 4096
    || (stat_buf.st_mode & 0xF000) == 49152 )
  {
    v11 = gettext("%s: invalid file type");
    error(0, 0, v11, a2);
    return 0LL;
  }
  sub_40221C(a1, 1, v4, v5, v6, v7);
  s = (void *)sub_408965(*(_QWORD *)(a4 + 8), 4LL);
  v22 = *(_QWORD *)(a4 + 16);
  if ( v22 == -1 )
  {
    if ( (stat_buf.st_mode & 0xF000) == 0x8000 )
    {
      v22 = stat_buf.st_size;
      if ( stat_buf.st_size < 0 )
      {
        v12 = gettext("%s: file has negative size");
        error(0, 0, v12, a2);
        return 0LL;
      }
    }
    else
    {
      v22 = lseek(a1, 0LL, 2);
      if ( v22 <= 0 )
        v22 = -1LL;
    }
    if ( v22 >= 0 && *(_BYTE *)(a4 + 26) != 1 && (stat_buf.st_mode & 0xF000) == 0x8000 )
    {
      if ( stat_buf.st_blksize <= 0 || stat_buf.st_blksize > 0x2000000000000000uLL )
        v13 = 511LL;
      else
        v13 = stat_buf.st_blksize - 1;
      if ( stat_buf.st_blksize <= 0 || stat_buf.st_blksize > 0x2000000000000000uLL )
        v14 = 512LL;
      else
        v14 = stat_buf.st_blksize;
      v22 += v13 - (v22 - 1) % v14;
      if ( v22 < 0 )
        v22 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  sub_402AF2((char *)s, *(_QWORD *)(a4 + 8), a3);
  v26 = sub_406A63(a3);
  for ( i = 0LL; *(_QWORD *)(a4 + 8) > i; ++i )
  {
    v20 = sub_402281(a1, a2, &v22, *((_DWORD *)s + i), v26, i + 1, v24);
    if ( v20 )
    {
      if ( v20 < 0 )
      {
        memset(s, 0, 4LL * *(_QWORD *)(a4 + 8));
        free(s);
        return 0LL;
      }
      v19 = 0;
    }
  }
  memset(s, 0, 4LL * *(_QWORD *)(a4 + 8));
  free(s);
  if ( *(_BYTE *)(a4 + 27) )
  {
    v21 = sub_402281(a1, a2, &v22, 0, v26, *(_QWORD *)(a4 + 8) + 1LL, v24);
    if ( v21 )
    {
      if ( v21 < 0 )
        return 0LL;
      v19 = 0;
    }
  }
  if ( !*(_BYTE *)(a4 + 24) || !ftruncate(a1, 0LL) || (stat_buf.st_mode & 0xF000) != 0x8000 )
    return v19;
  v15 = gettext("%s: error truncating");
  v16 = __errno_location();
  error(0, *v16, v15, a2);
  return 0LL;
}
