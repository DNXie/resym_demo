#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_404423(__int64 a1, int a2, _DWORD *a3)
{
  char *v3; // rax
  __int64 v4; // rax
  int v5; // edx
  char *v6; // rbx
  int *v7; // rax
  char *v9; // [rsp+20h] [rbp-B0h]
  struct stat stat_buf; // [rsp+30h] [rbp-A0h] BYREF

  v9 = sub_401DE6((const char **)a1);
  if ( (unsigned int)sub_40C6D0(*(_DWORD *)(a1 + 56), &stat_buf) )
  {
    sub_401F23(*(_DWORD *)(a1 + 56), (__int64)v9);
    *(_DWORD *)(a1 + 56) = -1;
    *(_DWORD *)(a1 + 60) = *__errno_location();
    return;
  }
  if ( (*(_DWORD *)(a1 + 48) & 0xF000) == 0x8000 && stat_buf.st_size < *(_QWORD *)(a1 + 8) )
  {
    v3 = gettext("%s: file truncated");
    error(0, 0, v3, v9);
    *a3 = a2;
    sub_40213B(*(_DWORD *)(a1 + 56), stat_buf.st_size, 0, (__int64)v9);
    *(_QWORD *)(a1 + 8) = stat_buf.st_size;
  }
  else if ( (*(_DWORD *)(a1 + 48) & 0xF000) == 0x8000 && stat_buf.st_size == *(_QWORD *)(a1 + 8) )
  {
    v4 = sub_401BF2((__int64)&stat_buf);
    if ( !(unsigned int)sub_401A8D(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), v4, v5) )
      return;
  }
  if ( *a3 != a2 )
  {
    if ( byte_610320 )
      sub_401F89(v9);
    *a3 = a2;
  }
  *(_QWORD *)(a1 + 8) += sub_401FCB((__int64)v9, *(_DWORD *)(a1 + 56), 0xFFFFFFFFFFFFFFFFLL);
  if ( fflush_unlocked(stdout) )
  {
    v6 = gettext("write error");
    v7 = __errno_location();
    error(1, *v7, v6);
  }
}
