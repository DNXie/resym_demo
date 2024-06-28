#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405168(__int64 a1, size_t a2, __int64 a3, size_t a4)
{
  unsigned int v7; // [rsp+28h] [rbp-8h]
  int v8; // [rsp+2Ch] [rbp-4h]

  v7 = sub_405841(a1, a2, a3, a4);
  v8 = *__errno_location();
  if ( v8 )
    sub_405095(v8, a1, a2, a3, a4);
  return v7;
}
