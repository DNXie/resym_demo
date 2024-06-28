#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_414017(int a1, char *a2, int a3, __uid_t a4, __gid_t a5, int a6, int a7)
{
  unsigned int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v15; // [rsp+2Ch] [rbp-A4h]
  int v16; // [rsp+30h] [rbp-A0h]
  __mode_t v17; // [rsp+34h] [rbp-9Ch]
  int mode; // [rsp+38h] [rbp-98h]
  int v19; // [rsp+3Ch] [rbp-94h]
  struct stat stat_buf; // [rsp+40h] [rbp-90h] BYREF

  if ( a1 >= 0 )
    v7 = sub_419BD0(a1, &stat_buf);
  else
    v7 = sub_419BC0(a2, &stat_buf);
  v15 = v7;
  if ( !v7 )
  {
    v17 = stat_buf.st_mode;
    if ( (stat_buf.st_mode & 0xF000) == 0x4000 )
    {
      v16 = 0;
      if ( a4 != -1 && stat_buf.st_uid != a4 || a5 != -1 && stat_buf.st_gid != a5 )
      {
        if ( a1 < 0 )
          v8 = a3 == -1 ? chown(a2, a4, a5) : lchown(a2, a4, a5);
        else
          v8 = fchown(a1, a4, a5);
        v15 = v8;
        if ( !v8 && (v17 & 0x49) != 0 )
          v16 = v17 & 0xC00;
      }
      if ( !v15 && (a7 & (v16 | v17 ^ a6)) != 0 )
      {
        mode = a6 | (unsigned __int16)v17 & (unsigned __int16)~(_WORD)a7 & 0xFFF;
        if ( a1 < 0 )
          v9 = chmod(a2, mode);
        else
          v9 = fchmod(a1, mode);
        v15 = v9;
      }
    }
    else
    {
      *__errno_location() = 20;
      v15 = -1;
    }
  }
  if ( a1 >= 0 )
  {
    if ( v15 )
    {
      v19 = *__errno_location();
      close(a1);
      *__errno_location() = v19;
    }
    else
    {
      v15 = close(a1);
    }
  }
  return v15;
}
