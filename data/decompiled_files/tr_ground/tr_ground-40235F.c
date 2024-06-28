#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40235F(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+28h] [rbp-8h]

  v5 = sub_406D88(32LL);
  *(_QWORD *)(v5 + 8) = 0LL;
  *(_DWORD *)v5 = 4;
  *(_BYTE *)(v5 + 16) = a2;
  *(_QWORD *)(v5 + 24) = a3;
  if ( !*(_QWORD *)(a1 + 8) )
    __assert_fail("list->tail", "../../src/src/tr.c", 0x2DCu, "append_repeated_char");
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = v5;
  result = a1;
  *(_QWORD *)(a1 + 8) = v5;
  return result;
}
