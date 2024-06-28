#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40456F(__int64 a1, __int64 a2)
{
  double v2; // rax
  __int64 result; // rax
  unsigned __int64 v4; // [rsp+10h] [rbp-30h]
  unsigned __int64 v5; // [rsp+10h] [rbp-30h]
  double v6; // [rsp+18h] [rbp-28h]
  double v7; // [rsp+20h] [rbp-20h]
  struct rlimit rlimits; // [rsp+30h] [rbp-10h] BYREF

  v6 = sub_4110ED();
  v7 = sub_411075(a1, a2);
  if ( v6 <= v7 / 8.0 )
    v2 = v7 / 8.0;
  else
    v2 = v6;
  v4 = -1LL;
  if ( (double)-1 + (double)-1 > v2 )
  {
    if ( v2 >= 9.223372036854776e18 )
      v4 = (unsigned int)(int)(v2 - 9.223372036854776e18) ^ 0x8000000000000000LL;
    else
      v4 = (unsigned int)(int)v2;
  }
  if ( !getrlimit(RLIMIT_DATA, &rlimits) && rlimits.rlim_cur < v4 )
    v4 = rlimits.rlim_cur;
  if ( !getrlimit(RLIMIT_AS, &rlimits) && rlimits.rlim_cur < v4 )
    v4 = rlimits.rlim_cur;
  v5 = v4 >> 1;
  if ( !getrlimit(__RLIMIT_RSS, &rlimits) && 15 * (rlimits.rlim_cur >> 4) < v5 )
    v5 = 15 * (rlimits.rlim_cur >> 4);
  result = v5;
  if ( 34 * (unsigned __int64)(unsigned int)dword_61D4EC >= v5 )
    result = 34LL * (unsigned int)dword_61D4EC;
  return result;
}
