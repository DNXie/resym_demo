#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_403D5A(__int64 *a1)
{
  __int64 *v1; // rax
  int v3; // [rsp+14h] [rbp-Ch]
  void *v4; // [rsp+18h] [rbp-8h]

  v3 = *__errno_location();
  if ( a1 )
    v1 = a1;
  else
    v1 = &qword_609260;
  v4 = sub_405F91(v1, 0x38uLL);
  *__errno_location() = v3;
  return v4;
}
