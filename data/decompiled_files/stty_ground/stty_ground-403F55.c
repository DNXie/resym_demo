#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_403F55(unsigned int *a1)
{
  unsigned __int64 i; // [rsp+18h] [rbp-8h]

  printf("%lx:%lx:%lx:%lx", *a1, a1[1], a1[2], a1[3]);
  for ( i = 0LL; i <= 0x1F; ++i )
    printf(":%lx", *((unsigned __int8 *)a1 + i + 17));
  return putchar_unlocked(10);
}
