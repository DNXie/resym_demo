#include "/share/binary_recovery/clang-parser/defs.hh"
signed __int64 sub_401A90()
{
  signed __int64 result; // rax

  result = &unk_60B2AF - &unk_60B2A8;
  if ( (unsigned __int64)(&unk_60B2AF - &unk_60B2A8) > 0xE )
    result = 0LL;
  return result;
}
