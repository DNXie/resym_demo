#include "/share/binary_recovery/clang-parser/defs.hh"
signed __int64 sub_401E20()
{
  signed __int64 result; // rax

  result = &unk_60C4AF - &unk_60C4A8;
  if ( (unsigned __int64)(&unk_60C4AF - &unk_60C4A8) > 0xE )
    result = 0LL;
  return result;
}
