#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_404537(signed __int8 a1)
{
  const unsigned __int16 *v2; // rbx

  if ( byte_610389 )
  {
    if ( a1 == 32 )
      return ++dword_61038C;
    if ( dword_61038C > 0 )
      sub_404381();
    v2 = *__ctype_b_loc();
    if ( (v2[(unsigned __int8)sub_401A8D(a1)] & 0x4000) != 0 )
    {
      ++dword_610394;
    }
    else if ( a1 == 8 )
    {
      --dword_610394;
    }
  }
  return putchar_unlocked(a1);
}
