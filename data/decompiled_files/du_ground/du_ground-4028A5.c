#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_4028A5(__int64 a1, time_t a2, __int64 a3)
{
  char *v3; // rax
  time_t timer; // [rsp+0h] [rbp-50h] BYREF
  __int64 v6; // [rsp+8h] [rbp-48h]
  __int64 v7; // [rsp+18h] [rbp-38h]
  struct tm *v8; // [rsp+20h] [rbp-30h]
  char *s; // [rsp+28h] [rbp-28h]
  char v10[24]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-8h]

  v7 = a1;
  timer = a2;
  v6 = a3;
  v11 = __readfsqword(0x28u);
  v8 = localtime(&timer);
  if ( v8 )
  {
    sub_408657(stdout, v7, v8, 0LL, (unsigned int)v6);
  }
  else
  {
    s = (char *)sub_40255A(timer, (__int64)v10);
    v3 = gettext("time %s is out of range");
    error(0, 0, v3, s);
    fputs_unlocked(s, stdout);
  }
  return __readfsqword(0x28u) ^ v11;
}
