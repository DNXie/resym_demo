#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_4017E7(unsigned __int64 a1, char a2)
{
  unsigned __int64 v3; // [rsp+4h] [rbp-8h]

  v3 = a1;
  if ( byte_607261 == 1 )
    return a1 + 1;
  switch ( a2 )
  {
    case 8:
      if ( a1 )
        v3 = a1 - 1;
      break;
    case 13:
      v3 = 0LL;
      break;
    case 9:
      v3 = (a1 & 0xFFFFFFFFFFFFFFF8LL) + 8;
      break;
    default:
      v3 = a1 + 1;
      break;
  }
  return v3;
}
