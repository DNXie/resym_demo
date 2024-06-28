#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401AA7(const char *a1, const char *a2)
{
  char *v2; // rax
  __int64 v4; // [rsp+18h] [rbp-8h] BYREF

  if ( (unsigned int)sub_4059E9(a1, 0LL, 10LL, &v4, &locale) > 1 )
  {
    v2 = gettext(a2);
    error(1, 0, "%s: %s", a1, v2);
  }
  return v4;
}
