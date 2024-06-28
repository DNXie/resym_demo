#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_417048(const char *a1, size_t a2, const char *a3, __int64 a4)
{
  if ( a2 != a4 || memcmp(a1, a3, a2) )
    return sub_416E9B(a1, a2, a3, a4);
  *__errno_location() = 0;
  return 0LL;
}
