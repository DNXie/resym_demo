#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_405CB9(__int64 a1, __int64 a2, ...)
{
  gcc_va_list va; // [rsp+18h] [rbp-C8h] BYREF

  va_start(va, a2);
  return (unsigned int)sub_405D6D(a1, a2, va);
}