#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4046D9(const char *a1)
{
  unsigned int i; // [rsp+14h] [rbp-2Ch]
  int v3; // [rsp+18h] [rbp-28h]
  int v4; // [rsp+1Ch] [rbp-24h]
  char *endptr; // [rsp+20h] [rbp-20h] BYREF
  __int64 v6; // [rsp+28h] [rbp-18h]
  __int64 v7; // [rsp+30h] [rbp-10h]
  __int64 v8; // [rsp+38h] [rbp-8h]

  if ( (unsigned int)(*a1 - 48) > 9 )
  {
    for ( i = 0; i <= 0x22; ++i )
    {
      if ( !strcmp((const char *)(12LL * i + 6320676), a1) )
        return dword_607220[3 * i];
    }
    v3 = __libc_current_sigrtmin();
    v4 = __libc_current_sigrtmax();
    if ( v3 > 0 && !strncmp(a1, "RTMIN", 5uLL) )
    {
      v7 = strtol(a1 + 5, &endptr, 10);
      if ( !*endptr && v7 >= 0 && v4 - v3 >= v7 )
        return (unsigned int)(v7 + v3);
    }
    else if ( v4 > 0 && !strncmp(a1, "RTMAX", 5uLL) )
    {
      v8 = strtol(a1 + 5, &endptr, 10);
      if ( !*endptr && v3 - v4 <= v8 && v8 <= 0 )
        return (unsigned int)(v8 + v4);
    }
  }
  else
  {
    v6 = strtol(a1, &endptr, 10);
    if ( !*endptr && v6 <= 64 )
      return v6;
  }
  return 0xFFFFFFFFLL;
}
