#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404484(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    result = a1[1];
  else
    result = (__int64)(a1[5] - a1[4]) >> 3;
  return result;
}
