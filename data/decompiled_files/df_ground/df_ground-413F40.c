#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_413F40(char *filename, struct stat *stat_buf)
{
  return __xstat(1, filename, stat_buf);
}