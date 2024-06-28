#include "/share/binary_recovery/clang-parser/defs.hh"
signed __int64 sub_4011F0()
{
  signed __int64 result; // rax

  result = &unk_6061BF - &unk_6061B8;
  if ( (unsigned __int64)(&unk_6061BF - &unk_6061B8) > 0xE )
    result = 0LL;
  return result;
}
