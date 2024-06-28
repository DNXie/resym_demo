#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_4029F8(__int64 *a1, const char *a2)
{
  unsigned int v2; // eax

  sub_40297B(*a1);
  if ( byte_61B3FC )
  {
    putchar_unlocked(9);
    sub_4028A5(qword_61B410, a1[1], a1[2]);
  }
  if ( byte_61B3F4 )
    v2 = 0;
  else
    v2 = 10;
  printf("\t%s%c", a2, v2);
  return fflush_unlocked(stdout);
}
