#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4027CC(char *a1, time_t a2, __int64 a3)
{
  __int64 v3; // rbx
  char *v4; // rax
  __int64 result; // rax
  time_t timer; // [rsp+0h] [rbp-60h] BYREF
  __int64 v7; // [rsp+8h] [rbp-58h]
  char *v8; // [rsp+18h] [rbp-48h]
  struct tm *v9; // [rsp+28h] [rbp-38h]
  char v10[24]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-18h]

  v8 = a1;
  timer = a2;
  v7 = a3;
  v11 = __readfsqword(0x28u);
  v9 = localtime(&timer);
  if ( v9 )
  {
    if ( v8 == "%a, %d %b %Y %H:%M:%S %z" )
      setlocale(2, "C");
    sub_405A84(stdout, v8, v9, 0LL, (unsigned int)v7);
    fputc_unlocked(10, stdout);
    if ( v8 == "%a, %d %b %Y %H:%M:%S %z" )
      setlocale(2, locale);
    result = 1LL;
  }
  else
  {
    v3 = sub_401B37(timer, (__int64)v10);
    v4 = gettext("time %s is out of range");
    error(0, 0, v4, v3);
    result = 0LL;
  }
  return result;
}
