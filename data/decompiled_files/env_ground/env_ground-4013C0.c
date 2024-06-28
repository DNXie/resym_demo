#include "/share/binary_recovery/clang-parser/defs.hh"
signed __int64 sub_4013C0()
{
  signed __int64 result; // rax

  result = &unk_6061DF - &unk_6061D8;
  if ( (unsigned __int64)(&unk_6061DF - &unk_6061D8) > 0xE )
    result = 0LL;
  return result;
}
