#include "/share/binary_recovery/clang-parser/defs.hh"
signed __int64 sub_4018B0()
{
  signed __int64 result; // rax

  result = &unk_60E26F - &unk_60E268;
  if ( (unsigned __int64)(&unk_60E26F - &unk_60E268) > 0xE )
    result = 0LL;
  return result;
}
