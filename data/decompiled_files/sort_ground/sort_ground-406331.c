#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_406331(__int64 a1)
{
  int result; // eax
  __int64 v2; // [rsp+18h] [rbp-8h]

  v2 = qword_61DA08;
  while ( 1 )
  {
    result = sub_406079(a1, v2);
    if ( !v2 )
      break;
    v2 = *(_QWORD *)(v2 + 64);
    if ( !v2 )
    {
      result = (unsigned __int8)byte_61DA02 ^ 1;
      if ( byte_61DA02 == 1 )
        break;
      result = (unsigned __int8)byte_61DA01 ^ 1;
      if ( byte_61DA01 == 1 )
        break;
    }
  }
  return result;
}
