#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402837(int a1, const char *a2, __int64 a3, __uid_t a4, __gid_t a5, int a6, int a7)
{
  __int64 result; // rax
  unsigned int v12; // [rsp+20h] [rbp-A0h]
  int oflag; // [rsp+24h] [rbp-9Ch]
  int fildes; // [rsp+28h] [rbp-98h]
  int v15; // [rsp+2Ch] [rbp-94h]
  struct stat stat_buf; // [rsp+30h] [rbp-90h] BYREF

  v12 = 2;
  oflag = 2304;
  if ( a6 == -1 && a7 == -1 )
    return 5LL;
  if ( (*(_DWORD *)(a3 + 24) & 0xF000) != 0x8000 )
  {
    if ( (*(_DWORD *)(a3 + 24) & 0xF000) != 0x4000 )
      return 5LL;
    oflag = 67840;
  }
  fildes = openat(a1, a2, oflag);
  if ( fildes < 0 )
  {
    if ( *__errno_location() != 13
      || (*(_DWORD *)(a3 + 24) & 0xF000) != 0x8000
      || (fildes = openat(a1, a2, oflag | 1), fildes < 0) )
    {
      if ( *__errno_location() == 13 )
        result = 5LL;
      else
        result = 6LL;
      return result;
    }
  }
  if ( (unsigned int)sub_40B2E0(fildes, &stat_buf) )
  {
    v12 = 6;
LABEL_30:
    v15 = *__errno_location();
    close(fildes);
    *__errno_location() = v15;
    return v12;
  }
  if ( *(_QWORD *)(a3 + 8) != stat_buf.st_ino || *(_QWORD *)a3 != stat_buf.st_dev )
  {
    v12 = 4;
    goto LABEL_30;
  }
  if ( a6 != -1 && stat_buf.st_uid != a6 || a7 != -1 && stat_buf.st_gid != a7 )
    goto LABEL_30;
  if ( fchown(fildes, a4, a5) )
  {
    v12 = 6;
    goto LABEL_30;
  }
  if ( close(fildes) )
    LODWORD(result) = 6;
  else
    LODWORD(result) = 2;
  return (unsigned int)result;
}
