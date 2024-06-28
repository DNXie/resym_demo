#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_40C880(int fildes, char *filename, struct stat *stat_buf, int flag)
{
  return __fxstatat(1, fildes, filename, stat_buf, flag);
}
