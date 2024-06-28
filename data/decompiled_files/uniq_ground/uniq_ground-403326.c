#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_403326()
{
  __int64 result; // rax
  char *endptr; // [rsp+0h] [rbp-20h] BYREF
  __int64 v2; // [rsp+8h] [rbp-18h]
  char *nptr; // [rsp+10h] [rbp-10h]
  __int64 v4; // [rsp+18h] [rbp-8h]

  v2 = 200809LL;
  nptr = getenv("_POSIX2_VERSION");
  if ( nptr )
  {
    if ( *nptr )
    {
      v4 = strtol(nptr, &endptr, 10);
      if ( !*endptr )
        v2 = v4;
    }
  }
  if ( v2 < (__int64)0xFFFFFFFF80000000LL )
    return 0x80000000LL;
  result = 0x7FFFFFFFLL;
  if ( v2 <= 0x7FFFFFFF )
    result = v2;
  return result;
}
