#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_409A5C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // [rsp+3Ch] [rbp-4h]

  v6 = sub_40D2AD(a1, a2, a3, a4, a5);
  if ( v6 < 0 && *__errno_location() == 12 )
    sub_4099EE();
  return (unsigned int)v6;
}
