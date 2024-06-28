#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_406FA0(char *filename, struct stat *stat_buf)
{
  return __lxstat(1, filename, stat_buf);
}
