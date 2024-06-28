#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40A9AC(__int64 a1, struct timespec **a2)
{
  __int64 result; // rax
  __syscall_slong_t v3; // rdx
  __syscall_slong_t v4; // rdx
  struct timespec *v5; // [rsp+18h] [rbp-18h]

  v5 = *a2;
  if ( (*a2)->tv_nsec == 1073741822 && v5[1].tv_nsec == 1073741822 )
    return 1LL;
  if ( v5->tv_nsec == 0x3FFFFFFF && v5[1].tv_nsec == 0x3FFFFFFF )
  {
    *a2 = 0LL;
    result = 0LL;
  }
  else
  {
    if ( v5->tv_nsec == 1073741822 )
    {
      v5->tv_sec = sub_40A7FA(a1);
      v5->tv_nsec = v3;
    }
    else if ( v5->tv_nsec == 0x3FFFFFFF )
    {
      sub_4032C4(v5);
    }
    if ( v5[1].tv_nsec == 1073741822 )
    {
      v5[1].tv_sec = sub_40A810(a1);
      v5[1].tv_nsec = v4;
    }
    else if ( v5[1].tv_nsec == 0x3FFFFFFF )
    {
      sub_4032C4(v5 + 1);
    }
    result = 0LL;
  }
  return result;
}
