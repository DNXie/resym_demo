#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_407D73(__int64 a1, __int64 a2, int a3, const char *a4, int a5, int a6)
{
  bool v6; // al
  char *s1; // [rsp+0h] [rbp-D0h]
  char v10; // [rsp+2Fh] [rbp-A1h]
  unsigned int v11; // [rsp+30h] [rbp-A0h]
  int fildes; // [rsp+34h] [rbp-9Ch]
  int v13; // [rsp+38h] [rbp-98h]
  int v14; // [rsp+3Ch] [rbp-94h]
  struct stat stat_buf; // [rsp+40h] [rbp-90h] BYREF

  s1 = (char *)a4;
  v6 = a4 && !strcmp(a4, "..");
  v10 = v6;
  if ( (*(_DWORD *)(a1 + 72) & 4) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 72) & 0x200) != 0 && a3 >= 0 )
      close(a3);
    return 0LL;
  }
  if ( a3 < 0 )
  {
    if ( v10 )
    {
      if ( (*(_DWORD *)(a1 + 72) & 0x200) != 0 && (unsigned __int8)sub_40A83A(a1 + 96) != 1 )
      {
        v13 = sub_40A8D4(a1 + 96);
        v10 = 1;
        if ( v13 >= 0 )
        {
          a3 = v13;
          s1 = 0LL;
        }
      }
    }
  }
  fildes = a3;
  if ( a3 < 0 )
  {
    fildes = sub_405974(a1, (int)s1, (__int64)s1, (int)a4, a5, a6);
    if ( fildes < 0 )
      return 0xFFFFFFFFLL;
  }
  if ( (*(_DWORD *)(a1 + 72) & 2) == 0 && (!s1 || strcmp(s1, "..")) )
    goto LABEL_27;
  if ( !(unsigned int)sub_40BE70(fildes, &stat_buf) )
  {
    if ( *(_QWORD *)(a2 + 120) != stat_buf.st_dev || *(_QWORD *)(a2 + 128) != stat_buf.st_ino )
    {
      *__errno_location() = 2;
      v11 = -1;
      goto LABEL_30;
    }
LABEL_27:
    if ( (*(_DWORD *)(a1 + 72) & 0x200) != 0 )
    {
      sub_4058E7(a1, fildes, v10 == 0);
      return 0LL;
    }
    v11 = fchdir(fildes);
    goto LABEL_30;
  }
  v11 = -1;
LABEL_30:
  if ( a3 < 0 )
  {
    v14 = *__errno_location();
    close(fildes);
    *__errno_location() = v14;
  }
  return v11;
}
