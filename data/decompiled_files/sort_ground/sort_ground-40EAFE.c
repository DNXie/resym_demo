#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40EAFE(const char *a1, const char *a2)
{
  __int64 result; // rax
  _BYTE *v3; // rax
  _BYTE *v4; // rax
  __int64 s2; // [rsp+0h] [rbp-50h]
  __int64 s1; // [rsp+8h] [rbp-48h]
  unsigned int v7; // [rsp+18h] [rbp-38h]
  unsigned int v8; // [rsp+1Ch] [rbp-34h]
  _BYTE *v9; // [rsp+20h] [rbp-30h] BYREF
  _BYTE *v10; // [rsp+28h] [rbp-28h] BYREF
  size_t n; // [rsp+30h] [rbp-20h]
  _BYTE *v12; // [rsp+38h] [rbp-18h]
  _BYTE *v13; // [rsp+40h] [rbp-10h]
  _BYTE *v14; // [rsp+48h] [rbp-8h]

  s1 = (__int64)a1;
  s2 = (__int64)a2;
  v7 = strcmp(a1, a2);
  if ( !v7 )
    return 0LL;
  if ( !*a1 )
    return 0xFFFFFFFFLL;
  if ( !*a2 )
    return 1LL;
  if ( !strcmp(".", a1) )
    return 0xFFFFFFFFLL;
  if ( !strcmp(".", a2) )
    return 1LL;
  if ( !strcmp("..", a1) )
    return 0xFFFFFFFFLL;
  if ( !strcmp("..", a2) )
    return 1LL;
  if ( *a1 == 46 && *a2 != 46 )
    return 0xFFFFFFFFLL;
  if ( *a1 != 46 && *a2 == 46 )
    return 1LL;
  if ( *a1 == 46 && *a2 == 46 )
  {
    s1 = (__int64)(a1 + 1);
    s2 = (__int64)(a2 + 1);
  }
  v9 = (_BYTE *)s1;
  v10 = (_BYTE *)s2;
  v13 = sub_40E7B1(&v9);
  v14 = sub_40E7B1(&v10);
  if ( v13 )
    v3 = v13;
  else
    v3 = v9;
  n = (size_t)&v3[-s1];
  if ( v14 )
    v4 = v14;
  else
    v4 = v10;
  v12 = &v4[-s2];
  if ( (v13 || v14) && (_BYTE *)n == v12 && !strncmp((const char *)s1, (const char *)s2, n) )
  {
    n = (size_t)&v9[-s1];
    v12 = &v10[-s2];
  }
  v8 = sub_40E8DC(s1, n, s2, (unsigned __int64)v12);
  if ( v8 )
    result = v8;
  else
    result = v7;
  return result;
}
