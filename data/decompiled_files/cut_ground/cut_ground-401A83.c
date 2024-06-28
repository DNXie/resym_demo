#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401A83(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+18h] [rbp-8h]

  v2 = sub_404B31(qword_60B2E8, a1);
  if ( !v2 )
    sub_40739E();
  result = v2;
  if ( v2 != a1 )
    __assert_fail("(size_t) ent_from_table == i", "../../src/src/cut.c", 0xFEu, "mark_range_start");
  return result;
}
