#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402254(_BYTE *a1)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = (unsigned __int8)*a1;
    if ( !(_BYTE)result )
      break;
    if ( *a1 == 92 )
      a1 += (int)sub_401E74((__int64)a1, 1);
    else
      putchar_unlocked((char)*a1);
    ++a1;
  }
  return result;
}
