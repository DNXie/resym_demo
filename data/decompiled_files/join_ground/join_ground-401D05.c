#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401D05(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  size_t v5; // rax
  size_t v6; // rax
  unsigned int v7; // [rsp+2Ch] [rbp-24h]
  void *s1; // [rsp+30h] [rbp-20h]
  void *s2; // [rsp+38h] [rbp-18h]
  size_t v10; // [rsp+40h] [rbp-10h]
  size_t n; // [rsp+48h] [rbp-8h]

  if ( *(_QWORD *)(a1 + 24) <= a3 )
  {
    s1 = 0LL;
    v10 = 0LL;
  }
  else
  {
    s1 = *(void **)(16 * a3 + *(_QWORD *)(a1 + 40));
    v10 = *(_QWORD *)(16 * a3 + *(_QWORD *)(a1 + 40) + 8);
  }
  if ( *(_QWORD *)(a2 + 24) <= a4 )
  {
    s2 = 0LL;
    n = 0LL;
  }
  else
  {
    s2 = *(void **)(16 * a4 + *(_QWORD *)(a2 + 40));
    n = *(_QWORD *)(16 * a4 + *(_QWORD *)(a2 + 40) + 8);
  }
  if ( v10 )
  {
    if ( !n )
      return 1LL;
    if ( byte_60A390 )
    {
      v5 = v10;
      if ( n <= v10 )
        v5 = n;
      v7 = sub_404009(s1, s2, v5);
    }
    else
    {
      if ( byte_60A300 )
        return sub_406590(s1, v10, s2, n);
      v6 = v10;
      if ( n <= v10 )
        v6 = n;
      v7 = memcmp(s1, s2, v6);
    }
    if ( v7 )
    {
      result = v7;
    }
    else if ( v10 < n )
    {
      result = 0xFFFFFFFFLL;
    }
    else
    {
      result = v10 != n;
    }
  }
  else if ( n )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    result = 0LL;
  }
  return result;
}
