#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_40AC60()
{
  __int64 v1; // [rsp+8h] [rbp-8h]

  v1 = sub_40B145(0LL, 0LL);
  if ( !v1 && *__errno_location() == 12 )
    sub_40AC2B();
  return v1;
}
