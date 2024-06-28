#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402A87(__int64 a1, __int64 a2, __uid_t a3, __gid_t a4, int a5, int a6, __int64 a7)
{
  int v7; // eax
  __int64 v8; // rbx
  char *v9; // rax
  __int64 v10; // r12
  __int64 v11; // rbx
  char *v12; // rax
  char *v13; // rax
  __int64 v15; // rbx
  char *v16; // rax
  const char *v17; // rax
  __int64 v18; // rbx
  char *v19; // rax
  __int64 v20; // rbx
  char *v21; // rax
  __int64 v22; // r12
  char *v23; // rbx
  int *v24; // rax
  bool v25; // al
  __int64 v26; // rbx
  char *v27; // rax
  __int64 v28; // r12
  __int64 v29; // rbx
  char *v30; // rax
  char *v31; // rax
  int v32; // eax
  unsigned int v33; // eax
  __int64 v34; // r12
  char *v35; // rbx
  int *v36; // rax
  bool v37; // al
  int v38; // eax
  __int64 v39; // rax
  const char *v40; // rax
  bool v45; // [rsp+34h] [rbp-DCh]
  char v46; // [rsp+35h] [rbp-DBh]
  char v47; // [rsp+36h] [rbp-DAh]
  int v48; // [rsp+3Ch] [rbp-D4h]
  struct stat *v49; // [rsp+40h] [rbp-D0h]
  char *s1; // [rsp+48h] [rbp-C8h]
  char *filename; // [rsp+50h] [rbp-C0h]
  char *ptr; // [rsp+60h] [rbp-B0h]
  char *v53; // [rsp+68h] [rbp-A8h]
  struct stat stat_buf; // [rsp+70h] [rbp-A0h] BYREF

  s1 = *(char **)(a2 + 56);
  filename = *(char **)(a2 + 48);
  v45 = 1;
  v47 = 1;
  v7 = *(unsigned __int16 *)(a2 + 112);
  if ( v7 == 4 )
  {
    if ( *(_BYTE *)(a7 + 17) != 1 )
    {
      v18 = sub_4039AF(s1);
      v19 = gettext("cannot read directory %s");
      error(0, *(_DWORD *)(a2 + 64), v19, v18);
    }
    v45 = 0;
  }
  else if ( *(unsigned __int16 *)(a2 + 112) > 4u )
  {
    if ( v7 == 7 )
    {
      if ( *(_BYTE *)(a7 + 17) != 1 )
      {
        v17 = (const char *)sub_4039AF(s1);
        error(0, *(_DWORD *)(a2 + 64), "%s", v17);
      }
      v45 = 0;
    }
    else if ( v7 == 10 )
    {
      if ( !*(_QWORD *)(a2 + 88) && !*(_QWORD *)(a2 + 32) )
      {
        *(_QWORD *)(a2 + 32) = 1LL;
        fts_set(a1, a2, 1LL);
        return 1LL;
      }
      if ( *(_BYTE *)(a7 + 17) != 1 )
      {
        v15 = sub_4039AF(s1);
        v16 = gettext("cannot access %s");
        error(0, *(_DWORD *)(a2 + 64), v16, v15);
      }
      v45 = 0;
    }
    else if ( v7 == 6 && *(_BYTE *)(a7 + 4) != 1 )
    {
      return 1LL;
    }
  }
  else if ( v7 == 1 )
  {
    if ( *(_BYTE *)(a7 + 4) )
    {
      if ( !*(_QWORD *)(a7 + 8)
        || *(_QWORD *)(a2 + 128) != **(_QWORD **)(a7 + 8)
        || *(_QWORD *)(a2 + 120) != *(_QWORD *)(*(_QWORD *)(a7 + 8) + 8LL) )
      {
        return 1LL;
      }
      if ( !strcmp(s1, "/") )
      {
        v8 = sub_4039AF(s1);
        v9 = gettext("it is dangerous to operate recursively on %s");
        error(0, 0, v9, v8);
      }
      else
      {
        v10 = sub_40398B(1LL, "/");
        v11 = sub_40398B(0LL, s1);
        v12 = gettext("it is dangerous to operate recursively on %s (same as %s)");
        error(0, 0, v12, v11, v10);
      }
      v13 = gettext("use --no-preserve-root to override this failsafe");
      error(0, 0, v13);
      fts_set(a1, a2, 4LL);
      fts_read(a1);
      return 0LL;
    }
  }
  else if ( v7 == 2 && (unsigned __int8)sub_408E3E(a1, a2) )
  {
    v20 = sub_4039AF(s1);
    v21 = gettext(
            "WARNING: Circular directory structure.\n"
            "This almost certainly means that you have a corrupted file system.\n"
            "NOTIFY YOUR SYSTEM MANAGER.\n"
            "The following directory is part of the cycle:\n"
            "  %s\n");
    error(0, 0, v21, v20);
    return 0LL;
  }
  if ( !v45 )
  {
    v46 = 0;
    v49 = 0LL;
  }
  else if ( a5 == -1 && a6 == -1 && *(_DWORD *)a7 == 2 && !*(_QWORD *)(a7 + 8) && *(_BYTE *)(a7 + 16) != 1 )
  {
    v46 = 1;
    v49 = (struct stat *)(a2 + 120);
  }
  else
  {
    v49 = (struct stat *)(a2 + 120);
    if ( *(_BYTE *)(a7 + 16) && (*(_DWORD *)(a2 + 144) & 0xF000) == 40960 )
    {
      if ( (unsigned int)sub_40B300(*(_DWORD *)(a1 + 44), filename, &stat_buf, 0) )
      {
        if ( *(_BYTE *)(a7 + 17) != 1 )
        {
          v22 = sub_4039AF(s1);
          v23 = gettext("cannot dereference %s");
          v24 = __errno_location();
          error(0, *v24, v23, v22);
        }
        v45 = 0;
      }
      v49 = &stat_buf;
    }
    v25 = v45 && (a5 == -1 || v49->st_uid == a5) && (a6 == -1 || v49->st_gid == a6);
    v46 = v25;
  }
  if ( v45
    && (*(_WORD *)(a2 + 112) == 1 || *(_WORD *)(a2 + 112) == 2 || *(_WORD *)(a2 + 112) == 6 || *(_WORD *)(a2 + 112) == 4)
    && *(_QWORD *)(a7 + 8)
    && v49->st_ino == **(_QWORD **)(a7 + 8)
    && v49->st_dev == *(_QWORD *)(*(_QWORD *)(a7 + 8) + 8LL) )
  {
    if ( !strcmp(s1, "/") )
    {
      v26 = sub_4039AF(s1);
      v27 = gettext("it is dangerous to operate recursively on %s");
      error(0, 0, v27, v26);
    }
    else
    {
      v28 = sub_40398B(1LL, "/");
      v29 = sub_40398B(0LL, s1);
      v30 = gettext("it is dangerous to operate recursively on %s (same as %s)");
      error(0, 0, v30, v29, v28);
    }
    v31 = gettext("use --no-preserve-root to override this failsafe");
    error(0, 0, v31);
    return 0LL;
  }
  if ( v46 )
  {
    if ( *(_BYTE *)(a7 + 16) != 1 )
    {
      v32 = sub_402421(*(_DWORD *)(a1 + 44), filename, a3, a4);
      v45 = v32 == 0;
      if ( v32 && *__errno_location() == 95 )
      {
        v45 = 1;
        v47 = 0;
      }
      goto LABEL_88;
    }
    v33 = sub_402837(*(_DWORD *)(a1 + 44), filename, (__int64)v49, a3, a4, a5, a6);
    if ( v33 > 4 )
    {
      if ( v33 == 5 )
      {
        v45 = sub_4023F0(*(_DWORD *)(a1 + 44), filename, a3, a4) == 0;
      }
      else
      {
        if ( v33 != 6 )
LABEL_87:
          abort();
        v45 = 0;
      }
    }
    else if ( v33 >= 3 )
    {
      v46 = 0;
      v45 = 0;
    }
    else if ( v33 != 2 )
    {
      goto LABEL_87;
    }
LABEL_88:
    if ( v46 && !v45 && *(_BYTE *)(a7 + 17) != 1 )
    {
      v34 = sub_4039AF(s1);
      if ( a3 == -1 )
        v35 = gettext("changing group of %s");
      else
        v35 = gettext("changing ownership of %s");
      v36 = __errno_location();
      error(0, *v36, v35, v34);
    }
  }
  if ( *(_DWORD *)a7 != 2 )
  {
    v37 = v46 && v45 && v47 && (a3 != -1 && v49->st_uid != a3 || a4 != -1 && v49->st_gid != a4);
    if ( v37 || !*(_DWORD *)a7 )
    {
      if ( !v45 )
      {
        v38 = 3;
      }
      else if ( v47 != 1 )
      {
        v38 = 1;
      }
      else if ( v37 )
      {
        v38 = 2;
      }
      else
      {
        v38 = 4;
      }
      v48 = v38;
      if ( v49 )
        v39 = sub_402514(v49->st_uid);
      else
        v39 = 0LL;
      ptr = (char *)v39;
      if ( v49 )
        v40 = (const char *)sub_4024AC(v49->st_gid);
      else
        v40 = 0LL;
      v53 = (char *)v40;
      sub_402632((__int64)s1, v48, ptr, v40, *(const char **)(a7 + 24), *(const char **)(a7 + 32));
      free(ptr);
      free(v53);
    }
  }
  if ( *(_BYTE *)(a7 + 4) != 1 )
    fts_set(a1, a2, 4LL);
  return v45;
}
