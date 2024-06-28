#include "/share/binary_recovery/clang-parser/defs.hh"
int sub_406273(FILE *a1, const char *a2, const char *a3, const char *a4, ...)
{
  gcc_va_list va; // [rsp+28h] [rbp-C8h] BYREF

  va_start(va, a4);
  return sub_40619A(a1, a2, a3, a4, (unsigned int *)va);
}
