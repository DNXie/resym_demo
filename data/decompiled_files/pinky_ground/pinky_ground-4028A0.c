#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4028A0(const char *a1, int a2, __int64 a3)
{
  int *v3; // rax
  __int64 v6; // [rsp+20h] [rbp-10h] BYREF
  const char *v7; // [rsp+28h] [rbp-8h] BYREF

  if ( (unsigned int)sub_4057D4(a1, &v6, &v7, 0LL) )
  {
    v3 = __errno_location();
    error(1, *v3, "%s", a1);
  }
  return sub_402793(v6, v7, a2, a3);
}
