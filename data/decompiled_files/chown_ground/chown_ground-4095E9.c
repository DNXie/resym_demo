#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4095E9(__int64 a1, _QWORD *a2)
{
  if ( *(_DWORD *)(a1 + 24) != 9827862 )
    __assert_fail("state->magic == 9827862", "../../src/lib/cycle-check.c", 0x3Cu, "cycle_check");
  if ( *(_QWORD *)(a1 + 16) && a2[1] == *(_QWORD *)a1 && *a2 == *(_QWORD *)(a1 + 8) )
    return 1LL;
  if ( sub_4095AC(++*(_QWORD *)(a1 + 16)) )
  {
    if ( !*(_QWORD *)(a1 + 16) )
      return 1LL;
    *(_QWORD *)(a1 + 8) = *a2;
    *(_QWORD *)a1 = a2[1];
  }
  return 0LL;
}
