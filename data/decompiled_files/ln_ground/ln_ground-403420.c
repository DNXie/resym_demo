#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403420(__int64 a1, _BYTE *a2)
{
  char *v3; // rax

  if ( a2 && *a2 )
    return sub_4033C4(a1, a2);
  v3 = getenv("VERSION_CONTROL");
  return sub_4033C4((__int64)"$VERSION_CONTROL", v3);
}
