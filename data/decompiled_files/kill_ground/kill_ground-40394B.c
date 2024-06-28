#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40394B(__int64 a1, size_t a2, unsigned __int8 a3)
{
  __int64 v4[8]; // [rsp+20h] [rbp-40h] BYREF

  v4[0] = qword_607460;
  v4[1] = qword_607468;
  v4[2] = qword_607470;
  v4[3] = qword_607478;
  v4[4] = qword_607480;
  v4[5] = qword_607488;
  v4[6] = qword_607490;
  sub_40249A(v4, a3, 1);
  return sub_403558(0, a1, a2, (__int64)v4);
}
