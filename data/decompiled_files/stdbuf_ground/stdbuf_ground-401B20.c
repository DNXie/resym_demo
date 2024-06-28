#include "/share/binary_recovery/clang-parser/defs.hh"
signed __int64 sub_401B20()
{
  signed __int64 result; // rax

  result = &unk_6122AF - &unk_6122A8;
  if ( (unsigned __int64)(&unk_6122AF - &unk_6122A8) > 0xE )
    result = 0LL;
  return result;
}
