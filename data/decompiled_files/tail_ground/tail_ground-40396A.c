#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_40396A(__int64 a1, unsigned __int64 a2, double a3)
{
  bool v3; // al
  int v4; // ecx
  int v5; // er8
  int v6; // er9
  int v7; // edx
  int v8; // ecx
  int v9; // er8
  int v10; // er9
  int v11; // eax
  char *v12; // rbx
  int *v13; // rax
  int *v14; // rax
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rdx
  char *v21; // rax
  unsigned __int64 v22; // rax
  char *v23; // rax
  char *v24; // rbx
  int *v25; // rax
  bool v26; // al
  char *v27; // rbx
  int *v28; // rax
  char v29; // [rsp+0h] [rbp-100h]
  bool v30; // [rsp+2Dh] [rbp-D3h]
  bool v31; // [rsp+2Eh] [rbp-D2h]
  unsigned __int8 v32; // [rsp+2Fh] [rbp-D1h]
  int fildes; // [rsp+30h] [rbp-D0h]
  int v34; // [rsp+34h] [rbp-CCh]
  int v35; // [rsp+38h] [rbp-C8h]
  int v36; // [rsp+3Ch] [rbp-C4h]
  unsigned __int64 v37; // [rsp+40h] [rbp-C0h]
  unsigned __int64 i; // [rsp+48h] [rbp-B8h]
  char *v39; // [rsp+50h] [rbp-B0h]
  __int64 v40; // [rsp+58h] [rbp-A8h]
  struct stat stat_buf; // [rsp+60h] [rbp-A0h] BYREF

  v3 = !pid && dword_610250 == 2 && a2 == 1 && (*(_DWORD *)(a1 + 48) & 0xF000) != 0x8000;
  v32 = v3;
  v30 = 0;
  v37 = a2 - 1;
  do
  {
LABEL_8:
    v31 = 0;
    for ( i = 0LL; i < a2; ++i )
    {
      if ( *(_BYTE *)(96 * i + a1 + 52) )
        continue;
      if ( *(int *)(96 * i + a1 + 56) < 0 )
      {
        sub_403322(96 * i + a1, v32);
        continue;
      }
      fildes = *(_DWORD *)(96 * i + a1 + 56);
      v39 = sub_401DE6((const char **)(96 * i + a1));
      v34 = *(_DWORD *)(96 * i + a1 + 48);
      v7 = *(_DWORD *)(96 * i + a1 + 64);
      if ( v7 != v32 )
      {
        v35 = sub_40BE84(fildes, 3, v7, v4, v5, v6, v29);
        if ( v32 )
          v11 = 0;
        else
          v11 = 2048;
        v36 = v35 | v11;
        if ( v35 >= 0 && (v36 == v35 || (unsigned int)sub_40BE84(fildes, 4, v36, v8, v9, v10, v29) != -1) )
        {
          *(_DWORD *)(a1 + 96 * i + 64) = v32;
        }
        else if ( (*(_DWORD *)(96 * i + a1 + 48) & 0xF000) != 0x8000 || *__errno_location() != 1 )
        {
          v12 = gettext("%s: cannot change nonblocking mode");
          v13 = __errno_location();
          error(1, *v13, v12, v39);
        }
      }
      if ( *(_DWORD *)(96 * i + a1 + 64) )
        goto LABEL_41;
      if ( (unsigned int)sub_40C6D0(fildes, &stat_buf) )
      {
        *(_DWORD *)(96 * i + a1 + 56) = -1;
        *(_DWORD *)(96 * i + a1 + 60) = *__errno_location();
        v14 = __errno_location();
        error(0, *v14, "%s", v39);
        continue;
      }
      if ( *(_DWORD *)(96 * i + a1 + 48) != stat_buf.st_mode
        || (stat_buf.st_mode & 0xF000) == 0x8000 && *(_QWORD *)(96 * i + a1 + 8) != stat_buf.st_size
        || (v15 = sub_401BF2((__int64)&stat_buf),
            (unsigned int)sub_401A8D(*(_QWORD *)(96 * i + a1 + 16), *(_QWORD *)(96 * i + a1 + 24), v15, v16)) )
      {
        v19 = 96 * i + a1;
        *(_QWORD *)(v19 + 16) = sub_401BF2((__int64)&stat_buf);
        *(_QWORD *)(v19 + 24) = v20;
        *(_DWORD *)(v19 + 48) = stat_buf.st_mode;
        *(_QWORD *)(v19 + 88) = 0LL;
        if ( (v34 & 0xF000) == 0x8000 && stat_buf.st_size < *(_QWORD *)(96 * i + a1 + 8) )
        {
          v21 = gettext("%s: file truncated");
          error(0, 0, v21, v39);
          v37 = i;
          sub_40213B(fildes, stat_buf.st_size, 0, (__int64)v39);
          *(_QWORD *)(a1 + 96 * i + 8) = stat_buf.st_size;
          continue;
        }
        if ( i != v37 )
        {
          if ( byte_610320 )
            sub_401F89(v39);
          v37 = i;
        }
LABEL_41:
        if ( *(_DWORD *)(96 * i + a1 + 64) )
          v22 = -2LL;
        else
          v22 = -1LL;
        v40 = sub_401FCB((__int64)v39, fildes, v22);
        v31 = v31 || v40 != 0;
        *(_QWORD *)(96 * i + a1 + 8) += v40;
        continue;
      }
      v17 = a1 + 96 * i;
      v18 = *(_QWORD *)(v17 + 88);
      *(_QWORD *)(v17 + 88) = v18 + 1;
      if ( v18 >= qword_610258 && dword_610250 == 1 )
      {
        sub_403322(96 * i + a1, *(_DWORD *)(96 * i + a1 + 64) != 0);
        *(_QWORD *)(96 * i + a1 + 88) = 0LL;
      }
    }
    if ( (unsigned __int8)sub_403915(a1, a2) != 1 && byte_61031C != 1 )
    {
      v23 = gettext("no files remaining");
      error(0, 0, v23);
      return;
    }
    if ( (!v31 || v32) && fflush_unlocked(stdout) )
    {
      v24 = gettext("write error");
      v25 = __errno_location();
      error(1, *v25, v24);
    }
  }
  while ( v31 );
  if ( !v30 )
  {
    v26 = pid && kill(pid, 0) && *__errno_location() != 1;
    v30 = v26;
    if ( !v26 )
    {
      v29 = LOBYTE(a3);
      if ( (unsigned int)sub_40B348(a3) )
      {
        v27 = gettext("cannot read realtime clock");
        v28 = __errno_location();
        error(1, *v28, v27);
      }
    }
    goto LABEL_8;
  }
}
