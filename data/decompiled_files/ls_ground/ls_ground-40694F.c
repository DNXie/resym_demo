#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40694F(const char *a1, const char *a2)
{
  size_t v3; // rax
  char *dest; // [rsp+10h] [rbp-10h]
  char *desta; // [rsp+10h] [rbp-10h]
  __int64 n; // [rsp+18h] [rbp-8h]

  if ( !a2 )
    return 0LL;
  if ( *a2 == 47 )
    return sub_414ADE(a2);
  dest = strrchr(a1, 47);
  if ( !dest )
    return sub_414ADE(a2);
  n = dest - a1 + 1;
  v3 = strlen(a2);
  desta = (char *)sub_414989(n + v3 + 1);
  strncpy(desta, a1, n);
  strcpy(&desta[n], a2);
  return (__int64)desta;
}
