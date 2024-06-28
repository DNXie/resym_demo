#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_403515(_QWORD *a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rdx

  sub_4032D5((__int64)a1);
  result = (unsigned __int8)byte_60B262;
  if ( byte_60B262 )
  {
    v2 = (int)sub_402FCF(a1);
    result = (unsigned __int64)a1;
    a1[3] = v2;
  }
  return result;
}
