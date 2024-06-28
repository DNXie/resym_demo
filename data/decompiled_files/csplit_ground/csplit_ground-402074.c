#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *__fastcall sub_402074(__int64 a1)
{
  _QWORD *v2; // [rsp+18h] [rbp-8h]

  v2 = (_QWORD *)sub_406A3C(72LL);
  v2[5] = sub_406A3C(a1 + 1);
  *v2 = a1;
  v2[7] = 0LL;
  v2[6] = v2[7];
  return v2;
}
