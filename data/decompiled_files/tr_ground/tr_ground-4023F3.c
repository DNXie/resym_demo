#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4023F3(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v4; // [rsp+28h] [rbp-8h]

  if ( a3 != 1 )
    return 0LL;
  v4 = sub_406D88(32LL);
  *(_QWORD *)(v4 + 8) = 0LL;
  *(_DWORD *)v4 = 3;
  *(_BYTE *)(v4 + 16) = *a2;
  if ( !*(_QWORD *)(a1 + 8) )
    __assert_fail("list->tail", "../../src/src/tr.c", 0x2F3u, "append_equiv_class");
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = v4;
  *(_QWORD *)(a1 + 8) = v4;
  return 1LL;
}
