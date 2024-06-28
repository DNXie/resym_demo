#include "/share/binary_recovery/clang-parser/defs.hh"
int sub_405C05(FILE *a1, const char *a2, const char *a3, const char *a4, ...)
{
  __va_list_tag va[1]; // [rsp+28h] [rbp-C8h] BYREF

  va_start(va, a4);
  return sub_405B2C(a1, a2, a3, a4, (unsigned int *)va);
}
