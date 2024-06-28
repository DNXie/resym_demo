#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_401E7F(const char *a1, unsigned int a2)
{
  int *v2; // rax
  __int64 v4; // [rsp+10h] [rbp-10h] BYREF
  __int64 v5; // [rsp+18h] [rbp-8h] BYREF

  if ( (unsigned int)sub_407836(a1, &v4, &v5, a2) )
  {
    v2 = __errno_location();
    error(1, *v2, "%s", a1);
  }
  return sub_401985(v4, v5);
}
