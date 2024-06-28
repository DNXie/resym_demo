#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4031C1(__int128 *a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // [rsp+10h] [rbp-10h]
  __int64 v4; // [rsp+18h] [rbp-8h]

  v3 = *((_QWORD *)a1 + 10);
  if ( v3 > 0x6F )
    v1 = 16LL;
  else
    v1 = 8LL;
  v4 = v1 * 2;
  *((_QWORD *)a1 + 8) += v3;
  if ( *((_QWORD *)a1 + 8) < v3 )
    ++*((_QWORD *)a1 + 9);
  sub_402F50(
    (_QWORD *)&a1[v1 + 4] + 1,
    ((unsigned __int64)(a1[4] >> 61) >> 24) & 0xFF0000 | ((unsigned __int64)(a1[4] >> 61) >> 8) & 0xFF000000 | ((unsigned __int64)(a1[4] >> 61) >> 40) & 0xFF00 | ((unsigned __int64)(a1[4] >> 61) >> 56) | ((((8 * (unsigned int)*((_QWORD *)a1 + 9)) | (*((_QWORD *)a1 + 8) >> 61)) & 0xFF0000) << 24) | ((((8 * (unsigned int)*((_QWORD *)a1 + 9)) | (*((_QWORD *)a1 + 8) >> 61)) & 0xFF000000) << 8) | ((unsigned __int64)((unsigned __int16)((8 * *((_QWORD *)a1 + 9)) | (*((_QWORD *)a1 + 8) >> 61)) & 0xFF00) << 40) | ((unsigned __int64)(a1[4] >> 61) << 56));
  sub_402F50(
    (_QWORD *)a1 + v4 + 10,
    ((unsigned __int64)(8LL * *((_QWORD *)a1 + 8)) >> 24) & 0xFF0000 | ((unsigned __int64)(8LL * *((_QWORD *)a1 + 8)) >> 8) & 0xFF000000 | ((unsigned int)(*((_QWORD *)a1 + 8) >> 29) >> 8) & 0xFF00 | ((unsigned __int64)(8LL * *((_QWORD *)a1 + 8)) >> 56) | ((unsigned __int64)((8 * (unsigned int)*((_QWORD *)a1 + 8)) & 0xFF0000) << 24) | ((unsigned __int64)((8 * (unsigned int)*((_QWORD *)a1 + 8)) & 0xFF000000) << 8) | ((unsigned __int64)((unsigned __int16)(8 * *((_QWORD *)a1 + 8)) & 0xFF00) << 40) | (*((_QWORD *)a1 + 8) << 59));
  memcpy((char *)a1 + v3 + 88, &unk_40E000, 8 * v4 - v3 - 16);
  return sub_403B48((char *)a1 + 88, 8 * v4, a1);
}
