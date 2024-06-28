#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_408068(char *a1, size_t a2, void *a3, void **a4, size_t *a5)
{
  int v9; // [rsp+34h] [rbp-107Ch]
  char *inbuf; // [rsp+38h] [rbp-1078h] BYREF
  size_t inbytesleft; // [rsp+40h] [rbp-1070h] BYREF
  char *outbuf; // [rsp+48h] [rbp-1068h] BYREF
  size_t outbytesleft; // [rsp+50h] [rbp-1060h] BYREF
  void *ptr; // [rsp+58h] [rbp-1058h]
  size_t v15; // [rsp+60h] [rbp-1050h]
  size_t v16; // [rsp+68h] [rbp-1048h]
  size_t v17; // [rsp+70h] [rbp-1040h]
  size_t size; // [rsp+78h] [rbp-1038h]
  size_t v19; // [rsp+80h] [rbp-1030h]
  size_t v20; // [rsp+88h] [rbp-1028h]
  char v21[4104]; // [rsp+90h] [rbp-1020h] BYREF
  unsigned __int64 v22; // [rsp+1098h] [rbp-18h]

  v22 = __readfsqword(0x28u);
  iconv(a3, 0LL, 0LL, 0LL, 0LL);
  v15 = 0LL;
  inbuf = a1;
  inbytesleft = a2;
  while ( inbytesleft )
  {
    outbuf = v21;
    outbytesleft = 4096LL;
    v16 = iconv(a3, &inbuf, &inbytesleft, &outbuf, &outbytesleft);
    if ( v16 == -1LL && *__errno_location() != 7 )
    {
      if ( *__errno_location() != 22 )
        return 0xFFFFFFFFLL;
      break;
    }
    v15 += outbuf - v21;
  }
  outbuf = v21;
  outbytesleft = 4096LL;
  v17 = iconv(a3, 0LL, 0LL, &outbuf, &outbytesleft);
  if ( v17 == -1LL )
    return 0xFFFFFFFFLL;
  v15 += outbuf - v21;
  size = v15;
  if ( !v15 )
  {
    *a5 = 0LL;
    return 0LL;
  }
  if ( *a4 && *a5 >= size )
  {
    ptr = *a4;
  }
  else
  {
    ptr = malloc(size);
    if ( !ptr )
    {
      *__errno_location() = 12;
      return 0xFFFFFFFFLL;
    }
  }
  iconv(a3, 0LL, 0LL, 0LL, 0LL);
  inbuf = a1;
  inbytesleft = a2;
  outbuf = (char *)ptr;
  outbytesleft = size;
  while ( inbytesleft )
  {
    v19 = iconv(a3, &inbuf, &inbytesleft, &outbuf, &outbytesleft);
    if ( v19 == -1LL )
    {
      if ( *__errno_location() != 22 )
        goto LABEL_26;
      break;
    }
  }
  v20 = iconv(a3, 0LL, 0LL, &outbuf, &outbytesleft);
  if ( v20 != -1LL )
  {
    if ( outbytesleft )
      abort();
    *a4 = ptr;
    *a5 = size;
    return 0LL;
  }
LABEL_26:
  if ( *a4 != ptr )
  {
    v9 = *__errno_location();
    free(ptr);
    *__errno_location() = v9;
  }
  return 0xFFFFFFFFLL;
}
