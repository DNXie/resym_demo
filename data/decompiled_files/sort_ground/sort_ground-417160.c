#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_417160(char *filename, struct stat *stat_buf)
{
  return __xstat(1, filename, stat_buf);
}
