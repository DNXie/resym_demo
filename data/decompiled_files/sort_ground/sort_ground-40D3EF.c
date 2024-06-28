#include "/share/binary_recovery/clang-parser/defs.hh"
_DWORD *__fastcall sub_40D3EF(int *a1, _DWORD *a2)
{
  __int64 v2; // rax
  unsigned int v4; // [rsp+14h] [rbp-Ch]
  __int64 v5; // [rsp+18h] [rbp-8h]

  v4 = a1[6];
  if ( v4 > 0x37 )
    v2 = 32LL;
  else
    v2 = 16LL;
  v5 = v2;
  a1[4] += v4;
  if ( a1[4] < v4 )
    ++a1[5];
  a1[v2 + 5] = 8 * a1[4];
  a1[v2 + 6] = *((__int64 *)a1 + 2) >> 29;
  memcpy((char *)a1 + v4 + 28, &unk_419260, 4 * v2 - v4 - 8);
  sub_40D911(a1 + 7, 4 * v5, a1);
  return sub_40D372(a1, a2);
}
