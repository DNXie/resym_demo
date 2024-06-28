#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4040D2(int a1)
{
  __int64 result; // rax
  int v2; // [rsp+1Ch] [rbp-4h]

  v2 = dword_610394;
  if ( byte_610389 )
  {
    result = (unsigned int)(a1 - dword_610394);
    dword_61038C = a1 - dword_610394;
  }
  else
  {
    while ( ++v2 <= a1 )
      putchar_unlocked(32);
    result = (unsigned int)a1;
    dword_610394 = a1;
  }
  return result;
}
