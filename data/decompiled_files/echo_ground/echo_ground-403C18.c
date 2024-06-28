#include "/share/binary_recovery/clang-parser/defs.hh"
int sub_403C18(FILE *a1, const char *a2, const char *a3, const char *a4, ...)
{
  gcc_va_list va; // [rsp+28h] [rbp-C8h] BYREF

  va_start(va, a4);
  return sub_403B3F(a1, a2, a3, a4, (unsigned int *)va);
}
