#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404CF7(const char *a1, char a2)
{
  char *reject; // [rsp+10h] [rbp-10h]
  size_t v5; // [rsp+18h] [rbp-8h]

  reject = "\\?*[]";
  if ( (a2 & 2) != 0 )
    reject = "?*[]";
  while ( *a1 )
  {
    v5 = strcspn(a1, reject);
    if ( !a1[v5] )
      break;
    if ( a1[v5] != 92 )
      return 1LL;
    a1 += v5 + 1;
    if ( *a1 )
      ++a1;
  }
  return 0LL;
}
