#include "/share/binary_recovery/clang-parser/defs.hh"
FILE *__fastcall sub_4077FC(const char *a1, const char *a2)
{
  int v3; // [rsp+18h] [rbp-18h]
  int fd; // [rsp+1Ch] [rbp-14h]
  int v5; // [rsp+20h] [rbp-10h]
  int v6; // [rsp+24h] [rbp-Ch]
  FILE *stream; // [rsp+28h] [rbp-8h]

  stream = fopen(a1, a2);
  if ( !stream )
    return stream;
  v3 = fileno(stream);
  if ( v3 < 0 || v3 > 2 )
    return stream;
  fd = sub_409182((unsigned int)v3);
  if ( fd < 0 )
  {
    v5 = *__errno_location();
    sub_407586(stream);
    *__errno_location() = v5;
    return 0LL;
  }
  if ( !sub_407586(stream) )
  {
    stream = fdopen(fd, a2);
    if ( stream )
      return stream;
  }
  v6 = *__errno_location();
  close(fd);
  *__errno_location() = v6;
  return 0LL;
}
