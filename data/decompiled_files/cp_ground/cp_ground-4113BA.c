#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_4113BA(int a1, char *a2, __int64 *a3)
{
  struct timespec *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  int result; // eax
  bool v7; // al
  struct timespec *v8; // rbx
  __syscall_slong_t v9; // rdx
  struct timespec *v10; // rbx
  __syscall_slong_t v11; // rdx
  __suseconds_t v13; // rdx
  __suseconds_t v14; // rdx
  bool v16; // [rsp+2Eh] [rbp-132h]
  bool v17; // [rsp+2Fh] [rbp-131h]
  int v18; // [rsp+30h] [rbp-130h]
  int v19; // [rsp+34h] [rbp-12Ch]
  int v20; // [rsp+34h] [rbp-12Ch]
  struct timespec *times; // [rsp+38h] [rbp-128h] BYREF
  struct timeval *tvp; // [rsp+40h] [rbp-120h]
  struct timeval *v23; // [rsp+48h] [rbp-118h]
  __time_t v24; // [rsp+50h] [rbp-110h]
  __time_t v25; // [rsp+58h] [rbp-108h]
  __int64 v26[4]; // [rsp+60h] [rbp-100h] BYREF
  __int64 v27[4]; // [rsp+80h] [rbp-E0h] BYREF
  __time_t v28; // [rsp+A0h] [rbp-C0h] BYREF
  __suseconds_t v29; // [rsp+A8h] [rbp-B8h]
  __time_t v30; // [rsp+B0h] [rbp-B0h]
  __suseconds_t v31; // [rsp+B8h] [rbp-A8h]
  struct stat stat_buf; // [rsp+C0h] [rbp-A0h] BYREF

  if ( a3 )
    v3 = (struct timespec *)v26;
  else
    v3 = 0LL;
  times = v3;
  v18 = 0;
  if ( v3 )
  {
    v4 = a3[1];
    v26[0] = *a3;
    v26[1] = v4;
    v5 = a3[3];
    v26[2] = a3[2];
    v26[3] = v5;
    v18 = sub_41110B(times);
  }
  if ( v18 < 0 )
    return -1;
  if ( !a2 )
  {
    if ( a1 < 0 )
    {
      *__errno_location() = 9;
      return -1;
    }
    if ( dup2(a1, a1) != a1 )
      return -1;
  }
  if ( dword_61DA70 >= 0 )
  {
    if ( v18 == 2 )
    {
      if ( a1 >= 0 )
        v7 = (unsigned int)sub_416110(a1, &stat_buf) != 0;
      else
        v7 = (unsigned int)sub_416100(a2, &stat_buf) != 0;
      if ( v7 )
        return -1;
      if ( times->tv_nsec == 1073741822 )
      {
        v8 = times;
        times->tv_sec = sub_4110DF((__int64)&stat_buf);
        v8->tv_nsec = v9;
      }
      else if ( times[1].tv_nsec == 1073741822 )
      {
        v10 = times + 1;
        times[1].tv_sec = sub_4110F5((__int64)&stat_buf);
        v10->tv_nsec = v11;
      }
      v18 = 3;
    }
    if ( a1 < 0 )
    {
      v19 = utimensat(-100, a2, times, 0);
      if ( v19 > 0 )
        *__errno_location() = 38;
      if ( !v19 || *__errno_location() != 38 )
      {
        dword_61DA70 = 1;
        return v19;
      }
    }
    if ( a1 >= 0 )
    {
      v20 = futimens(a1, times);
      if ( v20 > 0 )
        *__errno_location() = 38;
      if ( !v20 || *__errno_location() != 38 )
      {
        dword_61DA70 = 1;
        return v20;
      }
    }
  }
  dword_61DA70 = -1;
  dword_61DA74 = -1;
  if ( !v18 )
    goto LABEL_47;
  if ( v18 != 3 )
  {
    if ( a1 >= 0 ? (unsigned int)sub_416110(a1, &stat_buf) != 0 : (unsigned int)sub_416100(a2, &stat_buf) != 0 )
      return -1;
  }
  if ( times && (unsigned __int8)sub_411291((__int64)&stat_buf, (__int64 **)&times) )
    return 0;
LABEL_47:
  if ( times )
  {
    v27[0] = times->tv_sec;
    v27[1] = times->tv_nsec / 1000;
    v27[2] = times[1].tv_sec;
    v27[3] = times[1].tv_nsec / 1000;
    tvp = (struct timeval *)v27;
  }
  else
  {
    tvp = 0LL;
  }
  if ( a1 < 0 )
    return futimesat(-100, a2, tvp);
  if ( futimesat(a1, 0LL, tvp) )
  {
    if ( a2 )
      result = utimes(a2, tvp);
    else
      result = -1;
  }
  else
  {
    if ( tvp )
    {
      v16 = tvp->tv_usec > 499999;
      v17 = tvp[1].tv_usec > 499999;
      if ( (v16 || v17) && !(unsigned int)sub_416110(a1, &stat_buf) )
      {
        v24 = stat_buf.st_atim.tv_sec - tvp->tv_sec;
        v25 = stat_buf.st_mtim.tv_sec - tvp[1].tv_sec;
        v23 = 0LL;
        v13 = tvp->tv_usec;
        v28 = tvp->tv_sec;
        v29 = v13;
        v14 = tvp[1].tv_usec;
        v30 = tvp[1].tv_sec;
        v31 = v14;
        if ( v16 && v24 == 1 && !sub_4110BB((__int64)&stat_buf) )
        {
          v23 = (struct timeval *)&v28;
          v29 = 0LL;
        }
        if ( v17 && v25 == 1 && !sub_4110CD((__int64)&stat_buf) )
        {
          v23 = (struct timeval *)&v28;
          v31 = 0LL;
        }
        if ( v23 )
          futimesat(a1, 0LL, v23);
      }
    }
    result = 0;
  }
  return result;
}
