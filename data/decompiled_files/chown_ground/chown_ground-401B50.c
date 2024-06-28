#include "/share/binary_recovery/clang-parser/defs.hh"
signed __int64 sub_401B50()
{
  signed __int64 result; // rax

  result = &unk_60F2B7 - &unk_60F2B0;
  if ( (unsigned __int64)(&unk_60F2B7 - &unk_60F2B0) > 0xE )
    result = 0LL;
  return result;
}
