#include "/share/binary_recovery/clang-parser/defs.hh"
signed __int64 sub_4014B0()
{
  signed __int64 result; // rax

  result = &unk_6071FF - &unk_6071F8;
  if ( (unsigned __int64)(&unk_6071FF - &unk_6071F8) > 0xE )
    result = 0LL;
  return result;
}
