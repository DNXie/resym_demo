#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402B59(__int64 a1, unsigned int a2, size_t a3, _QWORD *a4)
{
  __int64 v4; // rax
  __int64 v5; // r12
  char *v6; // rbx
  int *v7; // rax
  unsigned __int8 v11; // [rsp+2Fh] [rbp-41h]
  size_t *ptr; // [rsp+30h] [rbp-40h]
  __int64 v13; // [rsp+38h] [rbp-38h]
  size_t *src; // [rsp+40h] [rbp-30h]
  size_t *srca; // [rsp+40h] [rbp-30h]
  size_t *srcb; // [rsp+40h] [rbp-30h]
  size_t *srcc; // [rsp+40h] [rbp-30h]
  __int64 v18; // [rsp+48h] [rbp-28h]
  unsigned __int64 v19; // [rsp+50h] [rbp-20h]
  __int64 v20; // [rsp+58h] [rbp-18h]

  v19 = 0LL;
  v11 = 1;
  v13 = sub_40B191(8208LL);
  ptr = (size_t *)v13;
  *(_QWORD *)(v13 + 0x2000) = 0LL;
  *(_QWORD *)(v13 + 8200) = 0LL;
  src = (size_t *)sub_40B191(8208LL);
  while ( 1 )
  {
    v4 = sub_40A739(a2, src, 0x2000LL);
    v20 = v4;
    if ( !v4 || v4 == -1 )
      break;
    *a4 += v4;
    src[1024] = v4;
    src[1025] = 0LL;
    v19 += src[1024];
    if ( src[1024] + *(_QWORD *)(v13 + 0x2000) > 0x1FFF )
    {
      *(_QWORD *)(v13 + 8200) = src;
      v13 = *(_QWORD *)(v13 + 8200);
      if ( v19 - ptr[1024] <= a3 )
      {
        src = (size_t *)sub_40B191(8208LL);
      }
      else
      {
        src = ptr;
        v19 -= ptr[1024];
        ptr = (size_t *)ptr[1025];
      }
    }
    else
    {
      memcpy((void *)(*(_QWORD *)(v13 + 0x2000) + v13), src, src[1024]);
      *(_QWORD *)(v13 + 0x2000) += src[1024];
    }
  }
  free(src);
  if ( v20 == -1 )
  {
    v5 = sub_408FA1(a1);
    v6 = gettext("error reading %s");
    v7 = __errno_location();
    error(0, *v7, v6, v5);
    v11 = 0;
  }
  else
  {
    for ( srca = ptr; v19 - srca[1024] > a3; srca = (size_t *)srca[1025] )
      v19 -= srca[1024];
    if ( v19 <= a3 )
      v18 = 0LL;
    else
      v18 = v19 - a3;
    sub_401E1F((char *)srca + v18, srca[1024] - v18);
    for ( srcb = (size_t *)srca[1025]; srcb; srcb = (size_t *)srcb[1025] )
      sub_401E1F(srcb, srcb[1024]);
  }
  while ( ptr )
  {
    srcc = (size_t *)ptr[1025];
    free(ptr);
    ptr = srcc;
  }
  return v11;
}
