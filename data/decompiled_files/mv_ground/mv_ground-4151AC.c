#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4151AC(int a1, const char *a2, char a3, unsigned int a4)
{
  int v4; // eax
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // er8
  int v8; // er9
  unsigned int v10; // [rsp+14h] [rbp-CCh]

  v10 = 0;
  if ( (a3 & 0x40) != 0 )
    v10 = a4;
  v4 = openat(a1, a2, a3, v10);
  return sub_40EEE4(v4, (__int64)a2, v5, v6, v7, v8);
}
