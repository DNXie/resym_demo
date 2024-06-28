#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_419BF0(char *path, __mode_t mode, __dev_t a3)
{
  __dev_t dev[2]; // [rsp+8h] [rbp-10h] BYREF

  dev[0] = a3;
  return __xmknod(0, path, mode, dev);
}
