#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402B94(__int64 a1, const char *a2, __int64 a3, __int64 a4, size_t a5, void (*a6)(void))
{
  __int64 v11; // [rsp+38h] [rbp-8h]

  v11 = sub_4028AA(a2, a3, a4, a5);
  if ( v11 >= 0 )
    return v11;
  sub_4029D9(a1, (__int64)a2, v11);
  sub_402A64(a3, a4, a5);
  a6();
  return -1LL;
}
