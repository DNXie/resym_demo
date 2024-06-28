#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_401B3F(__int64 a1)
{
  time_t timer; // [rsp+10h] [rbp-10h] BYREF
  struct tm *tp; // [rsp+18h] [rbp-8h]

  timer = *(int *)(a1 + 340);
  tp = localtime(&timer);
  if ( !tp )
    return (char *)sub_401A07(timer, (__int64)byte_60F300);
  strftime(byte_60F300, 0x21uLL, qword_60F2D0, tp);
  return byte_60F300;
}
