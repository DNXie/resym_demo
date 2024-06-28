#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40746B(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_616460;
  v8[1] = qword_616468;
  v8[2] = qword_616470;
  v8[3] = qword_616478;
  v8[4] = qword_616480;
  v8[5] = qword_616488;
  v8[6] = qword_616490;
  sub_405F38(v8, a2, a3);
  return sub_406F3B(a1, a4, a5, (__int64)v8);
}
