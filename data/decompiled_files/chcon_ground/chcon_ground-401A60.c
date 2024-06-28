#include "/share/binary_recovery/clang-parser/defs.hh"
signed __int64 sub_401A60()
{
  signed __int64 result; // rax

  result = &unk_61028F - &unk_610288;
  if ( (unsigned __int64)(&unk_61028F - &unk_610288) > 0xE )
    result = 0LL;
  return result;
}
