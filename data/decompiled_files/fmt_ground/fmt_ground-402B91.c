#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_402B91(__int64 a1, int a2)
{
  __int64 v3; // [rsp+8h] [rbp-18h]
  __int64 v4; // [rsp+18h] [rbp-8h]

  v3 = a1;
  dword_608288 = 0;
  sub_402CB4((unsigned int)dword_61328C);
  fputs_unlocked(qword_608268, stdout);
  dword_608288 += dword_60827C;
  sub_402CB4((unsigned int)(a2 - dword_608288));
  v4 = *(_QWORD *)(a1 + 32) - 40LL;
  while ( v3 != v4 )
  {
    sub_402C57(v3);
    sub_402CB4(*(unsigned int *)(v3 + 12));
    v3 += 40LL;
  }
  sub_402C57(v3);
  dword_6132A0 = dword_608288;
  return putchar_unlocked(10);
}
