#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4022AE(__int64 a1, const char *a2, size_t a3)
{
  int v4; // [rsp+24h] [rbp-Ch]
  __int64 v5; // [rsp+28h] [rbp-8h]

  v4 = sub_401EB5(a2, a3);
  if ( v4 == 9999 )
    return 0LL;
  v5 = sub_406D88(32LL);
  *(_QWORD *)(v5 + 8) = 0LL;
  *(_DWORD *)v5 = 2;
  *(_DWORD *)(v5 + 16) = v4;
  if ( !*(_QWORD *)(a1 + 8) )
    __assert_fail("list->tail", "../../src/src/tr.c", 0x2C6u, "append_char_class");
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = v5;
  *(_QWORD *)(a1 + 8) = v5;
  return 1LL;
}
