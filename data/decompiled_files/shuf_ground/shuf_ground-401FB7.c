#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401FB7(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned __int64 i; // [rsp+30h] [rbp-20h]
  unsigned __int64 j; // [rsp+30h] [rbp-20h]
  __int64 v11; // [rsp+38h] [rbp-18h]
  size_t n; // [rsp+40h] [rbp-10h]

  if ( a2 )
  {
    for ( i = 0LL; i < a1; ++i )
    {
      v11 = 8LL * *(_QWORD *)(8 * i + a4) + a2;
      n = *(_QWORD *)(v11 + 8) - *(_QWORD *)v11;
      if ( fwrite_unlocked(*(const void **)v11, 1uLL, n, stdout) != n )
        return 0xFFFFFFFFLL;
    }
  }
  else
  {
    for ( j = 0LL; j < a1; ++j )
    {
      if ( printf("%lu%c", *(_QWORD *)(8 * j + a4) + a3, (unsigned int)a5) < 0 )
        return 0xFFFFFFFFLL;
    }
  }
  return 0LL;
}
