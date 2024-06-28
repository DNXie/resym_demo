#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_4087AA(char *a1, void *a2)
{
  void *result; // rax
  char *v3; // rax
  int v4; // [rsp+14h] [rbp-8Ch]
  char *inbuf; // [rsp+18h] [rbp-88h] BYREF
  size_t inbytesleft; // [rsp+20h] [rbp-80h] BYREF
  char *outbuf; // [rsp+28h] [rbp-78h] BYREF
  size_t outbytesleft; // [rsp+30h] [rbp-70h] BYREF
  void *ptr; // [rsp+38h] [rbp-68h]
  size_t size; // [rsp+40h] [rbp-60h]
  __int64 v11; // [rsp+48h] [rbp-58h]
  size_t v12; // [rsp+50h] [rbp-50h]
  __int64 v13; // [rsp+58h] [rbp-48h]
  size_t v14; // [rsp+60h] [rbp-40h]
  char *v15; // [rsp+68h] [rbp-38h]
  size_t v16; // [rsp+70h] [rbp-30h]
  __int64 v17; // [rsp+78h] [rbp-28h]
  size_t v18; // [rsp+80h] [rbp-20h]
  char *v19; // [rsp+88h] [rbp-18h]
  size_t v20; // [rsp+90h] [rbp-10h]
  void *v21; // [rsp+98h] [rbp-8h]

  inbuf = a1;
  inbytesleft = strlen(a1);
  size = inbytesleft;
  v11 = 0xFFFFFFFFLL;
  if ( inbytesleft <= 0xFFFFFFF )
    size *= 16LL;
  ptr = malloc(++size);
  if ( ptr )
  {
    iconv(a2, 0LL, 0LL, 0LL, 0LL);
    outbuf = (char *)ptr;
    for ( outbytesleft = size - 1; ; outbytesleft = v14 - v13 - 1 )
    {
      v12 = iconv(a2, &inbuf, &inbytesleft, &outbuf, &outbytesleft);
      if ( v12 != -1LL || *__errno_location() == 22 )
        break;
      if ( *__errno_location() != 7 )
        goto LABEL_23;
      v13 = outbuf - (_BYTE *)ptr;
      v14 = 2 * size;
      if ( 2 * size <= size || (v15 = (char *)realloc(ptr, v14)) == 0LL )
      {
LABEL_18:
        *__errno_location() = 12;
LABEL_23:
        v4 = *__errno_location();
        free(ptr);
        *__errno_location() = v4;
        return 0LL;
      }
      ptr = v15;
      size = v14;
      outbuf = &v15[v13];
    }
    while ( 1 )
    {
      v16 = iconv(a2, 0LL, 0LL, &outbuf, &outbytesleft);
      if ( v16 != -1LL )
        break;
      if ( *__errno_location() != 7 )
        goto LABEL_23;
      v17 = outbuf - (_BYTE *)ptr;
      v18 = 2 * size;
      if ( 2 * size <= size )
        goto LABEL_18;
      v19 = (char *)realloc(ptr, v18);
      if ( !v19 )
        goto LABEL_18;
      ptr = v19;
      size = v18;
      outbuf = &v19[v17];
      outbytesleft = v18 - v17 - 1;
    }
    v3 = outbuf++;
    *v3 = 0;
    v20 = outbuf - (_BYTE *)ptr;
    if ( outbuf - (_BYTE *)ptr < size )
    {
      v21 = realloc(ptr, v20);
      if ( v21 )
        ptr = v21;
    }
    result = ptr;
  }
  else
  {
    *__errno_location() = 12;
    result = 0LL;
  }
  return result;
}
