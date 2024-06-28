#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402334(__int64 a1, unsigned int a2, size_t a3)
{
  size_t v3; // rax
  char *i; // rax
  __int64 v5; // r12
  char *v6; // rbx
  int *v7; // rax
  unsigned __int8 v10; // [rsp+2Fh] [rbp-61h]
  size_t *ptr; // [rsp+30h] [rbp-60h]
  size_t *v12; // [rsp+38h] [rbp-58h]
  size_t *src; // [rsp+40h] [rbp-50h]
  size_t *srca; // [rsp+40h] [rbp-50h]
  size_t *srcb; // [rsp+40h] [rbp-50h]
  size_t v16; // [rsp+48h] [rbp-48h]
  size_t v17; // [rsp+58h] [rbp-38h]
  char *j; // [rsp+60h] [rbp-30h]
  size_t v19; // [rsp+68h] [rbp-28h]
  char *v20; // [rsp+70h] [rbp-20h]
  char *v21; // [rsp+78h] [rbp-18h]

  v16 = 0LL;
  v10 = 1;
  v12 = (size_t *)sub_405F6F(8216LL);
  ptr = v12;
  v12[1025] = 0LL;
  v12[1024] = v12[1025];
  v12[1026] = 0LL;
  src = (size_t *)sub_405F6F(8216LL);
  while ( 1 )
  {
    v3 = sub_405564(a2, src, 0x2000LL);
    v19 = v3;
    if ( !v3 || v3 == -1LL )
      break;
    src[1024] = v3;
    src[1025] = 0LL;
    src[1026] = 0LL;
    v20 = (char *)src + v3;
    for ( i = (char *)memchr(src, 10, v3); i; i = (char *)memchr(i + 1, 10, v20 - (i + 1)) )
      ++src[1025];
    v16 += src[1025];
    if ( src[1024] + v12[1024] > 0x1FFF )
    {
      v12[1026] = (size_t)src;
      v12 = (size_t *)v12[1026];
      if ( v16 - ptr[1025] <= a3 )
      {
        src = (size_t *)sub_405F6F(8216LL);
      }
      else
      {
        fwrite_unlocked(ptr, 1uLL, ptr[1024], stdout);
        src = ptr;
        v16 -= ptr[1025];
        ptr = (size_t *)ptr[1026];
      }
    }
    else
    {
      memcpy((char *)v12 + v12[1024], src, src[1024]);
      v12[1024] += src[1024];
      v12[1025] += src[1025];
    }
  }
  free(src);
  if ( v19 == -1LL )
  {
    v5 = sub_403DCC(a1);
    v6 = gettext("error reading %s");
    v7 = __errno_location();
    error(0, *v7, v6, v5);
    v10 = 0;
  }
  else
  {
    if ( v12[1024] && *((_BYTE *)v12 + v12[1024] - 1) != 10 )
    {
      ++v12[1025];
      ++v16;
    }
    for ( srca = ptr; v16 - srca[1025] > a3; srca = (size_t *)srca[1026] )
    {
      fwrite_unlocked(srca, 1uLL, srca[1024], stdout);
      v16 -= srca[1025];
    }
    if ( a3 < v16 )
    {
      v17 = v16 - a3;
      v21 = (char *)srca + srca[1024];
      for ( j = (char *)srca; v17; ++j )
      {
        j = (char *)memchr(j, 10, v21 - j);
        if ( !j )
          break;
        ++srca[1025];
        --v17;
      }
      fwrite_unlocked(srca, 1uLL, j - (char *)srca, stdout);
    }
  }
  while ( ptr )
  {
    srcb = (size_t *)ptr[1026];
    free(ptr);
    ptr = srcb;
  }
  return v10;
}
