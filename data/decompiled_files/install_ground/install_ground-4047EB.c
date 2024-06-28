#include "/share/binary_recovery/clang-parser/defs.hh"
int sub_4047EB(FILE *a1, __int64 a2, ...)
{
  gcc_va_list va; // [rsp+18h] [rbp-C8h] BYREF

  va_start(va, a2);
  fputs_unlocked(s, a1);
  fwrite_unlocked(": ", 1uLL, 2uLL, a1);
  sub_413569(a1, a2, va);
  return fputc_unlocked(10, a1);
}
