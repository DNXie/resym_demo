#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_40A232(const char *a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  char *i; // rax
  int v5; // [rsp+14h] [rbp-3Ch]
  size_t size; // [rsp+18h] [rbp-38h]
  char *buf; // [rsp+38h] [rbp-18h]
  ssize_t v8; // [rsp+48h] [rbp-8h]

  if ( a2 >= 0x401 )
    v2 = 1025LL;
  else
    v2 = a2 + 1;
  size = v2;
LABEL_5:
  for ( i = (char *)malloc(size); ; i = (char *)malloc(0x7FFFFFFFFFFFFFFFuLL) )
  {
    buf = i;
    if ( !i )
      return 0LL;
    v8 = readlink(a1, i, size);
    if ( v8 < 0 && *__errno_location() != 34 )
    {
      v5 = *__errno_location();
      free(buf);
      *__errno_location() = v5;
      return 0LL;
    }
    if ( v8 < size )
    {
      buf[v8] = 0;
      return buf;
    }
    free(buf);
    if ( size <= 0x3FFFFFFFFFFFFFFFLL )
    {
      size *= 2LL;
      goto LABEL_5;
    }
    if ( size > 0x7FFFFFFFFFFFFFFELL )
      break;
    size = 0x7FFFFFFFFFFFFFFFLL;
  }
  *__errno_location() = 12;
  return 0LL;
}
