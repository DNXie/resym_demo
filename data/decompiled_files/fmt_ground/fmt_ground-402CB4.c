#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402CB4(int a1)
{
  int v1; // eax
  __int64 result; // rax
  int v3; // [rsp+18h] [rbp-8h]
  int v4; // [rsp+1Ch] [rbp-4h]

  v3 = dword_608288 + a1;
  if ( byte_613288 )
  {
    v1 = dword_608288 + a1;
    if ( v3 < 0 )
      v1 = v3 + 7;
    v4 = 8 * (v1 >> 3);
    if ( dword_608288 + 1 < v4 )
    {
      while ( dword_608288 < v4 )
      {
        putchar_unlocked(9);
        dword_608288 = 8 * (dword_608288 / 8 + 1);
      }
    }
  }
  while ( 1 )
  {
    result = (unsigned int)dword_608288;
    if ( dword_608288 >= v3 )
      break;
    putchar_unlocked(32);
    ++dword_608288;
  }
  return result;
}
