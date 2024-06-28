#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40284D(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // [rsp+21h] [rbp-3Fh] BYREF
  char v6; // [rsp+22h] [rbp-3Eh] BYREF
  unsigned __int8 v7; // [rsp+23h] [rbp-3Dh]
  int v8; // [rsp+24h] [rbp-3Ch]
  __int64 v9; // [rsp+28h] [rbp-38h]
  __int64 v10[2]; // [rsp+30h] [rbp-30h] BYREF
  char v11[32]; // [rsp+40h] [rbp-20h] BYREF

  v7 = sub_409524(a1, a2, 0LL, a3, &v5, &v6);
  if ( v7 )
  {
    if ( v5 )
    {
      v9 = 0LL;
      v7 = 0;
    }
    else
    {
      v9 = v6 ? 0LL : a1;
    }
    if ( v9 )
    {
      sub_402592((__int64)v11);
      v11[25] = *(_BYTE *)(a3 + 43);
      v10[0] = v9;
      v10[1] = 0LL;
      v8 = sub_4041B6(v10, v11);
      if ( v8 != 2 && v8 != 3 && v8 != 4 )
        __assert_fail(
          "((status) == RM_OK || (status) == RM_USER_DECLINED || (status) == RM_ERROR)",
          "../../src/src/mv.c",
          0xE7u,
          "do_move");
      if ( v8 == 4 )
        v7 = 0;
    }
  }
  return v7;
}
