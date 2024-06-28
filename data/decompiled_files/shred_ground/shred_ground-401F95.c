#include "/share/binary_recovery/clang-parser/defs.hh"
size_t __fastcall sub_401F95(__int16 a1, _BYTE *a2, size_t a3)
{
  size_t result; // rax
  unsigned int v5; // [rsp+24h] [rbp-Ch]
  size_t n; // [rsp+28h] [rbp-8h]
  size_t na; // [rsp+28h] [rbp-8h]

  v5 = ((a1 & 0xFFF) << 12) | a1 & 0xFFF;
  *a2 = v5 >> 4;
  a2[1] = BYTE1(v5);
  a2[2] = a1;
  for ( n = 3LL; a3 >> 1 > n; n *= 2LL )
    memcpy(&a2[n], a2, n);
  if ( n < a3 )
    memcpy(&a2[n], a2, a3 - n);
  result = a1 & 0x1000;
  if ( (a1 & 0x1000) != 0 )
  {
    for ( na = 0LL; ; na += 512LL )
    {
      result = na;
      if ( na >= a3 )
        break;
      a2[na] ^= 0x80;
    }
  }
  return result;
}
