#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_4016D2(unsigned __int64 a1)
{
  const char *v1; // rax
  const char *v2; // rax
  unsigned __int64 i; // [rsp+10h] [rbp-230h]
  unsigned __int64 v5; // [rsp+18h] [rbp-228h]
  __int64 v6[64]; // [rsp+20h] [rbp-220h] BYREF
  char v7[24]; // [rsp+220h] [rbp-20h] BYREF
  unsigned __int64 v8; // [rsp+238h] [rbp-8h]

  v8 = __readfsqword(0x28u);
  v5 = sub_40157F(a1, 0x40uLL, (__int64)v6);
  v1 = (const char *)sub_401D1D(a1, v7);
  printf("%s:", v1);
  for ( i = 0LL; i < v5; ++i )
  {
    v2 = (const char *)sub_401D1D(v6[i], v7);
    printf(" %s", v2);
  }
  putchar_unlocked(10);
  return __readfsqword(0x28u) ^ v8;
}
