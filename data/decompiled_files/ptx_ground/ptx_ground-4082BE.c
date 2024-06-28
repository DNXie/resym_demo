#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_4082BE(FILE *a1, unsigned __int64 *a2)
{
  int v2; // eax
  int v4; // [rsp+14h] [rbp-DCh]
  char *ptr; // [rsp+18h] [rbp-D8h]
  unsigned __int64 size; // [rsp+20h] [rbp-D0h]
  unsigned __int64 v7; // [rsp+28h] [rbp-C8h]
  __off_t v8; // [rsp+30h] [rbp-C0h]
  size_t n; // [rsp+40h] [rbp-B0h]
  size_t v10; // [rsp+48h] [rbp-A8h]
  char *v11; // [rsp+50h] [rbp-A0h]
  char *v12; // [rsp+58h] [rbp-98h]
  struct stat stat_buf; // [rsp+60h] [rbp-90h] BYREF

  size = 0x2000LL;
  v2 = fileno(a1);
  if ( (int)sub_40CA10(v2, &stat_buf) >= 0 && (stat_buf.st_mode & 0xF000) == 0x8000 )
  {
    v8 = ftello(a1);
    if ( v8 >= 0 && stat_buf.st_size > v8 )
    {
      if ( stat_buf.st_size - v8 == -1 )
      {
        *__errno_location() = 12;
        return 0LL;
      }
      size = stat_buf.st_size - v8 + 1;
    }
  }
  ptr = (char *)malloc(size);
  if ( !ptr )
    return 0LL;
  v7 = 0LL;
  while ( 1 )
  {
    n = size - v7;
    v10 = fread(&ptr[v7], 1uLL, size - v7, a1);
    v7 += v10;
    if ( v10 != n )
      break;
    if ( size == -1LL )
    {
      v4 = 12;
      goto LABEL_25;
    }
    if ( ~(size >> 1) <= size )
      size = -1LL;
    else
      size += size >> 1;
    v12 = (char *)realloc(ptr, size);
    if ( !v12 )
    {
      v4 = *__errno_location();
      goto LABEL_25;
    }
    ptr = v12;
  }
  v4 = *__errno_location();
  if ( ferror(a1) )
  {
LABEL_25:
    free(ptr);
    *__errno_location() = v4;
    return 0LL;
  }
  if ( size - 1 > v7 )
  {
    v11 = (char *)realloc(ptr, v7 + 1);
    if ( v11 )
      ptr = v11;
  }
  ptr[v7] = 0;
  *a2 = v7;
  return ptr;
}
