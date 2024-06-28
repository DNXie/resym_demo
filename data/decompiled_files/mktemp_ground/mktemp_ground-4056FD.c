#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4056FD(_QWORD *a1)
{
  unsigned int v2; // [rsp+18h] [rbp-8h]
  int v3; // [rsp+1Ch] [rbp-4h]

  v2 = sub_405DA6(*a1);
  v3 = *__errno_location();
  sub_4056CD(a1);
  *__errno_location() = v3;
  return v2;
}
