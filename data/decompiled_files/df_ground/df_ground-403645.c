#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403645(const char *a1)
{
  __int64 i; // [rsp+10h] [rbp-10h]
  __int64 v3; // [rsp+18h] [rbp-8h]

  v3 = 0LL;
  for ( i = qword_618548; i; i = *(_QWORD *)(i + 40) )
  {
    if ( !strcmp(a1, *(const char **)i) )
      v3 = i;
  }
  if ( !v3 )
    return 0LL;
  sub_402BA3(
    *(const char **)v3,
    *(const char **)(v3 + 8),
    0LL,
    *(const char **)(v3 + 16),
    (*(_BYTE *)(v3 + 32) & 1) != 0,
    (*(_BYTE *)(v3 + 32) & 2) != 0,
    0LL);
  return 1LL;
}
