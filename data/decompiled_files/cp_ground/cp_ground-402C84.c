#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402C84(char *a1, __int64 a2, char *a3, __nlink_t *a4, _BYTE *a5, _BYTE *a6)
{
  size_t v6; // rax
  void *v7; // rsp
  void *v8; // rsp
  int v9; // eax
  int v10; // eax
  __int64 v11; // rbx
  char *v12; // rax
  int v14; // eax
  __int64 v15; // r12
  char *v16; // rbx
  int *v17; // rax
  __int64 v18; // r12
  char *v19; // rbx
  int *v20; // rax
  __int64 v21; // r12
  char *v22; // rbx
  int *v23; // rax
  __int64 v24; // rbx
  char *v25; // rax
  char *v26; // rax
  __int64 v27; // rbx
  char *v28; // rax
  _BYTE *v30; // [rsp+8h] [rbp-1B8h] BYREF
  __nlink_t *v31; // [rsp+10h] [rbp-1B0h]
  char *format; // [rsp+18h] [rbp-1A8h]
  __int64 v33; // [rsp+20h] [rbp-1A0h]
  char *v34; // [rsp+28h] [rbp-198h]
  bool v35; // [rsp+37h] [rbp-189h]
  __mode_t v36; // [rsp+38h] [rbp-188h]
  int errnum; // [rsp+3Ch] [rbp-184h]
  __mode_t v38; // [rsp+40h] [rbp-180h]
  __mode_t mode; // [rsp+44h] [rbp-17Ch]
  char *i; // [rsp+48h] [rbp-178h]
  struct stat *v41; // [rsp+50h] [rbp-170h]
  char *s; // [rsp+58h] [rbp-168h]
  size_t n; // [rsp+60h] [rbp-160h]
  void *dest; // [rsp+68h] [rbp-158h]
  void *src; // [rsp+70h] [rbp-150h]
  char *v46; // [rsp+78h] [rbp-148h]
  size_t v47; // [rsp+80h] [rbp-140h]
  char *filename; // [rsp+88h] [rbp-138h]
  struct stat stat_buf; // [rsp+90h] [rbp-130h] BYREF
  struct stat v50; // [rsp+120h] [rbp-A0h] BYREF

  v34 = a1;
  v33 = a2;
  format = a3;
  v31 = a4;
  v30 = a5;
  s = a1;
  v6 = strlen(a1);
  n = v6 + 1;
  v7 = alloca(16 * ((v6 + 31) / 0x10));
  dest = (void *)(16 * (((unsigned __int64)&v30 + 7) >> 4));
  src = memcpy(dest, a1, v6 + 1);
  v46 = (char *)src + v33;
  v47 = sub_40B584(src);
  v8 = alloca(16 * ((v47 + 31) / 0x10));
  filename = (char *)(16 * (((unsigned __int64)&v30 + 7) >> 4));
  memcpy(filename, src, v47);
  filename[v47] = 0;
  *v31 = 0LL;
  if ( (unsigned int)sub_416100(filename, &stat_buf) )
  {
    for ( i = v46; *i == 47; ++i )
      ;
    while ( 1 )
    {
      i = strchr(i, 47);
      if ( !i )
        break;
      *i = 0;
      v9 = sub_416100((char *)src, &stat_buf);
      v35 = v9 != 0;
      if ( v9 || a6[28] || a6[29] || a6[30] )
      {
        if ( (unsigned int)sub_416100(v46, &v50) )
        {
          v10 = *__errno_location();
        }
        else if ( (v50.st_mode & 0xF000) == 0x4000 )
        {
          v10 = 0;
        }
        else
        {
          v10 = 20;
        }
        errnum = v10;
        if ( v10 )
        {
          v11 = sub_40E491(v46);
          v12 = gettext("failed to get attributes of %s");
          error(0, errnum, v12, v11);
          return 0LL;
        }
        v41 = (struct stat *)sub_4126C5(168LL);
        qmemcpy(v41, &v50, sizeof(struct stat));
        v41[1].st_ino = i - (_BYTE *)src;
        LOBYTE(v41[1].st_dev) = 0;
        v41[1].st_nlink = *v31;
        *v31 = (__nlink_t)v41;
      }
      if ( v35 )
      {
        *v30 = 1;
        v38 = v41->st_mode;
        if ( a6[28] != 1 )
        {
          if ( a6[29] )
            v14 = 18;
          else
            v14 = 0;
        }
        else
        {
          v14 = 63;
        }
        v36 = v38 & v14;
        mode = (unsigned __int16)v38 & (unsigned __int16)~(v38 & v14) & 0xFFF;
        if ( mkdir((const char *)src, mode) )
        {
          v15 = sub_40E491(src);
          v16 = gettext("cannot make directory %s");
          v17 = __errno_location();
          error(0, *v17, v16, v15);
          return 0LL;
        }
        if ( format )
          printf(format, v46, src);
        if ( (unsigned int)sub_416120((char *)src, &stat_buf) )
        {
          v18 = sub_40E491(src);
          v19 = gettext("failed to get attributes of %s");
          v20 = __errno_location();
          error(0, *v20, v19, v18);
          return 0LL;
        }
        if ( a6[29] != 1 )
        {
          if ( (v36 & ~stat_buf.st_mode) != 0 )
            v36 &= ~(unsigned int)sub_409B6D();
          if ( (v36 & ~stat_buf.st_mode) != 0 || (stat_buf.st_mode & 0x1C0) != 448 )
          {
            v41->st_mode = v36 | stat_buf.st_mode;
            LOBYTE(v41[1].st_dev) = 1;
          }
        }
        if ( (stat_buf.st_mode & 0x1C0) != 448 && chmod((const char *)src, stat_buf.st_mode | 0x1C0) )
        {
          v21 = sub_40E491(src);
          v22 = gettext("setting permissions for %s");
          v23 = __errno_location();
          error(0, *v23, v22, v21);
          return 0LL;
        }
      }
      else
      {
        if ( (stat_buf.st_mode & 0xF000) != 0x4000 )
        {
          v24 = sub_40E491(src);
          v25 = gettext("%s exists but is not a directory");
          error(0, 0, v25, v24);
          return 0LL;
        }
        *v30 = 0;
      }
      v26 = i++;
      *v26 = 47;
      while ( *i == 47 )
        ++i;
    }
  }
  else
  {
    if ( (stat_buf.st_mode & 0xF000) != 0x4000 )
    {
      v27 = sub_40E491(filename);
      v28 = gettext("%s exists but is not a directory");
      error(0, 0, v28, v27);
      return 0LL;
    }
    *v30 = 0;
  }
  return 1LL;
}
