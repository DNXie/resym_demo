#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_40341C(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rax

  if ( (unsigned int)sub_406C9F(a3, 0LL, 10LL, a1, locale) )
  {
    v3 = gettext("%s: integer expected after delimiter");
    error(1, 0, v3, a2);
  }
}
