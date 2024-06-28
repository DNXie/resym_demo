#include "/share/binary_recovery/clang-parser/defs.hh"
size_t __fastcall sub_40A1D5(__int64 a1)
{
  if ( byte_61D6C1 != 1 )
  {
    byte_61D6C1 = 1;
    sub_409A29();
  }
  return fwrite_unlocked(*(const void **)(a1 + 8), *(_QWORD *)a1, 1uLL, stdout);
}
