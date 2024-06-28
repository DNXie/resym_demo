#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40247A(FILE *a1, unsigned int a2)
{
  while ( 1 )
  {
    if ( a2 == 32 )
    {
      ++dword_608284;
      goto LABEL_6;
    }
    if ( a2 != 9 )
      return a2;
    byte_613288 = 1;
    dword_608284 = 8 * (dword_608284 / 8 + 1);
LABEL_6:
    a2 = getc_unlocked(a1);
  }
}
