#include "/share/binary_recovery/clang-parser/defs.hh"
_BYTE *__fastcall sub_404E29(const void *a1, unsigned __int8 a2, unsigned __int8 a3, size_t a4)
{
  size_t n; // [rsp+8h] [rbp-58h]
  _BYTE *i; // [rsp+28h] [rbp-38h]
  _BYTE *v7; // [rsp+28h] [rbp-38h]
  _QWORD *v8; // [rsp+30h] [rbp-30h]
  __int64 v9; // [rsp+40h] [rbp-20h]
  __int64 v10; // [rsp+40h] [rbp-20h]
  __int64 v11; // [rsp+48h] [rbp-18h]
  __int64 v12; // [rsp+48h] [rbp-18h]

  n = a4;
  if ( a2 == a3 )
    return memchr(a1, a2, a4);
  for ( i = a1; n && ((unsigned __int8)i & 7) != 0; ++i )
  {
    if ( *i == a2 || *i == a3 )
      return i;
    --n;
  }
  v8 = i;
  v11 = (a3 << 8) | (unsigned int)a3;
  v9 = ((__int64)((a2 << 8) | (unsigned int)a2) << 16) | (a2 << 8) | (unsigned int)a2;
  v10 = (v9 << 32) | v9;
  v12 = (((v11 << 16) | v11) << 32) | (v11 << 16) | v11;
  while ( n > 7
       && ((((v12 ^ *v8) - 0x101010101010101LL) & ~(v12 ^ *v8) | ~(v10 ^ *v8) & ((v10 ^ *v8) - 0x101010101010101LL)) & 0x8080808080808080LL) == 0 )
  {
    ++v8;
    n -= 8LL;
  }
  v7 = v8;
  while ( n )
  {
    if ( *v7 == a2 || *v7 == a3 )
      return v7;
    --n;
    ++v7;
  }
  return 0LL;
}
