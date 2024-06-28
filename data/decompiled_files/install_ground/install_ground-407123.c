#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_407123(__int64 a1, const char *a2, __int64 a3)
{
  bool v3; // al

  if ( !*(_BYTE *)(a1 + 24) )
    __assert_fail("x->move_mode", "../../src/src/copy.c", 0x5B6u, "abandon_move");
  v3 = 1;
  if ( *(_DWORD *)(a1 + 8) != 2 )
  {
    if ( *(_DWORD *)(a1 + 8) != 3
      && (*(_DWORD *)(a1 + 8) != 4 || !*(_BYTE *)(a1 + 44) || sub_406F59(a2, *(_DWORD *)(a3 + 24)))
      || (sub_406FA6(a2, a3), (unsigned __int8)sub_412DA0() == 1) )
    {
      v3 = 0;
    }
  }
  return v3;
}
