#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_402F3C(unsigned __int64 a1, char *a2, unsigned __int64 a3)
{
  const char *v3; // rbx
  int *v4; // rax
  unsigned __int64 result; // rax
  char v7; // [rsp+2Fh] [rbp-41h]
  void *s; // [rsp+30h] [rbp-40h]
  char *sa; // [rsp+30h] [rbp-40h]
  __int64 v10; // [rsp+38h] [rbp-38h]
  __int64 v11; // [rsp+40h] [rbp-30h]
  unsigned __int64 v12; // [rsp+48h] [rbp-28h]
  char *v13; // [rsp+50h] [rbp-20h]

  v7 = 1;
  v11 = 0LL;
  do
  {
    v12 = sub_4053C5(0LL, a2, a3);
    if ( v12 < a3 && *__errno_location() )
    {
      v3 = s1;
      v4 = __errno_location();
      error(1, *v4, "%s", v3);
    }
    v10 = (__int64)a2;
    s = a2;
    v13 = &a2[v12];
    a2[v12] = 10;
    while ( 1 )
    {
      sa = (char *)memchr(s, 10, v13 - (_BYTE *)s + 1);
      if ( sa == v13 )
        break;
      s = sa + 1;
      if ( ++v11 >= a1 )
      {
        sub_402C91(v7, v10, (__int64)s - v10);
        v10 = (__int64)s;
        v7 = 1;
        v11 = 0LL;
      }
    }
    if ( v13 != (char *)v10 )
    {
      sub_402C91(v7, v10, (__int64)&v13[-v10]);
      v7 = 0;
    }
    result = v12;
  }
  while ( v12 == a3 );
  return result;
}
