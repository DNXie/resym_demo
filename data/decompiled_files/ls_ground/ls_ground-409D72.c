#include "/share/binary_recovery/clang-parser/defs.hh"
bool __fastcall sub_409D72(char a1, __int16 a2, int a3)
{
  char v4; // [rsp+1Fh] [rbp-1h]

  v4 = sub_409C3D(a1, a2, a3);
  if ( v4 )
  {
    putchar_unlocked(v4);
    ++qword_61D7E0;
  }
  return v4 != 0;
}
