#include "/share/binary_recovery/clang-parser/defs.hh"
signed __int64 sub_401B40()
{
  signed __int64 result; // rax

  result = &unk_60E2D7 - &unk_60E2D0;
  if ( (unsigned __int64)(&unk_60E2D7 - &unk_60E2D0) > 0xE )
    result = 0LL;
  return result;
}
