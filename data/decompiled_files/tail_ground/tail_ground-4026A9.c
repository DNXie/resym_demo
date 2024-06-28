#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4026A9(__int64 a1, unsigned int a2, size_t a3, _QWORD *a4)
{
  __int64 v4; // rax
  __int64 v5; // r12
  char *v6; // rbx
  int *v7; // rax
  unsigned __int8 v11; // [rsp+2Fh] [rbp-61h]
  size_t *ptr; // [rsp+30h] [rbp-60h]
  size_t *v13; // [rsp+38h] [rbp-58h]
  size_t *src; // [rsp+40h] [rbp-50h]
  size_t *srca; // [rsp+40h] [rbp-50h]
  size_t *srcb; // [rsp+40h] [rbp-50h]
  size_t *srcc; // [rsp+40h] [rbp-50h]
  unsigned __int64 v18; // [rsp+48h] [rbp-48h]
  size_t *s; // [rsp+50h] [rbp-40h]
  char *sa; // [rsp+50h] [rbp-40h]
  size_t *v21; // [rsp+58h] [rbp-38h]
  char *v22; // [rsp+58h] [rbp-38h]
  __int64 i; // [rsp+60h] [rbp-30h]
  __int64 v24; // [rsp+68h] [rbp-28h]
  char *v25; // [rsp+70h] [rbp-20h]
  char *v26; // [rsp+78h] [rbp-18h]

  v18 = 0LL;
  v11 = 1;
  v13 = (size_t *)sub_40B191(8216LL);
  ptr = v13;
  v13[1025] = 0LL;
  v13[1024] = v13[1025];
  v13[1026] = 0LL;
  src = (size_t *)sub_40B191(8216LL);
  while ( 1 )
  {
    v4 = sub_40A739(a2, src, 0x2000LL);
    v24 = v4;
    if ( !v4 || v4 == -1 )
      break;
    src[1024] = v4;
    *a4 += v4;
    src[1025] = 0LL;
    src[1026] = 0LL;
    v25 = (char *)src + v4;
    s = src;
    while ( 1 )
    {
      sa = (char *)memchr(s, 10, v25 - (char *)s);
      if ( !sa )
        break;
      s = (size_t *)(sa + 1);
      ++src[1025];
    }
    v18 += src[1025];
    if ( src[1024] + v13[1024] > 0x1FFF )
    {
      v13[1026] = (size_t)src;
      v13 = (size_t *)v13[1026];
      if ( v18 - ptr[1025] <= a3 )
      {
        src = (size_t *)sub_40B191(8216LL);
      }
      else
      {
        src = ptr;
        v18 -= ptr[1025];
        ptr = (size_t *)ptr[1026];
      }
    }
    else
    {
      memcpy((char *)v13 + v13[1024], src, src[1024]);
      v13[1024] += src[1024];
      v13[1025] += src[1025];
    }
  }
  free(src);
  if ( v24 == -1 )
  {
    v5 = sub_408FA1(a1);
    v6 = gettext("error reading %s");
    v7 = __errno_location();
    error(0, *v7, v6, v5);
    v11 = 0;
  }
  else if ( v13[1024] && a3 )
  {
    if ( *((_BYTE *)v13 + v13[1024] - 1) != 10 )
    {
      ++v13[1025];
      ++v18;
    }
    for ( srca = ptr; v18 - srca[1025] > a3; srca = (size_t *)srca[1026] )
      v18 -= srca[1025];
    v21 = srca;
    v26 = (char *)srca + srca[1024];
    if ( v18 > a3 )
    {
      for ( i = v18 - a3; i; --i )
      {
        v22 = (char *)memchr(v21, 10, v26 - (char *)v21);
        if ( !v22 )
          __assert_fail("beg", "../../src/src/tail.c", 0x2A7u, "pipe_lines");
        v21 = (size_t *)(v22 + 1);
      }
    }
    sub_401E1F(v21, v26 - (char *)v21);
    for ( srcb = (size_t *)srca[1026]; srcb; srcb = (size_t *)srcb[1026] )
      sub_401E1F(srcb, srcb[1024]);
  }
  while ( ptr )
  {
    srcc = (size_t *)ptr[1026];
    free(ptr);
    ptr = srcc;
  }
  return v11;
}
