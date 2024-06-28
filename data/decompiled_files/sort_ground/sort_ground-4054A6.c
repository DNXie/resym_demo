#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4054A6(const char *a1, const char *a2)
{
  __int64 result; // rax
  char *endptr; // [rsp+10h] [rbp-30h] BYREF
  char *v4; // [rsp+18h] [rbp-28h] BYREF
  long double s1; // [rsp+20h] [rbp-20h]
  long double s2; // [rsp+30h] [rbp-10h]

  s1 = strtold(a1, &endptr);
  s2 = strtold(a2, &v4);
  if ( a1 == endptr )
  {
    if ( a2 == v4 )
      result = 0LL;
    else
      result = 0xFFFFFFFFLL;
  }
  else if ( a2 == v4 )
  {
    result = 1LL;
  }
  else if ( s2 <= s1 )
  {
    if ( s1 <= s2 )
    {
      if ( s2 == s1 )
        result = 0LL;
      else
        result = 0xFFFFFFFFLL;
    }
    else
    {
      result = 1LL;
    }
  }
  else
  {
    result = 0xFFFFFFFFLL;
  }
  return result;
}
