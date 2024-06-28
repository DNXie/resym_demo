#include "/share/binary_recovery/clang-parser/defs.hh"
signed __int64 sub_401480()
{
  signed __int64 result; // rax

  result = &unk_6061FF - &unk_6061F8;
  if ( (unsigned __int64)(&unk_6061FF - &unk_6061F8) > 0xE )
    result = 0LL;
  return result;
}
