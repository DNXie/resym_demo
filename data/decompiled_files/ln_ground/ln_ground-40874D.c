#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_40874D(unsigned int a1, __int64 a2, char *a3, __int64 a4, void *(**a5)(size_t size), __int64 (__fastcall *a6)(_QWORD, __int64, char *, unsigned __int64))
{
  __int64 v7; // rax
  void *(**v9)(size_t); // [rsp+8h] [rbp-488h]
  __int64 v10; // [rsp+10h] [rbp-480h]
  int v12; // [rsp+34h] [rbp-45Ch]
  char *src; // [rsp+38h] [rbp-458h]
  unsigned __int64 v14; // [rsp+40h] [rbp-450h]
  __int64 v15; // [rsp+50h] [rbp-440h]
  size_t n; // [rsp+58h] [rbp-438h]
  void *dest; // [rsp+60h] [rbp-430h]
  __int64 v18; // [rsp+68h] [rbp-428h]
  char v19[1032]; // [rsp+70h] [rbp-420h] BYREF
  unsigned __int64 v20; // [rsp+478h] [rbp-18h]

  v10 = a4;
  v9 = a5;
  v20 = __readfsqword(0x28u);
  if ( !a5 )
    v9 = &off_40A6E0;
  if ( !a4 )
  {
    a3 = v19;
    v10 = 1024LL;
  }
  src = a3;
  v14 = v10;
  while ( 1 )
  {
    v15 = a6(a1, a2, src, v14);
    if ( v15 < 0 )
    {
      v12 = *__errno_location();
      if ( v12 != 34 )
      {
        if ( src != a3 )
        {
          v9[2]((size_t)src);
          *__errno_location() = v12;
        }
        return 0LL;
      }
    }
    if ( v15 < v14 )
      break;
    if ( src != a3 )
      v9[2]((size_t)src);
    if ( v14 > 0x4000000000000000LL )
    {
      if ( v14 >= 0x8000000000000000LL )
      {
        *__errno_location() = 36;
        return 0LL;
      }
      v14 = 0x8000000000000000LL;
      v7 = (__int64)(*v9)(0x8000000000000000LL);
    }
    else
    {
      v14 *= 2LL;
      v7 = (__int64)(*v9)(v14);
    }
    src = (char *)v7;
    if ( !v7 )
      goto LABEL_29;
  }
  n = v15 + 1;
  src[v15] = 0;
  if ( src != v19 )
  {
    if ( n < v14 && src != a3 )
    {
      if ( v9[1] )
      {
        v18 = ((__int64 (__fastcall *)(char *, size_t))v9[1])(src, n);
        if ( v18 )
          src = (char *)v18;
      }
    }
    return src;
  }
  dest = (*v9)(n);
  v14 = v15 + 1;
  if ( dest )
  {
    memcpy(dest, src, n);
    return (char *)dest;
  }
LABEL_29:
  if ( v9[3] )
    v9[3](v14);
  *__errno_location() = 12;
  return 0LL;
}
