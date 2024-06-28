#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned int __fastcall sub_401FFF(double a1)
{
  __syscall_slong_t v1; // rdx
  unsigned int result; // eax
  char *v3; // rbx
  int *v4; // rax
  char *v5; // rbx
  int *v6; // rax
  timer_t timerid; // [rsp+18h] [rbp-48h] BYREF
  __time_t v8; // [rsp+20h] [rbp-40h]
  __syscall_slong_t v9; // [rsp+28h] [rbp-38h]
  struct itimerspec value; // [rsp+30h] [rbp-30h] BYREF

  v8 = sub_402EBE(a1);
  v9 = v1;
  value.it_interval.tv_sec = 0LL;
  value.it_interval.tv_nsec = 0LL;
  value.it_value.tv_sec = v8;
  value.it_value.tv_nsec = v1;
  if ( timer_create(0, 0LL, &timerid) )
  {
    if ( *__errno_location() != 38 )
    {
      v5 = gettext("warning: timer_create");
      v6 = __errno_location();
      error(0, *v6, v5);
    }
  }
  else
  {
    result = timer_settime(timerid, 0, &value, 0LL);
    if ( !result )
      return result;
    v3 = gettext("warning: timer_settime");
    v4 = __errno_location();
    error(0, *v4, v3);
    timer_delete(timerid);
  }
  if ( a1 < 4294967295.0 )
    result = alarm((a1 > (double)(int)a1) + (int)a1);
  else
    result = alarm(0xFFFFFFFF);
  return result;
}
