#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_401E58()
{
  size_t v1; // [rsp+8h] [rbp-8h]

  v1 = n - 1;
  if ( n - 1 <= 1 || memcmp(s1, src, 2uLL) )
    return 3LL;
  if ( v1 == qword_6096F0 && !memcmp(s1, dest, qword_6096F0) )
    return 0LL;
  if ( v1 == qword_609700 && !memcmp(s1, qword_6096F8, qword_609700) )
    return 1LL;
  if ( v1 == qword_609710 && !memcmp(s1, qword_609708, qword_609710) )
    return 2LL;
  return 3LL;
}
