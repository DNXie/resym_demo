#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402214(_BYTE *a1, _DWORD *a2, __int64 a3, __int64 a4, unsigned int a5, void (__fastcall *a6)(_BYTE *, __int64), int a7, int a8, int a9, bool a10)
{
  int v10; // eax
  bool v12; // al
  int v13; // eax
  bool v14; // al
  const char *v15; // rax
  __int64 v16; // r12
  const char *v17; // rax
  char *v18; // rbx
  int v19; // eax
  __int64 v20; // rbx
  char *v21; // rax
  bool v27; // [rsp+44h] [rbp-CCh]
  bool v28; // [rsp+47h] [rbp-C9h]
  int errnum; // [rsp+48h] [rbp-C8h]
  unsigned int v30; // [rsp+4Ch] [rbp-C4h]
  unsigned int mode; // [rsp+50h] [rbp-C0h]
  int v32; // [rsp+54h] [rbp-BCh]
  int v33; // [rsp+58h] [rbp-B8h]
  __int64 v34; // [rsp+60h] [rbp-B0h]
  struct stat stat_buf; // [rsp+70h] [rbp-A0h] BYREF

  if ( *a1 == 47 )
    v10 = 0;
  else
    v10 = sub_4021F1(a2);
  errnum = v10;
  if ( v10 )
    goto LABEL_64;
  v34 = 0LL;
  v30 = 4;
  if ( a3 )
  {
    v34 = sub_405A0B(a1, a2, a3, a4);
    if ( v34 < 0 )
    {
      if ( v34 < -1 )
        return 1LL;
      errnum = *__errno_location();
    }
  }
  if ( v34 < 0 )
  {
LABEL_64:
    v20 = sub_402D8F(a1);
    v21 = gettext("cannot create directory %s");
    error(0, errnum, v21, v20);
    return 0LL;
  }
  v12 = a8 == -1 && a9 == -1;
  v27 = v12;
  mode = a5;
  if ( v12 )
  {
    if ( a7 & 0xC00 | a5 & 0x200 )
      mode = a5 & 0xFFFFFFED;
  }
  else
  {
    mode = a5 & 0xFFFFFFC0;
  }
  if ( mkdir(&a1[v34], mode) )
  {
    errnum = *__errno_location();
    mode = -1;
  }
  else
  {
    a6(a1, a4);
    a10 = v27 && (a7 & 0xC00 | a5 & 0x200) == 0;
    if ( (a5 & 0x100) != 0 )
      v13 = 3;
    else
      v13 = 1;
    v30 = v13 | 4;
  }
  if ( a10 )
  {
    if ( !errnum
      || errnum != 2 && a3 && !(unsigned int)sub_40BBD0(&a1[v34], &stat_buf) && (stat_buf.st_mode & 0xF000) == 0x4000 )
    {
      return 1LL;
    }
    goto LABEL_64;
  }
  v32 = sub_404662(a2, &a1[v34], v30, &stat_buf);
  if ( v32 < -1 )
    return 1LL;
  v33 = *__errno_location();
  v14 = !errnum && (v32 && (a5 & 0x40) != 0 || SLODWORD(stat_buf.st_dev) < 0 && (a5 & 0x100) != 0);
  v28 = v14;
  if ( v14 )
  {
    if ( SLODWORD(stat_buf.st_dev) >= 0 )
      close(stat_buf.st_dev);
  }
  else
  {
    if ( v32 )
      LODWORD(v15) = v34 + (_DWORD)a1;
    else
      v15 = ".";
    if ( !(unsigned int)sub_405BBD(stat_buf.st_dev, (_DWORD)v15, mode, a8, a9, a5, a7) )
      return 1LL;
  }
  if ( errnum && (errnum == 2 || !a3 || *__errno_location() == 20) )
    goto LABEL_64;
  v16 = sub_402D8F(a1);
  if ( v27 )
    v17 = "cannot change permissions of %s";
  else
    v17 = "cannot change owner and permissions of %s";
  v18 = gettext(v17);
  if ( !v28 )
  {
    v19 = *__errno_location();
  }
  else if ( v32 && (a5 & 0x40) != 0 )
  {
    v19 = v33;
  }
  else
  {
    v19 = HIDWORD(stat_buf.st_dev);
  }
  error(0, v19, v18, v16);
  return 0LL;
}
