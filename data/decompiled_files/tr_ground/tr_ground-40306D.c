#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40306D(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  char *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  bool v6; // [rsp+1Ah] [rbp-46h]
  bool v7; // [rsp+1Bh] [rbp-45h]
  int v8; // [rsp+1Ch] [rbp-44h] BYREF
  int v9; // [rsp+20h] [rbp-40h] BYREF
  unsigned int i; // [rsp+24h] [rbp-3Ch]
  int v11; // [rsp+28h] [rbp-38h]
  int v12; // [rsp+2Ch] [rbp-34h]
  __int64 v13; // [rsp+30h] [rbp-30h]
  __int64 v14; // [rsp+38h] [rbp-28h]
  unsigned __int64 v15; // [rsp+40h] [rbp-20h]
  unsigned __int64 v16; // [rsp+48h] [rbp-18h]
  __int64 v17; // [rsp+50h] [rbp-10h]
  __int64 v18; // [rsp+58h] [rbp-8h]

  v13 = 0LL;
  v14 = 0LL;
  v11 = 0;
  v12 = 0;
  v15 = a1[3];
  v16 = *(_QWORD *)(a2 + 24);
  v17 = a1[1];
  v18 = *(_QWORD *)(a2 + 8);
  v6 = 1;
  v7 = 1;
  result = *(unsigned __int8 *)(a2 + 49) ^ 1u;
  if ( *(_BYTE *)(a2 + 49) == 1 )
  {
    for ( i = 0; i <= 0xFF; ++i )
    {
      if ( ((*__ctype_b_loc())[i] & 0x100) != 0 )
        ++v13;
      if ( ((*__ctype_b_loc())[i] & 0x200) != 0 )
        ++v14;
    }
    a1[2] = -2LL;
    *(_QWORD *)(a2 + 16) = -2LL;
    while ( v11 != -1 && v12 != -1 )
    {
      v11 = sub_402C37(a1, &v8);
      v12 = sub_402C37((_QWORD *)a2, &v9);
      if ( v7 && v9 != 2 && (!v6 || v8 == 2) )
      {
        v3 = gettext("misaligned [:upper:] and/or [:lower:] construct");
        error(1, 0, v3);
      }
      if ( v9 != 2 )
      {
        sub_402C0D((__int64)a1);
        sub_402C0D(a2);
        if ( v8 == 1 )
          v4 = v13 - 1;
        else
          v4 = v14 - 1;
        a1[3] -= v4;
        if ( v9 == 1 )
          v5 = v13 - 1;
        else
          v5 = v14 - 1;
        *(_QWORD *)(a2 + 24) -= v5;
      }
      v6 = a1[2] == -1LL;
      v7 = *(_QWORD *)(a2 + 16) == -1LL;
    }
    if ( a1[3] > v15 || *(_QWORD *)(a2 + 24) > v16 )
      __assert_fail(
        "old_s1_len >= s1->length && old_s2_len >= s2->length",
        "../../src/src/tr.c",
        0x4DEu,
        "validate_case_classes");
    a1[1] = v17;
    result = a2;
    *(_QWORD *)(a2 + 8) = v18;
  }
  return result;
}
