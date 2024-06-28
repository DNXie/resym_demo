#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_401E05(const char *a1)
{
  dword_6103DC = strlen(a1);
  dest = (char *)sub_40A750(dword_6103DC + 1);
  return strcpy(dest, a1);
}
