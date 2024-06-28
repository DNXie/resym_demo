#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int8 *__fastcall sub_401AA7(_QWORD *a1)
{
  __int64 v1; // rdx
  unsigned __int8 *result; // rax
  const unsigned __int16 *v3; // rbx
  const unsigned __int16 *v4; // rbx
  const unsigned __int16 *v5; // rbx
  unsigned __int8 *s; // [rsp+10h] [rbp-30h]
  unsigned __int8 *i; // [rsp+18h] [rbp-28h]
  unsigned __int8 *v8; // [rsp+20h] [rbp-20h]
  char *v9; // [rsp+28h] [rbp-18h]

  s = (unsigned __int8 *)a1[2];
  v1 = a1[1] - 1LL;
  v8 = &s[v1];
  result = s;
  if ( s != &s[v1] )
  {
    if ( c >= 0 && c != 10 )
    {
      while ( 1 )
      {
        v9 = (char *)memchr(s, c, v8 - s);
        if ( !v9 )
          break;
        sub_401A03(a1, (__int64)s, v9 - (char *)s);
        s = (unsigned __int8 *)(v9 + 1);
      }
      return (unsigned __int8 *)sub_401A03(a1, (__int64)s, v8 - s);
    }
    if ( c >= 0 )
      return (unsigned __int8 *)sub_401A03(a1, (__int64)s, v8 - s);
    while ( 1 )
    {
      v3 = *__ctype_b_loc();
      if ( (v3[(unsigned __int8)sub_4017CD(*s)] & 1) == 0 )
        break;
      result = ++s;
      if ( s == v8 )
        return result;
    }
    while ( 1 )
    {
      for ( i = s + 1; i != v8; ++i )
      {
        v4 = *__ctype_b_loc();
        if ( (v4[(unsigned __int8)sub_4017CD(*i)] & 1) != 0 )
          break;
      }
      sub_401A03(a1, (__int64)s, i - s);
      result = i;
      if ( i == v8 )
        break;
      for ( s = i + 1; s != v8; ++s )
      {
        v5 = *__ctype_b_loc();
        if ( (v5[(unsigned __int8)sub_4017CD(*s)] & 1) == 0 )
          break;
      }
      if ( s == v8 )
        return (unsigned __int8 *)sub_401A03(a1, (__int64)s, v8 - s);
    }
  }
  return result;
}
