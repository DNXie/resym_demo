#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40319B(void **a1, size_t *a2, size_t a3, size_t a4, unsigned int a5, unsigned int a6, FILE *stream)
{
  size_t v7; // rax
  __int64 result; // rax
  size_t v9; // rax
  char v14; // [rsp+3Bh] [rbp-65h]
  int v15; // [rsp+3Ch] [rbp-64h]
  size_t v16; // [rsp+40h] [rbp-60h] BYREF
  size_t v17; // [rsp+48h] [rbp-58h]
  void *dest; // [rsp+50h] [rbp-50h]
  __int64 v19; // [rsp+58h] [rbp-48h]
  void *ptr; // [rsp+60h] [rbp-40h]
  size_t size; // [rsp+68h] [rbp-38h]
  size_t v22; // [rsp+70h] [rbp-30h]
  size_t n; // [rsp+78h] [rbp-28h]
  void *src; // [rsp+80h] [rbp-20h]
  __int64 v25; // [rsp+88h] [rbp-18h]
  size_t v26; // [rsp+90h] [rbp-10h]
  char *v27; // [rsp+98h] [rbp-8h]

  v19 = -1LL;
  ptr = *a1;
  size = *a2;
  if ( !ptr )
  {
    v7 = 64LL;
    if ( a4 <= 0x40 )
      v7 = a4;
    size = v7;
    ptr = malloc(v7);
    if ( !ptr )
      return -1LL;
  }
  if ( size < a3 )
    goto LABEL_52;
  v17 = size - a3;
  dest = (char *)ptr + a3;
  if ( size == a3 && a4 <= size )
    goto LABEL_52;
  if ( a5 == -1 )
  {
    a5 = a6;
  }
  else if ( a6 == -1 )
  {
    a6 = a5;
  }
  v14 = 0;
  while ( 1 )
  {
    src = (void *)sub_407682(stream, &v16);
    if ( !src )
      break;
    if ( a5 != -1 )
    {
      v25 = sub_404E29(src, a5, a6, v16);
      if ( v25 )
      {
        v16 = v25 - (_QWORD)src + 1;
        v14 = 1;
      }
    }
LABEL_26:
    if ( v16 + 1 > v17 && size < a4 )
    {
      if ( size > 0x3F )
        v9 = 2 * size;
      else
        v9 = size + 64;
      v22 = v9;
      if ( v9 + (_BYTE *)ptr - (_BYTE *)dest < v16 + 1 )
        v22 = (_BYTE *)dest - (_BYTE *)ptr + v16 + 1;
      if ( size >= v22 || v22 > a4 )
        v22 = a4;
      if ( (__int64)(v22 - a3) < 0 )
      {
        v26 = a3 + 0x8000000000000000LL;
        if ( size == a3 + 0x8000000000000000LL )
          goto LABEL_52;
        v22 = v26;
      }
      v17 = (_BYTE *)ptr - (_BYTE *)dest + v22;
      v27 = (char *)realloc(ptr, v22);
      if ( !v27 )
        goto LABEL_52;
      ptr = v27;
      size = v22;
      dest = &v27[v22 - v17];
    }
    if ( v17 > 1 )
    {
      n = v17 - 1;
      if ( v16 < v17 - 1 )
        n = v16;
      if ( src )
        memcpy(dest, src, n);
      else
        *(_BYTE *)dest = v15;
      dest = (char *)dest + n;
      v17 -= n;
    }
    if ( src && (unsigned int)sub_40770F(stream, v16) )
      goto LABEL_52;
    if ( v14 == 1 )
      goto LABEL_51;
  }
  v15 = getc_unlocked(stream);
  if ( v15 != -1 )
  {
    if ( v15 == a5 || v15 == a6 )
      v14 = 1;
    v16 = 1LL;
    goto LABEL_26;
  }
  if ( dest == ptr )
    goto LABEL_52;
LABEL_51:
  *(_BYTE *)dest = 0;
  v19 = (_BYTE *)dest - ((_BYTE *)ptr + a3);
LABEL_52:
  *a1 = ptr;
  *a2 = size;
  if ( v19 )
    result = v19;
  else
    result = -1LL;
  return result;
}
