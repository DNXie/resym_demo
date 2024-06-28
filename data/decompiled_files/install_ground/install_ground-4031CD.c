#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4031CD(__int64 a1, const char *a2, __int64 a3)
{
  unsigned int v5; // [rsp+2Ch] [rbp-4h]

  v5 = mkdir(a2, 0x1EDu);
  if ( !v5 )
    sub_40316B(a1, a3);
  return v5;
}
