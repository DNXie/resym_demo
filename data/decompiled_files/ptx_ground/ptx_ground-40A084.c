#include "/share/binary_recovery/clang-parser/defs.hh"
void *sub_40A084()
{
  _BOOL4 v0; // eax
  size_t v1; // rax
  _BOOL4 v3; // [rsp+4h] [rbp-FCh]
  int fd; // [rsp+8h] [rbp-F8h]
  int c; // [rsp+Ch] [rbp-F4h]
  int ca; // [rsp+Ch] [rbp-F4h]
  void *v7; // [rsp+10h] [rbp-F0h]
  const char *s; // [rsp+18h] [rbp-E8h]
  void *ptr; // [rsp+20h] [rbp-E0h]
  __int64 v10; // [rsp+28h] [rbp-D8h]
  size_t n; // [rsp+38h] [rbp-C8h]
  size_t v12; // [rsp+40h] [rbp-C0h]
  char *dest; // [rsp+48h] [rbp-B8h]
  FILE *stream; // [rsp+50h] [rbp-B0h]
  size_t v15; // [rsp+58h] [rbp-A8h]
  size_t v16; // [rsp+60h] [rbp-A0h]
  void *v17; // [rsp+68h] [rbp-98h]
  char src[64]; // [rsp+70h] [rbp-90h] BYREF
  char v19[56]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v20; // [rsp+E8h] [rbp-18h]

  v20 = __readfsqword(0x28u);
  v7 = (void *)qword_610C60;
  if ( !qword_610C60 )
  {
    s = getenv("CHARSETALIASDIR");
    if ( !s || !*s )
      s = "/root/Product/coreutils/exe/lib";
    n = strlen(s);
    v12 = strlen("charset.alias");
    v0 = n && s[n - 1] != 47;
    v3 = v0;
    dest = (char *)malloc(n + v0 + v12 + 1);
    if ( dest )
    {
      memcpy(dest, s, n);
      if ( v3 )
        dest[n] = 47;
      memcpy(&dest[n + v3], "charset.alias", v12 + 1);
    }
    if ( dest )
    {
      fd = open(dest, 0x20000);
      if ( fd >= 0 )
      {
        stream = fdopen(fd, "r");
        if ( stream )
        {
          ptr = 0LL;
          v10 = 0LL;
          while ( 1 )
          {
            c = getc_unlocked(stream);
            if ( c == -1 )
              break;
            if ( c != 10 && c != 32 && c != 9 )
            {
              if ( c == 35 )
              {
                do
                  ca = getc_unlocked(stream);
                while ( ca != -1 && ca != 10 );
                if ( ca == -1 )
                  break;
              }
              else
              {
                ungetc(c, stream);
                if ( fscanf(stream, "%50s %50s", src, v19) <= 1 )
                  break;
                v15 = strlen(src);
                v16 = strlen(v19);
                v17 = ptr;
                if ( v10 )
                {
                  v1 = v16 + v15 + v10;
                  v10 = v1 + 2;
                  ptr = realloc(ptr, v1 + 3);
                }
                else
                {
                  v10 = v15 + v16 + 2;
                  ptr = malloc(v15 + v16 + 3);
                }
                if ( !ptr )
                {
                  v10 = 0LL;
                  free(v17);
                  break;
                }
                strcpy((char *)ptr + v10 - v16 - v15 - 2, src);
                strcpy((char *)ptr + v10 - v16 - 1, v19);
              }
            }
          }
          sub_409D97(stream);
          if ( v10 )
          {
            *((_BYTE *)ptr + v10) = 0;
            v7 = ptr;
          }
          else
          {
            v7 = &unk_40E010;
          }
        }
        else
        {
          close(fd);
          v7 = &unk_40E010;
        }
      }
      else
      {
        v7 = &unk_40E010;
      }
      free(dest);
    }
    else
    {
      v7 = &unk_40E010;
    }
    qword_610C60 = (__int64)v7;
  }
  return v7;
}
