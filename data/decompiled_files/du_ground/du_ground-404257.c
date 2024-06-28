#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404257(const void *a1, __int64 a2, __int64 a3, size_t a4)
{
  __int64 i; // [rsp+28h] [rbp-8h]

  for ( i = 0LL; *(_QWORD *)(8 * i + a2); ++i )
  {
    if ( !memcmp(a1, (const void *)(i * a4 + a3), a4) )
      return *(_QWORD *)(8 * i + a2);
  }
  return 0LL;
}
