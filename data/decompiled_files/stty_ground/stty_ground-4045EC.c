#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_4045EC(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  char *v3; // rax
  unsigned __int64 v5[3]; // [rsp+18h] [rbp-18h] BYREF

  if ( (unsigned int)sub_4071CF(a1, 0LL, 0LL, v5, "bB") || a2 < v5[0] )
  {
    v2 = sub_40494D(a1);
    v3 = gettext("invalid integer argument %s");
    error(0, 0, v3, v2);
    sub_401B0F(1);
  }
  return v5[0];
}
