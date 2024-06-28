#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_409D80(unsigned int a1, char *a2, struct timespec *a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  unsigned int v7; // eax
  struct timespec *times; // [rsp+8h] [rbp-D8h]
  unsigned int v10; // [rsp+2Ch] [rbp-B4h]
  __int64 v11[2]; // [rsp+30h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+40h] [rbp-A0h]
  __int64 v13; // [rsp+48h] [rbp-98h]
  struct stat stat_buf; // [rsp+50h] [rbp-90h] BYREF

  times = a3;
  if ( dword_611520 < 0 )
    goto LABEL_25;
  if ( a3 && (a3->tv_nsec == 1073741822 || a3[1].tv_nsec == 1073741822) )
  {
    if ( (unsigned int)sub_40C880(a1, a2, &stat_buf, a4) )
      return 0xFFFFFFFFLL;
    if ( times->tv_nsec == 1073741822 && times[1].tv_nsec == 1073741822 )
      return 0LL;
    if ( times->tv_nsec == 1073741822 )
    {
      v11[0] = sub_409D54((__int64)&stat_buf);
    }
    else
    {
      v5 = times->tv_nsec;
      v11[0] = times->tv_sec;
    }
    v11[1] = v5;
    if ( times[1].tv_nsec == 1073741822 )
    {
      v12 = sub_409D6A((__int64)&stat_buf);
    }
    else
    {
      v6 = times[1].tv_nsec;
      v12 = times[1].tv_sec;
    }
    v13 = v6;
    times = (struct timespec *)v11;
  }
  v10 = utimensat(a1, a2, times, a4);
  if ( v10 == -1 && *__errno_location() == 22 )
  {
    v7 = a4;
    BYTE1(v7) = BYTE1(a4) & 0xFE;
    if ( v7 )
      return 0xFFFFFFFFLL;
  }
  if ( v10 && (*__errno_location() == 38 || *__errno_location() == 22) )
  {
LABEL_25:
    if ( dword_611520 >= 0 && *__errno_location() == 38 )
      dword_611520 = -1;
    result = sub_409FC8(a1, a2, times, a4);
  }
  else
  {
    dword_611520 = 1;
    result = v10;
  }
  return result;
}
