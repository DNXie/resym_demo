#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_404381()
{
  __int64 result; // rax
  int v1; // [rsp+4h] [rbp-Ch]
  int v2; // [rsp+8h] [rbp-8h]
  int v3; // [rsp+Ch] [rbp-4h]

  v1 = dword_610394;
  v2 = dword_61038C + dword_610394;
  while ( v2 - v1 > 1 )
  {
    v3 = dword_610258 - v1 % dword_610258 + v1;
    if ( v3 > v2 )
      break;
    putchar_unlocked(byte_610254);
    v1 = v3;
  }
  while ( ++v1 <= v2 )
    putchar_unlocked(32);
  result = (unsigned int)v2;
  dword_610394 = v2;
  dword_61038C = 0;
  return result;
}
