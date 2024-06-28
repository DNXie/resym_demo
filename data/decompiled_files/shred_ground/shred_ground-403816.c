#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403816(const char *a1, const char *a2, __int64 a3, _BYTE *a4, int a5, int a6)
{
  int v6; // edx
  int v7; // ecx
  int v8; // er8
  int v9; // er9
  char *v10; // rbx
  int *v11; // rax
  __int64 result; // rax
  char *v13; // rbx
  int *v14; // rax
  unsigned __int8 v17; // [rsp+2Bh] [rbp-15h]
  int fd; // [rsp+2Ch] [rbp-14h]

  fd = sub_404139((_DWORD)a1, 257, a3, (_DWORD)a4, a5, a6);
  if ( fd < 0 && *__errno_location() == 13 && *a4 && !chmod(a1, 0x80u) )
    fd = sub_404139((_DWORD)a1, 257, v6, v7, v8, v9);
  if ( fd >= 0 )
  {
    v17 = sub_402D8A(fd, (__int64)a2, a3, (__int64)a4);
    if ( close(fd) )
    {
      v13 = gettext("%s: failed to close");
      v14 = __errno_location();
      error(0, *v14, v13, a2);
      v17 = 0;
    }
    if ( v17 )
    {
      if ( a4[24] )
        v17 = sub_40344E(a1, a2, (__int64)a4);
    }
    result = v17;
  }
  else
  {
    v10 = gettext("%s: failed to open for writing");
    v11 = __errno_location();
    error(0, *v11, v10, a2);
    result = 0LL;
  }
  return result;
}
