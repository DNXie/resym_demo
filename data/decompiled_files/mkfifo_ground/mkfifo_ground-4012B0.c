#include "/share/binary_recovery/clang-parser/defs.hh"
signed __int64 sub_4012B0()
{
  signed __int64 result; // rax

  result = &unk_6061CF - &unk_6061C8;
  if ( (unsigned __int64)(&unk_6061CF - &unk_6061C8) > 0xE )
    result = 0LL;
  return result;
}
