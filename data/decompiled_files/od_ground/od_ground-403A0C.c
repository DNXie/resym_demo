#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_403A0C(size_t a1, __int64 a2, _QWORD *a3)
{
  int *v3; // rax
  bool v4; // bl
  bool v7; // [rsp+2Fh] [rbp-21h]
  size_t n; // [rsp+30h] [rbp-20h]
  size_t v9; // [rsp+38h] [rbp-18h]

  v7 = 1;
  if ( !a1 || a1 > ::n )
    __assert_fail("0 < n && n <= bytes_per_block", "../../src/src/od.c", 0x4CDu, "read_block");
  *a3 = 0LL;
  while ( stream )
  {
    n = a1 - *a3;
    v9 = fread_unlocked((void *)(*a3 + a2), 1uLL, n, stream);
    *a3 += v9;
    if ( v9 == n )
      break;
    v3 = __errno_location();
    v4 = (v7 & (unsigned __int8)sub_403028(*v3)) != 0;
    v7 = (v4 & (unsigned __int8)sub_402EFF()) != 0;
  }
  return v7;
}
