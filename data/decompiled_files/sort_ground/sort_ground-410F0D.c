#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_410F0D(int a1)
{
  __int64 result; // rax
  int v2; // [rsp+Ch] [rbp-44h]
  char *endptr; // [rsp+18h] [rbp-38h] BYREF
  char *nptr; // [rsp+20h] [rbp-30h]
  __int64 v5; // [rsp+28h] [rbp-28h]
  unsigned __int64 v6; // [rsp+30h] [rbp-20h]
  __int64 v7; // [rsp+38h] [rbp-18h]
  __int64 v8; // [rsp+40h] [rbp-10h]
  __int64 v9; // [rsp+48h] [rbp-8h]

  v2 = a1;
  if ( a1 == 2 )
  {
    nptr = getenv("OMP_NUM_THREADS");
    if ( nptr )
    {
      while ( *nptr && (unsigned __int8)sub_416BCD((unsigned int)*nptr) )
        ++nptr;
      if ( (unsigned __int8)sub_416AF7((unsigned int)*nptr) )
      {
        endptr = 0LL;
        v6 = strtoul(nptr, &endptr, 10);
        if ( endptr )
        {
          while ( *endptr && (unsigned __int8)sub_416BCD((unsigned int)*endptr) )
            ++endptr;
          if ( !*endptr )
          {
            if ( v6 )
              result = v6;
            else
              result = 1LL;
            return result;
          }
        }
      }
    }
    v2 = 1;
  }
  if ( v2 == 1 )
  {
    v7 = sub_410EB4();
    if ( v7 )
      return v7;
    v8 = sysconf(84);
    if ( v8 > 0 )
      return v8;
  }
  else
  {
    v5 = sysconf(83);
    if ( v5 == 1 )
    {
      v9 = sub_410EB4();
      if ( v9 )
        v5 = v9;
    }
    if ( v5 > 0 )
      return v5;
  }
  return 1LL;
}
