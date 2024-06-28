#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40B98F(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_611320;
  v8[1] = qword_611328;
  v8[2] = qword_611330;
  v8[3] = qword_611338;
  v8[4] = qword_611340;
  v8[5] = qword_611348;
  v8[6] = qword_611350;
  sub_40A45C(v8, a2, a3);
  return sub_40B45F(a1, a4, a5, (__int64)v8);
}
