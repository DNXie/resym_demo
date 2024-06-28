#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40B21C(__int64 a1, const char *a2)
{
  char *v3; // rax

  if ( a2 && *a2 )
    return sub_40B1C0(a1, a2);
  v3 = getenv("VERSION_CONTROL");
  return sub_40B1C0((__int64)"$VERSION_CONTROL", v3);
}
