#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40AC67(int *a1)
{
  __int64 result; // rax

  result = (unsigned int)*a1;
  if ( (int)result >= 0 )
  {
    result = close(*a1) == 0;
    if ( !(_BYTE)result )
      __assert_fail("! close_fail", "../../src/lib/chdir-long.c", 0x3Fu, "cdb_free");
  }
  return result;
}
