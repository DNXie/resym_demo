#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_410256(char *a1, __int64 *a2)
{
  struct timespec *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  struct timespec *v6; // rbx
  __syscall_slong_t v7; // rdx
  struct timespec *v8; // rbx
  __syscall_slong_t v9; // rdx
  int v10; // [rsp+10h] [rbp-D0h]
  int v11; // [rsp+14h] [rbp-CCh]
  struct timespec *times; // [rsp+18h] [rbp-C8h] BYREF
  __int64 v13[4]; // [rsp+20h] [rbp-C0h] BYREF
  struct stat stat_buf; // [rsp+40h] [rbp-A0h] BYREF

  if ( a2 )
    v2 = (struct timespec *)v13;
  else
    v2 = 0LL;
  times = v2;
  v10 = 0;
  if ( v2 )
  {
    v3 = a2[1];
    v13[0] = *a2;
    v13[1] = v3;
    v4 = a2[3];
    v13[2] = a2[2];
    v13[3] = v4;
    v10 = sub_40F931(times);
  }
  if ( v10 < 0 )
    return -1;
  if ( dword_61B9D4 >= 0 )
  {
    if ( v10 == 2 )
    {
      if ( (unsigned int)sub_415440(a1, &stat_buf) )
        return -1;
      if ( times->tv_nsec == 1073741822 )
      {
        v6 = times;
        times->tv_sec = sub_40F905((__int64)&stat_buf);
        v6->tv_nsec = v7;
      }
      else if ( times[1].tv_nsec == 1073741822 )
      {
        v8 = times + 1;
        times[1].tv_sec = sub_40F91B((__int64)&stat_buf);
        v8->tv_nsec = v9;
      }
      v10 = 3;
    }
    v11 = utimensat(-100, a1, times, 256);
    if ( v11 > 0 )
      *__errno_location() = 38;
    if ( !v11 || *__errno_location() != 38 )
    {
      dword_61B9D0 = 1;
      dword_61B9D4 = 1;
      return v11;
    }
  }
  dword_61B9D4 = -1;
  if ( !v10 )
    goto LABEL_37;
  if ( v10 != 3 && (unsigned int)sub_415440(a1, &stat_buf) )
    return -1;
  if ( times && (unsigned __int8)sub_40FAB7((__int64)&stat_buf, (__int64 **)&times) )
    return 0;
LABEL_37:
  if ( !v10 && (unsigned int)sub_415440(a1, &stat_buf) )
    return -1;
  if ( (stat_buf.st_mode & 0xF000) != 40960 )
    return sub_40FBE0(-1, a1, &times->tv_sec);
  *__errno_location() = 38;
  return -1;
}
