#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *sub_401AD4()
{
  _QWORD *v1; // [rsp+8h] [rbp-8h]

  v1 = (_QWORD *)sub_40493E(24LL);
  v1[1] = 0x2000LL;
  *v1 = sub_40493E(v1[1]);
  v1[2] = v1[1] - 1LL + *v1;
  *(_BYTE *)v1[2] = 0;
  return v1;
}
