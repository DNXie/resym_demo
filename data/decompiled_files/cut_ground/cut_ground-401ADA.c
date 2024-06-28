#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401ADA(unsigned __int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(qword_60B2C0 + (a1 >> 3)) | (unsigned int)(1 << (a1 & 7));
  *(_BYTE *)((a1 >> 3) + qword_60B2C0) = *(_BYTE *)(qword_60B2C0 + (a1 >> 3)) | (1 << (a1 & 7));
  return result;
}
