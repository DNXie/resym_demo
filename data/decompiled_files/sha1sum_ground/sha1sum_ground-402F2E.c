#include "/share/binary_recovery/clang-parser/defs.hh"
_DWORD *__fastcall sub_402F2E(_DWORD *a1, _DWORD *a2)
{
  __int64 v2; // rax
  unsigned int v4; // [rsp+14h] [rbp-Ch]
  __int64 v5; // [rsp+18h] [rbp-8h]

  v4 = a1[7];
  if ( v4 > 0x37 )
    v2 = 32LL;
  else
    v2 = 16LL;
  v5 = v2;
  a1[5] += v4;
  if ( a1[5] < v4 )
    ++a1[6];
  a1[v2 + 6] = ((unsigned int)(*(__int64 *)(a1 + 5) >> 29) >> 24) | ((unsigned int)(*(__int64 *)(a1 + 5) >> 29) >> 8) & 0xFF00 | ((((unsigned __int16)(8 * a1[6]) | (a1[5] >> 29)) & 0xFF00) << 8) | ((unsigned int)(*(__int64 *)(a1 + 5) >> 29) << 24);
  a1[v2 + 7] = ((unsigned int)(8 * a1[5]) >> 24) | ((unsigned int)(8 * a1[5]) >> 8) & 0xFF00 | (((8
                                                                                                * (unsigned __int16)a1[5]) & 0xFF00) << 8) | (a1[5] << 27);
  memcpy((char *)a1 + v4 + 32, &unk_408460, 4 * v2 - v4 - 8);
  sub_4034EF(a1 + 8, 4 * v5, a1);
  return sub_402D9C(a1, a2);
}
