#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_401DF3(__int64 a1)
{
  time_t timer; // [rsp+10h] [rbp-10h] BYREF
  struct tm *tp; // [rsp+18h] [rbp-8h]

  timer = *(int *)(a1 + 340);
  tp = localtime(&timer);
  if ( !tp )
    return (char *)sub_401AC6(timer, (__int64)byte_608320);
  strftime(byte_608320, 0x21uLL, qword_6082E0, tp);
  return byte_608320;
}
