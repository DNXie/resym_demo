#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_4035FB(const char *a1, __int64 a2)
{
  bool v2; // al
  bool v4; // [rsp+1Fh] [rbp-21h]
  void *v5[4]; // [rsp+20h] [rbp-20h] BYREF

  v2 = (unsigned __int8)sub_401B0A(a1, v5) && (unsigned __int8)sub_4027FF((__int64 *)v5, a2);
  v4 = v2;
  sub_401ADD(v5);
  return v4;
}
