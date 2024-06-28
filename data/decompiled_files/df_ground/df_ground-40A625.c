#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40A625(const char *a1, __int64 a2, __int64 a3)
{
  struct statfs v5; // [rsp+20h] [rbp-80h] BYREF

  if ( statfs(a1, &v5) < 0 )
    return 0xFFFFFFFFLL;
  *(_QWORD *)a3 = v5.f_bsize;
  *(_QWORD *)(a3 + 8) = v5.f_blocks;
  *(_QWORD *)(a3 + 16) = v5.f_bfree;
  *(_QWORD *)(a3 + 24) = v5.f_bavail | -(__int64)(v5.f_bavail & 0x8000000000000000LL);
  *(_BYTE *)(a3 + 32) = (v5.f_bavail & 0x8000000000000000LL) != 0LL;
  *(_QWORD *)(a3 + 40) = v5.f_files;
  *(_QWORD *)(a3 + 48) = v5.f_ffree;
  return 0LL;
}
