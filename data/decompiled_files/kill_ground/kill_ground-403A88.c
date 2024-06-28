#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_403A88(int a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v8[8]; // [rsp+30h] [rbp-40h] BYREF

  v8[0] = qword_607460;
  v8[1] = qword_607468;
  v8[2] = qword_607470;
  v8[3] = qword_607478;
  v8[4] = qword_607480;
  v8[5] = qword_607488;
  v8[6] = qword_607490;
  sub_402555(v8, a2, a3);
  return sub_403558(a1, a4, a5, (__int64)v8);
}
