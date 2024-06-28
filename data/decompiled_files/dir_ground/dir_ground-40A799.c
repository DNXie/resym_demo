#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_40A799(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  while ( 1 )
  {
    result = a1;
    if ( a1 >= a2 )
      break;
    if ( qword_61D710 && a2 / qword_61D710 > (a1 + 1) / qword_61D710 )
    {
      putchar_unlocked(9);
      a1 += qword_61D710 - a1 % qword_61D710;
    }
    else
    {
      putchar_unlocked(32);
      ++a1;
    }
  }
  return result;
}
