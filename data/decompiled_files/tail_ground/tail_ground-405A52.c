#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405A52(__int64 a1, size_t a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // er8
  int v6; // er9
  bool v7; // al
  char *v8; // rax
  __int64 v9; // r12
  char *v10; // rbx
  int *v11; // rax
  char *v12; // rax
  char *v13; // rax
  char *v14; // rax
  __int64 v15; // r12
  char *v16; // rbx
  int *v17; // rax
  char *v18; // rbx
  char *v19; // rax
  char *v20; // rax
  int v21; // eax
  char *v22; // rax
  char *v23; // rax
  __int64 v24; // r12
  char *v25; // rbx
  int *v26; // rax
  unsigned __int8 v28; // [rsp+12h] [rbp-AEh]
  bool v29; // [rsp+13h] [rbp-ADh]
  int fd; // [rsp+14h] [rbp-ACh]
  signed __int64 v31; // [rsp+18h] [rbp-A8h] BYREF
  struct stat stat_buf; // [rsp+20h] [rbp-A0h] BYREF

  v2 = strcmp(*(const char **)a1, "-");
  v29 = v2 == 0;
  if ( v2 )
  {
    fd = sub_40732E(*(_QWORD *)a1, 0, v3, v4, v5, v6);
  }
  else
  {
    byte_610328 = 1;
    fd = 0;
  }
  v7 = byte_61031C != 1 || fd != -1;
  *(_BYTE *)(a1 + 54) = v7;
  if ( fd == -1 )
  {
    if ( byte_61031E )
    {
      *(_DWORD *)(a1 + 56) = -1;
      *(_DWORD *)(a1 + 60) = *__errno_location();
      *(_BYTE *)(a1 + 52) = 0;
      *(_QWORD *)(a1 + 40) = 0LL;
      *(_QWORD *)(a1 + 32) = 0LL;
    }
    v8 = sub_401DE6((const char **)a1);
    v9 = sub_408FA1(v8);
    v10 = gettext("cannot open %s for reading");
    v11 = __errno_location();
    error(0, *v11, v10, v9);
    v28 = 0;
  }
  else
  {
    if ( byte_610320 )
    {
      v12 = sub_401DE6((const char **)a1);
      sub_401F89(v12);
    }
    v13 = sub_401DE6((const char **)a1);
    v28 = sub_4059F3((__int64)v13, fd, a2, &v31);
    if ( byte_61031E )
    {
      *(_DWORD *)(a1 + 60) = v28 - 1;
      if ( (int)sub_40C6D0(fd, &stat_buf) >= 0 )
      {
        if ( (stat_buf.st_mode & 0xF000) != 0x8000
          && (stat_buf.st_mode & 0xF000) != 4096
          && (stat_buf.st_mode & 0xF000) != 49152
          && (stat_buf.st_mode & 0xF000) != 0x2000 )
        {
          v18 = sub_401DE6((const char **)a1);
          v19 = gettext("%s: cannot follow end of this type of file; giving up on this name");
          error(0, 0, v19, v18);
          v28 = 0;
          *(_DWORD *)(a1 + 60) = -1;
          *(_BYTE *)(a1 + 52) = 1;
        }
      }
      else
      {
        v28 = 0;
        *(_DWORD *)(a1 + 60) = *__errno_location();
        v14 = sub_401DE6((const char **)a1);
        v15 = sub_408FA1(v14);
        v16 = gettext("error reading %s");
        v17 = __errno_location();
        error(0, *v17, v16, v15);
      }
      if ( v28 != 1 )
      {
        v20 = sub_401DE6((const char **)a1);
        sub_401F23(fd, (__int64)v20);
        *(_DWORD *)(a1 + 56) = -1;
      }
      else
      {
        if ( v29 )
          v21 = -1;
        else
          v21 = 1;
        sub_401E87(a1, fd, v31, (__int64)&stat_buf, v21);
        v22 = sub_401DE6((const char **)a1);
        *(_BYTE *)(a1 + 53) = sub_4031D8(fd, (__int64)v22);
      }
    }
    else if ( !v29 && close(fd) )
    {
      v23 = sub_401DE6((const char **)a1);
      v24 = sub_408FA1(v23);
      v25 = gettext("error reading %s");
      v26 = __errno_location();
      error(0, *v26, v25, v24);
      v28 = 0;
    }
  }
  return v28;
}
