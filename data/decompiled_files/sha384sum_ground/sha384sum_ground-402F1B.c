#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402F1B(__int64 a1, __int64 a2)
{
  int i; // [rsp+14h] [rbp-Ch]

  for ( i = 0; i <= 7; ++i )
    sub_402F02(
      (_QWORD *)(8LL * i + a2),
      (*(_QWORD *)(a1 + 8LL * i) >> 24) & 0xFF0000LL | (*(_QWORD *)(a1 + 8LL * i) >> 8) & 0xFF000000LL | (*(_QWORD *)(a1 + 8LL * i) >> 40) & 0xFF00LL | HIBYTE(*(_QWORD *)(a1 + 8LL * i)) | ((*(_QWORD *)(a1 + 8LL * i) & 0xFF0000LL) << 24) | ((*(_QWORD *)(a1 + 8LL * i) & 0xFF000000LL) << 8) | ((*(_QWORD *)(a1 + 8LL * i) & 0xFF00LL) << 40) | (*(_QWORD *)(a1 + 8LL * i) << 56));
  return a2;
}
