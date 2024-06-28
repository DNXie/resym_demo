#include "/share/binary_recovery/clang-parser/defs.hh"
const char *__fastcall sub_4087F5(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  const char *result; // rax

  if ( a2 <= 0x14 )
    __assert_fail(
      "(((((sizeof (uintmax_t) * 8 - (! ((__typeof__ (uintmax_t)) 0 < (__typeof__ (uintmax_t)) -1))) * 146 + 484) / 485) "
      "+ (! ((__typeof__ (uintmax_t)) 0 < (__typeof__ (uintmax_t)) -1))) + 1) <= buflen",
      "../../src/src/ls.c",
      0xE2Eu,
      "format_inode");
  if ( *(_BYTE *)(a3 + 176) && *(_QWORD *)(a3 + 24) )
    result = (const char *)sub_40EF8A(*(_QWORD *)(a3 + 24), a1);
  else
    result = "?";
  return result;
}
