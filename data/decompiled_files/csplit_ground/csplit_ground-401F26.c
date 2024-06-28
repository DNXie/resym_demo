#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401F26(_QWORD *a1)
{
  void *v2; // rax
  void *s; // [rsp+18h] [rbp-28h]
  size_t n; // [rsp+20h] [rbp-20h]
  __int64 v5; // [rsp+28h] [rbp-18h]
  char *v6; // [rsp+30h] [rbp-10h]

  if ( !a1[1] )
    return 0LL;
  v5 = 0LL;
  s = (void *)a1[5];
  n = a1[1];
  while ( 1 )
  {
    v6 = (char *)memchr(s, 10, n);
    if ( !v6 )
      break;
    sub_401E2E((__int64)a1, (__int64)s, v6 - (_BYTE *)s + 1);
    n -= v6 - (_BYTE *)s + 1;
    s = v6 + 1;
    ++v5;
  }
  if ( n )
  {
    if ( byte_60B348 )
    {
      sub_401E2E((__int64)a1, (__int64)s, n);
      ++v5;
    }
    else
    {
      v2 = (void *)sub_406B60(s, n);
      sub_401D0E(v2, n);
    }
  }
  a1[4] = v5;
  a1[2] = qword_60B338 + 1;
  a1[3] = a1[2];
  qword_60B338 += v5;
  return v5;
}
