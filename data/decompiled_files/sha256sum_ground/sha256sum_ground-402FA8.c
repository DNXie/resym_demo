#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402FA8(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // [rsp+10h] [rbp-10h]
  __int64 v4; // [rsp+18h] [rbp-8h]

  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 > 0x37 )
    v1 = 32LL;
  else
    v1 = 16LL;
  v4 = v1;
  *(_DWORD *)(a1 + 32) += v3;
  if ( *(unsigned int *)(a1 + 32) < v3 )
    ++*(_DWORD *)(a1 + 36);
  sub_402E4C(
    (_DWORD *)(4 * (v1 - 2 + 12) + a1),
    ((unsigned int)(*(__int64 *)(a1 + 32) >> 29) >> 24) | ((unsigned int)(*(__int64 *)(a1 + 32) >> 29) >> 8) & 0xFF00 | ((((unsigned __int16)(8 * *(_DWORD *)(a1 + 36)) | (*(_DWORD *)(a1 + 32) >> 29)) & 0xFF00) << 8) | ((unsigned int)(*(__int64 *)(a1 + 32) >> 29) << 24));
  sub_402E4C(
    (_DWORD *)(4 * (v4 - 1 + 12) + a1),
    ((unsigned int)(8 * *(_DWORD *)(a1 + 32)) >> 24) | ((unsigned int)(8 * *(_DWORD *)(a1 + 32)) >> 8) & 0xFF00 | (((8 * (unsigned __int16)*(_DWORD *)(a1 + 32)) & 0xFF00) << 8) | (*(_DWORD *)(a1 + 32) << 27));
  memcpy((void *)(a1 + 48 + v3), &unk_40A300, 4 * v4 - v3 - 8);
  return sub_4037BF(a1 + 48, 4 * v4, a1);
}
