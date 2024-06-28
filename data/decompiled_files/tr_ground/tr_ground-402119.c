#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402119(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+18h] [rbp-8h]

  v3 = sub_406D88(32LL);
  *(_QWORD *)(v3 + 8) = 0LL;
  *(_DWORD *)v3 = 0;
  *(_BYTE *)(v3 + 16) = a2;
  if ( !*(_QWORD *)(a1 + 8) )
    __assert_fail("list->tail", "../../src/src/tr.c", 0x28Du, "append_normal_char");
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = v3;
  result = a1;
  *(_QWORD *)(a1 + 8) = v3;
  return result;
}
