#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402C6D(const char *a1, __int64 a2, __int64 a3, size_t a4)
{
  __int64 result; // rax
  char v7; // [rsp+27h] [rbp-19h]
  __int64 i; // [rsp+28h] [rbp-18h]
  __int64 v9; // [rsp+30h] [rbp-10h]
  size_t n; // [rsp+38h] [rbp-8h]

  v9 = -1LL;
  v7 = 0;
  n = strlen(a1);
  for ( i = 0LL; *(_QWORD *)(8 * i + a2); ++i )
  {
    if ( !strncmp(*(const char **)(8 * i + a2), a1, n) )
    {
      if ( strlen(*(const char **)(8 * i + a2)) == n )
        return i;
      if ( v9 == -1 )
      {
        v9 = i;
      }
      else if ( !a3 || memcmp((const void *)(a4 * v9 + a3), (const void *)(i * a4 + a3), a4) )
      {
        v7 = 1;
      }
    }
  }
  if ( v7 )
    result = -2LL;
  else
    result = v9;
  return result;
}
