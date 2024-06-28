#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_4023D9(unsigned __int64 a1, __int64 a2)
{
  int result; // eax
  size_t n; // [rsp+18h] [rbp-8h]

  if ( *(_QWORD *)(a2 + 24) <= a1 )
  {
    result = (int)s1;
    if ( !s1 )
      return result;
    return fputs_unlocked(s1, stdout);
  }
  n = *(_QWORD *)(16 * a1 + *(_QWORD *)(a2 + 40) + 8);
  if ( n )
    return fwrite_unlocked(*(const void **)(16 * a1 + *(_QWORD *)(a2 + 40)), 1uLL, n, stdout);
  result = (int)s1;
  if ( s1 )
    return fputs_unlocked(s1, stdout);
  return result;
}
