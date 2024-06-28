#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402B8F(int *a1, char *a2, unsigned __int64 a3, void **a4, size_t *a5)
{
  __int64 result; // rax
  size_t size; // [rsp+38h] [rbp-8h] BYREF

  size = 3 * ((a3 >> 2) + 1);
  *a4 = malloc(size);
  if ( !*a4 )
    return 1LL;
  if ( !sub_4029AC(a1, a2, a3, (__int64)*a4, (__int64 *)&size) )
  {
    free(*a4);
    *a4 = 0LL;
    result = 0LL;
  }
  else
  {
    if ( a5 )
      *a5 = size;
    result = 1LL;
  }
  return result;
}
