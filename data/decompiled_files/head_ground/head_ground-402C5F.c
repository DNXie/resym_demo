#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402C5F(__int64 a1, unsigned int a2, size_t a3)
{
  __int64 v5; // [rsp+20h] [rbp-10h]
  __int64 v6; // [rsp+28h] [rbp-8h]

  if ( byte_609279 == 1 )
    return sub_402334(a1, a2, a3);
  v5 = lseek(a2, 0LL, 1);
  v6 = lseek(a2, 0LL, 2);
  if ( v5 < 0 || v5 >= v6 )
    return sub_402334(a1, a2, a3);
  if ( v6 )
    return sub_4027C6(a1, a2, a3, v5, v6);
  return 1LL;
}
