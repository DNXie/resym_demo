#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4053FC(const char *a1)
{
  unsigned int v2; // [rsp+1Ch] [rbp-4h]

  v2 = rmdir(a1);
  if ( v2 && *__errno_location() == 20 )
    v2 = unlink(a1);
  return v2;
}
