#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4093F2(__int64 a1)
{
  if ( !a1 )
    __assert_fail("co != ((void *)0)", "../../src/src/copy.c", 0xA11u, "valid_options");
  if ( *(_DWORD *)a1 > 3u )
    __assert_fail(
      "((unsigned int) (co->backup_type) <= numbered_backups)",
      "../../src/src/copy.c",
      0xA12u,
      "valid_options");
  if ( *(_DWORD *)(a1 + 12) != 1 && *(_DWORD *)(a1 + 12) != 2 && *(_DWORD *)(a1 + 12) != 3 )
    __assert_fail(
      "((co->sparse_mode) == SPARSE_NEVER || (co->sparse_mode) == SPARSE_AUTO || (co->sparse_mode) == SPARSE_ALWAYS)",
      "../../src/src/copy.c",
      0xA13u,
      "valid_options");
  if ( *(_DWORD *)(a1 + 48) && *(_DWORD *)(a1 + 48) != 1 && *(_DWORD *)(a1 + 48) != 2 )
    __assert_fail(
      "((co->reflink_mode) == REFLINK_NEVER || (co->reflink_mode) == REFLINK_AUTO || (co->reflink_mode) == REFLINK_ALWAYS)",
      "../../src/src/copy.c",
      0xA14u,
      "valid_options");
  if ( *(_BYTE *)(a1 + 23) && *(_BYTE *)(a1 + 41) )
    __assert_fail("!(co->hard_link && co->symbolic_link)", "../../src/src/copy.c", 0xA15u, "valid_options");
  if ( *(_DWORD *)(a1 + 48) == 2 && *(_DWORD *)(a1 + 12) != 2 )
    __assert_fail(
      "! (co->reflink_mode == REFLINK_ALWAYS && co->sparse_mode != SPARSE_AUTO)",
      "../../src/src/copy.c",
      0xA18u,
      "valid_options");
  return 1LL;
}
