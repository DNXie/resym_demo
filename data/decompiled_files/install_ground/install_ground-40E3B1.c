#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40E3B1(__int64 *a1)
{
  __int64 *v1; // rax
  int v3; // [rsp+14h] [rbp-Ch]
  __int64 v4; // [rsp+18h] [rbp-8h]

  v3 = *__errno_location();
  if ( a1 )
    v1 = a1;
  else
    v1 = &qword_622920;
  v4 = sub_412801(v1, 56LL);
  *__errno_location() = v3;
  return v4;
}
