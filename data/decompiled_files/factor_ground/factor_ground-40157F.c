#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_40157F(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  const char *v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // [rsp+28h] [rbp-28h]
  unsigned __int64 v8; // [rsp+30h] [rbp-20h]
  unsigned __int64 i; // [rsp+38h] [rbp-18h]
  unsigned __int64 v10; // [rsp+40h] [rbp-10h]
  const char *v11; // [rsp+48h] [rbp-8h]

  v7 = a1;
  v10 = 0LL;
  v11 = (const char *)&unk_404F80;
  if ( a1 <= 1 )
    return 0LL;
  v8 = 2LL;
  do
  {
    for ( i = v7 / v8; v8 * i == v7; i /= v8 )
    {
      if ( v10 >= a2 )
        __assert_fail("n_factors < max_n_factors", "../../src/src/factor.c", 0x13Bu, "factor_wheel");
      v4 = v10++;
      *(_QWORD *)(a3 + 8 * v4) = v8;
      v7 = i;
    }
    v5 = v11++;
    v8 += *(unsigned __int8 *)v5;
    if ( v11 == "../../src/src/factor.c" )
      v11 = (const char *)&unk_404F85;
  }
  while ( v8 <= i );
  if ( v7 != 1 )
  {
    if ( v10 >= a2 )
      __assert_fail("n_factors < max_n_factors", "../../src/src/factor.c", 0x148u, "factor_wheel");
    v6 = v10++;
    *(_QWORD *)(a3 + 8 * v6) = v7;
  }
  return v10;
}
