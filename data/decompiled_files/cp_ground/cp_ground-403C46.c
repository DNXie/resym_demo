#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403C46(__int64 a1)
{
  __int64 result; // rax

  sub_409AA1(a1);
  *(_BYTE *)(a1 + 20) = 1;
  *(_DWORD *)(a1 + 4) = 1;
  *(_BYTE *)(a1 + 21) = 0;
  *(_BYTE *)(a1 + 22) = 0;
  *(_BYTE *)(a1 + 23) = 0;
  *(_DWORD *)(a1 + 8) = 4;
  *(_BYTE *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 27) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 28) = 0;
  *(_BYTE *)(a1 + 31) = 0;
  *(_BYTE *)(a1 + 29) = 0;
  *(_BYTE *)(a1 + 30) = 0;
  *(_BYTE *)(a1 + 34) = 0;
  *(_BYTE *)(a1 + 35) = 0;
  *(_BYTE *)(a1 + 36) = 0;
  *(_BYTE *)(a1 + 38) = 0;
  *(_BYTE *)(a1 + 37) = 0;
  *(_BYTE *)(a1 + 32) = 1;
  *(_BYTE *)(a1 + 33) = 0;
  *(_BYTE *)(a1 + 39) = 0;
  *(_DWORD *)(a1 + 12) = 2;
  *(_BYTE *)(a1 + 41) = 0;
  *(_BYTE *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 44) = 0;
  *(_BYTE *)(a1 + 42) = 0;
  *(_BYTE *)(a1 + 43) = 0;
  *(_BYTE *)(a1 + 45) = getenv("POSIXLY_CORRECT") != 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 64) = 0LL;
  return result;
}
