#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_40215E(__pid_t a1, int a2)
{
  dword_60C540[a2] = 1;
  return kill(a1, a2);
}
