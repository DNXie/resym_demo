#include "/share/binary_recovery/clang-parser/defs.hh"
signed __int64 sub_401A20()
{
  signed __int64 result; // rax

  result = &unk_60F28F - &unk_60F288;
  if ( (unsigned __int64)(&unk_60F28F - &unk_60F288) > 0xE )
    result = 0LL;
  return result;
}
