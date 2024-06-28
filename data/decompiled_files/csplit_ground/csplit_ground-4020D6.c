#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *__fastcall sub_4020D6(unsigned __int64 a1)
{
  _QWORD *result; // rax
  __int64 v2; // [rsp+18h] [rbp-18h]

  v2 = 0x1FFFLL;
  if ( a1 > 0x1FFF )
    v2 = ((a1 - 0x1FFF + 2047) & 0xFFFFFFFFFFFFF800LL) + 0x1FFF;
  result = sub_402074(v2);
  result[4] = 0LL;
  result[1] = 0LL;
  result[3] = qword_60B338 + 1;
  result[2] = result[3];
  result[8] = 0LL;
  return result;
}
