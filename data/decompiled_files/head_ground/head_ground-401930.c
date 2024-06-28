#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401930(unsigned int a1, FILE *a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 n; // [rsp+38h] [rbp-2028h]
  char ptr[8200]; // [rsp+40h] [rbp-2020h] BYREF
  unsigned __int64 v8; // [rsp+2048h] [rbp-18h]

  v8 = __readfsqword(0x28u);
  while ( a3 )
  {
    v3 = 0x2000LL;
    if ( a3 <= 0x2000 )
      v3 = a3;
    n = sub_405564(a1, ptr, v3);
    if ( n == -1LL )
      return 1LL;
    a3 -= n;
    if ( !n && a3 )
      return 3LL;
    if ( fwrite_unlocked(ptr, 1uLL, n, a2) < n )
      return 2LL;
  }
  return 0LL;
}
