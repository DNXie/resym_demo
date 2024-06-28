#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_4022F0(__int64 a1)
{
  char *v1; // rbx
  char *v2; // rax

  v1 = sub_401B3F(a1);
  v2 = gettext("system boot");
  return sub_401BAC(-1, (__int64)&locale, 32, -1, (__int64)v2, (__int64)v1, &locale, &locale, (__int64)&locale, &locale);
}
