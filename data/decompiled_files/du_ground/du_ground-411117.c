#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall fts_children(__int64 a1, int a2)
{
  __int64 v3; // r12
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // er8
  int v7; // er9
  int v8; // eax
  unsigned int v9; // [rsp+Ch] [rbp-24h]
  int fd; // [rsp+18h] [rbp-18h]
  int v11; // [rsp+1Ch] [rbp-14h]

  if ( a2 && a2 != 4096 )
  {
    *__errno_location() = 22;
    return 0LL;
  }
  v3 = *(_QWORD *)a1;
  *__errno_location() = 0;
  if ( (*(_DWORD *)(a1 + 72) & 0x2000) != 0 )
    return 0LL;
  if ( *(_WORD *)(v3 + 112) == 9 )
    return *(_QWORD *)(v3 + 16);
  if ( *(_WORD *)(v3 + 112) != 1 )
    return 0LL;
  if ( *(_QWORD *)(a1 + 8) )
    sub_4121CD(*(void **)(a1 + 8));
  if ( a2 == 4096 )
  {
    v8 = *(_DWORD *)(a1 + 72);
    BYTE1(v8) |= 0x10u;
    *(_DWORD *)(a1 + 72) = v8;
    v9 = 2;
  }
  else
  {
    v9 = 1;
  }
  if ( *(_QWORD *)(v3 + 88) || **(_BYTE **)(v3 + 48) == 47 || (*(_DWORD *)(a1 + 72) & 4) != 0 )
  {
    *(_QWORD *)(a1 + 8) = sub_411394(a1, v9);
    return *(_QWORD *)(a1 + 8);
  }
  fd = sub_41003F(a1, (int)".", v4, v5, v6, v7);
  if ( fd < 0 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    return 0LL;
  }
  *(_QWORD *)(a1 + 8) = sub_411394(a1, v9);
  if ( (*(_DWORD *)(a1 + 72) & 0x200) != 0 )
  {
    sub_40FFB2(a1, fd, 1);
  }
  else
  {
    if ( fchdir(fd) )
    {
      v11 = *__errno_location();
      close(fd);
      *__errno_location() = v11;
      return 0LL;
    }
    close(fd);
  }
  return *(_QWORD *)(a1 + 8);
}
