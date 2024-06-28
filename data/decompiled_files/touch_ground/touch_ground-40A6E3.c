#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40A6E3(unsigned int *a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 result; // rax

  *((_QWORD *)a1 + 1) = 0LL;
  *a1 = sub_40C371((unsigned int)".", 0, a3, a4, a5, a6);
  if ( (*a1 & 0x80000000) == 0 )
  {
    sub_40C2D0(*a1, 1LL);
    result = 0LL;
  }
  else
  {
    *((_QWORD *)a1 + 1) = sub_40B9ED(0LL, 0LL);
    if ( *((_QWORD *)a1 + 1) )
      result = 0LL;
    else
      result = 0xFFFFFFFFLL;
  }
  return result;
}
