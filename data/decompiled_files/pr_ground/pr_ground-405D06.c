#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *__fastcall sub_405D06(_QWORD *a1, int a2)
{
  __int64 v3[7]; // [rsp+10h] [rbp-40h] BYREF

  memset(v3, 0, sizeof(v3));
  if ( a2 == 8 )
    abort();
  LODWORD(v3[0]) = a2;
  *a1 = v3[0];
  a1[1] = v3[1];
  a1[2] = v3[2];
  a1[3] = v3[3];
  a1[4] = v3[4];
  a1[5] = v3[5];
  a1[6] = v3[6];
  return a1;
}
