#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4049DE(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // [rsp+2Ch] [rbp-4h]

  v4 = sub_404AFF(a1, a2, a3);
  if ( v4 == -1 && *__errno_location() == 12 )
    sub_4049A9();
  return v4;
}
