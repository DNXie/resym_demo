#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_402BA9(time_t a1, __int64 a2)
{
  time_t timer; // [rsp+0h] [rbp-20h] BYREF
  __int64 v4; // [rsp+8h] [rbp-18h]
  struct tm *v5; // [rsp+18h] [rbp-8h]

  timer = a1;
  v4 = a2;
  v5 = localtime(&timer);
  if ( !v5 )
    return (void *)sub_402224(timer, (__int64)&unk_616400);
  sub_40A0C0(&unk_616400, 44LL, "%Y-%m-%d %H:%M:%S.%N %z", v5, 0LL, (unsigned int)v4);
  return &unk_616400;
}
