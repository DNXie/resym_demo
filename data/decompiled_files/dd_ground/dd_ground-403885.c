#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403885(unsigned __int64 a1)
{
  __int64 result; // rax

  qword_60E3D0 += a1;
  result = qword_60E3D0;
  if ( qword_60E3D0 < a1 )
    byte_60E3D8 = 1;
  return result;
}
