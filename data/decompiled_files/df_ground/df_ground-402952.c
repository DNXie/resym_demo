#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402952(const char *a1)
{
  __int64 i; // [rsp+18h] [rbp-8h]

  if ( !qword_618538 || !a1 )
    return 1LL;
  for ( i = qword_618538; i; i = *(_QWORD *)(i + 8) )
  {
    if ( !strcmp(a1, *(const char **)i) )
      return 1LL;
  }
  return 0LL;
}
