#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *__fastcall sub_402D40(int a1, __int64 a2)
{
  _QWORD *result; // rax

  if ( a1 && a1 != 1 && a1 != 2 )
    __assert_fail("file == 0 || file == 1 || file == 2", "../../src/src/join.c", 0x32Bu, "add_field");
  if ( !a1 && a2 )
    __assert_fail("file != 0 || field == 0", "../../src/src/join.c", 0x32Cu, "add_field");
  result = (_QWORD *)sub_406306(24LL);
  *(_DWORD *)result = a1;
  result[1] = a2;
  result[2] = 0LL;
  *((_QWORD *)off_60A210 + 2) = result;
  off_60A210 = result;
  return result;
}
