#include "/share/binary_recovery/clang-parser/defs.hh"
signed __int64 sub_401EC0()
{
  signed __int64 result; // rax

  result = &unk_6104CF - &unk_6104C8;
  if ( (unsigned __int64)(&unk_6104CF - &unk_6104C8) > 0xE )
    result = 0LL;
  return result;
}
