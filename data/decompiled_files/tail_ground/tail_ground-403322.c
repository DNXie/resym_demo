#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_403322(__int64 a1, unsigned __int8 a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // er8
  int v5; // er9
  int v6; // eax
  int v7; // eax
  bool v8; // al
  char *v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
  char *v12; // rbx
  int *v13; // rax
  char *v14; // rax
  __int64 v15; // rbx
  char *v16; // rax
  char *v17; // rax
  char *v18; // rax
  __int64 v19; // rbx
  char *v20; // rax
  char *v21; // rax
  char *v22; // rax
  char *v23; // rax
  __int64 v24; // rbx
  char *v25; // rax
  char *v26; // rax
  __int64 v27; // rbx
  char *v28; // rax
  char *v29; // rax
  char *v30; // rax
  char *v31; // rax
  int v32; // eax
  char *v33; // rax
  char v34; // [rsp+14h] [rbp-ACh]
  char v35; // [rsp+15h] [rbp-ABh]
  bool v36; // [rsp+16h] [rbp-AAh]
  char v37; // [rsp+17h] [rbp-A9h]
  int v38; // [rsp+18h] [rbp-A8h]
  int fildes; // [rsp+1Ch] [rbp-A4h]
  struct stat stat_buf; // [rsp+20h] [rbp-A0h] BYREF

  v34 = 1;
  v2 = strcmp(*(const char **)a1, "-");
  v36 = v2 == 0;
  v37 = *(_BYTE *)(a1 + 54);
  v38 = *(_DWORD *)(a1 + 60);
  if ( v2 )
  {
    if ( a2 )
      v7 = 0;
    else
      v7 = 2048;
    v6 = sub_40732E(*(_QWORD *)a1, v7, *(_QWORD *)a1, v3, v4, v5);
  }
  else
  {
    v6 = 0;
  }
  fildes = v6;
  if ( !sub_401DB6(a1) )
    __assert_fail("valid_file_spec (f)", "../../src/src/tail.c", 0x3B1u, "recheck");
  v8 = byte_61031C != 1 || fildes != -1;
  *(_BYTE *)(a1 + 54) = v8;
  if ( fildes == -1 || (int)sub_40C6D0(fildes, &stat_buf) < 0 )
  {
    v34 = 0;
    *(_DWORD *)(a1 + 60) = *__errno_location();
    if ( *(_BYTE *)(a1 + 54) != 1 )
    {
      if ( v37 )
      {
        v9 = sub_401DE6((const char **)a1);
        v10 = sub_408FA1(v9);
        v11 = gettext("%s has become inaccessible");
        error(0, *(_DWORD *)(a1 + 60), v11, v10);
      }
    }
    else if ( *__errno_location() != v38 )
    {
      v12 = sub_401DE6((const char **)a1);
      v13 = __errno_location();
      error(0, *v13, "%s", v12);
    }
  }
  else if ( (stat_buf.st_mode & 0xF000) == 0x8000
         || (stat_buf.st_mode & 0xF000) == 4096
         || (stat_buf.st_mode & 0xF000) == 49152
         || (stat_buf.st_mode & 0xF000) == 0x2000 )
  {
    if ( byte_61032A != 1 && (v17 = sub_401DE6((const char **)a1), (unsigned __int8)sub_4031D8(fildes, (__int64)v17)) )
    {
      v34 = 0;
      *(_DWORD *)(a1 + 60) = -1;
      v18 = sub_401DE6((const char **)a1);
      v19 = sub_408FA1(v18);
      v20 = gettext("%s has been replaced with a remote file. giving up on this name");
      error(0, 0, v20, v19);
      *(_BYTE *)(a1 + 52) = 1;
      *(_BYTE *)(a1 + 53) = 1;
    }
    else
    {
      *(_DWORD *)(a1 + 60) = 0;
    }
  }
  else
  {
    v34 = 0;
    *(_DWORD *)(a1 + 60) = -1;
    v14 = sub_401DE6((const char **)a1);
    v15 = sub_408FA1(v14);
    v16 = gettext("%s has been replaced with an untailable file; giving up on this name");
    error(0, 0, v16, v15);
    *(_BYTE *)(a1 + 52) = 1;
  }
  v35 = 0;
  if ( v34 != 1 )
  {
    v21 = sub_401DE6((const char **)a1);
    sub_401F23(fildes, (__int64)v21);
    v22 = sub_401DE6((const char **)a1);
    sub_401F23(*(_DWORD *)(a1 + 56), (__int64)v22);
    *(_DWORD *)(a1 + 56) = -1;
  }
  else if ( !v38 || v38 == 2 )
  {
    if ( *(_QWORD *)(a1 + 40) == stat_buf.st_ino && *(_QWORD *)(a1 + 32) == stat_buf.st_dev )
    {
      if ( *(_DWORD *)(a1 + 56) == -1 )
      {
        v35 = 1;
      }
      else
      {
        v31 = sub_401DE6((const char **)a1);
        sub_401F23(fildes, (__int64)v31);
      }
    }
    else
    {
      v35 = 1;
      if ( *(_DWORD *)(a1 + 56) == -1 )
      {
        v26 = sub_401DE6((const char **)a1);
        v27 = sub_408FA1(v26);
        v28 = gettext("%s has appeared;  following end of new file");
      }
      else
      {
        v29 = sub_401DE6((const char **)a1);
        sub_401F23(*(_DWORD *)(a1 + 56), (__int64)v29);
        v30 = sub_401DE6((const char **)a1);
        v27 = sub_408FA1(v30);
        v28 = gettext("%s has been replaced;  following end of new file");
      }
      error(0, 0, v28, v27);
    }
  }
  else
  {
    v35 = 1;
    if ( *(_DWORD *)(a1 + 56) != -1 )
      __assert_fail("f->fd == -1", "../../src/src/tail.c", 0x3F1u, "recheck");
    v23 = sub_401DE6((const char **)a1);
    v24 = sub_408FA1(v23);
    v25 = gettext("%s has become accessible");
    error(0, 0, v25, v24);
  }
  if ( v35 )
  {
    if ( v36 )
      v32 = -1;
    else
      v32 = a2;
    sub_401E87(a1, fildes, 0LL, (__int64)&stat_buf, v32);
    v33 = sub_401DE6((const char **)a1);
    sub_40213B(fildes, 0LL, 0, (__int64)v33);
  }
}
