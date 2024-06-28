#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401D03(__int64 a1)
{
  __int64 result; // rax

  sub_402F52(a1, 2LL);
  byte_613288 = 0;
  dword_613294 = 0;
  dword_613298 = sub_4023AA(a1);
  while ( 1 )
  {
    result = sub_401E22(a1);
    if ( !(_BYTE)result )
      break;
    sub_4027F8();
    sub_402B3A(qword_613280);
  }
  return result;
}
