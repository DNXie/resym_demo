#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401BF2(char *a1, char *a2)
{
  bool v2; // al
  __int64 v3; // r12
  char *v4; // rbx
  int *v5; // rax
  __int64 v7; // rbx
  char *v8; // rax
  int v9; // eax
  __int64 v10; // r12
  char *v11; // rbx
  int *v12; // rax
  __int64 v13; // r12
  __int64 v14; // rbx
  char *v15; // rax
  __int64 v16; // r12
  __int64 v17; // rbx
  char *v18; // rax
  __int64 v19; // rbx
  char *v20; // rax
  __int64 v21; // r12
  __int64 v22; // rbx
  char *v23; // rax
  __int64 v24; // rbx
  char *v25; // rax
  bool v26; // al
  unsigned int v27; // eax
  __int64 v28; // r12
  char *v29; // rbx
  int *v30; // rax
  bool v31; // al
  unsigned int v32; // eax
  const char *v33; // rax
  const char *v34; // r12
  unsigned int v35; // ebx
  const char *v36; // rax
  __int64 v37; // r13
  __int64 v38; // r12
  char *v39; // rax
  const char *v40; // rbx
  char *v41; // rax
  int *v42; // rax
  __int64 v43; // r12
  char *v44; // rbx
  int *v45; // rax
  bool v46; // [rsp+11h] [rbp-14Fh]
  char v47; // [rsp+12h] [rbp-14Eh]
  bool v48; // [rsp+13h] [rbp-14Dh]
  int errnum; // [rsp+14h] [rbp-14Ch]
  char *newa; // [rsp+18h] [rbp-148h]
  struct stat stat_buf; // [rsp+20h] [rbp-140h] BYREF
  struct stat v52; // [rsp+B0h] [rbp-B0h] BYREF

  newa = 0LL;
  v46 = 0;
  v47 = 0;
  if ( byte_60C2E4 != 1 )
  {
    if ( byte_60C2E5 )
      v2 = (unsigned int)sub_408E40(a1, &stat_buf) != 0;
    else
      v2 = (unsigned int)sub_408E50(a1, &stat_buf) != 0;
    if ( v2 )
    {
      v3 = sub_4056CB(a1);
      v4 = gettext("accessing %s");
      v5 = __errno_location();
      error(0, *v5, v4, v3);
      return 0LL;
    }
    if ( (stat_buf.st_mode & 0xF000) == 0x4000 )
    {
      v47 = 1;
      if ( byte_60C2E9 != 1 )
      {
        v7 = sub_4056CB(a1);
        v8 = gettext("%s: hard link not allowed for directory");
        error(0, 0, v8, v7);
        return 0LL;
      }
    }
  }
  if ( byte_60C2E7 || byte_60C2E6 || dword_60C2E0 )
  {
    v9 = sub_408E50(a2, &v52);
    v46 = v9 == 0;
    if ( v9 )
    {
      if ( *__errno_location() != 2 )
      {
        v10 = sub_4056CB(a2);
        v11 = gettext("accessing %s");
        v12 = __errno_location();
        error(0, *v12, v11, v10);
        return 0LL;
      }
    }
  }
  if ( v46 && qword_60C2F0 && (unsigned __int8)sub_40390E(qword_60C2F0, a2, &v52) )
  {
    v13 = sub_4056A7(1LL, a1);
    v14 = sub_4056A7(0LL, a2);
    v15 = gettext("will not overwrite just-created %s with %s");
    error(0, 0, v15, v14, v13);
    return 0LL;
  }
  if ( (byte_60C2E7 || byte_60C2E4 != 1 && dword_60C2E0)
    && v46
    && (!dword_60C2E0 || byte_60C2E4 != 1)
    && (byte_60C2E4 != 1 || !(unsigned int)sub_408E40(a1, &stat_buf))
    && stat_buf.st_ino == v52.st_ino
    && stat_buf.st_dev == v52.st_dev
    && (stat_buf.st_nlink == 1 || (unsigned __int8)sub_406E63(a1, a2)) )
  {
    v16 = sub_4056A7(1LL, a2);
    v17 = sub_4056A7(0LL, a1);
    v18 = gettext("%s and %s are the same file");
    error(0, 0, v18, v17, v16);
    return 0LL;
  }
  if ( v46 )
  {
    if ( (v52.st_mode & 0xF000) == 0x4000 )
    {
      v19 = sub_4056CB(a2);
      v20 = gettext("%s: cannot overwrite directory");
      error(0, 0, v20, v19);
      return 0LL;
    }
    if ( byte_60C2E6 )
    {
      v21 = sub_4056CB(a2);
      v22 = qword_60C310;
      v23 = gettext("%s: replace %s? ");
      fprintf(stderr, v23, v22, v21);
      if ( (unsigned __int8)sub_407BD3() != 1 )
        return 1LL;
      byte_60C2E7 = 1;
    }
    if ( dword_60C2E0 )
    {
      newa = (char *)sub_4032AB(a2, (unsigned int)dword_60C2E0);
      if ( rename(a2, newa) )
      {
        errnum = *__errno_location();
        free(newa);
        newa = 0LL;
        if ( errnum != 2 )
        {
          v24 = sub_4056CB(a2);
          v25 = gettext("cannot backup %s");
          error(0, errnum, v25, v24);
          return 0LL;
        }
      }
    }
  }
  if ( byte_60C2E4 )
  {
    v26 = symlink(a1, a2) == 0;
  }
  else
  {
    if ( byte_60C2E5 )
      v27 = 1024;
    else
      v27 = 0;
    v26 = (unsigned int)sub_40820B(4294967196LL, a1, 4294967196LL, a2, v27) == 0;
  }
  v48 = v26;
  if ( !v26 && *__errno_location() == 17 && (byte_60C2E7 || newa) )
  {
    if ( unlink(a2) )
    {
      v28 = sub_4056CB(a2);
      v29 = gettext("cannot remove %s");
      v30 = __errno_location();
      error(0, *v30, v29, v28);
      free(newa);
      return 0LL;
    }
    if ( byte_60C2E4 )
    {
      v31 = symlink(a1, a2) == 0;
    }
    else
    {
      if ( byte_60C2E5 )
        v32 = 1024;
      else
        v32 = 0;
      v31 = (unsigned int)sub_40820B(4294967196LL, a1, 4294967196LL, a2, v32) == 0;
    }
    v48 = v31;
  }
  if ( v48 )
  {
    sub_403873(qword_60C2F0, a2, &stat_buf);
    if ( byte_60C2E8 )
    {
      if ( newa )
      {
        v33 = (const char *)sub_4056CB(newa);
        printf("%s ~ ", v33);
      }
      v34 = (const char *)sub_4056A7(1LL, a1);
      if ( byte_60C2E4 )
        v35 = 45;
      else
        v35 = 61;
      v36 = (const char *)sub_4056A7(0LL, a2);
      printf("%s %c> %s\n", v36, v35, v34);
    }
  }
  else
  {
    v37 = sub_4056A7(1LL, a1);
    v38 = sub_4056A7(0LL, a2);
    if ( byte_60C2E4 )
    {
      if ( *__errno_location() == 36 || !*a1 )
        v39 = gettext("failed to create symbolic link %s -> %s");
      else
        v39 = gettext("failed to create symbolic link %s");
      v40 = v39;
    }
    else
    {
      if ( *__errno_location() == 31 && v47 != 1 )
      {
        v41 = gettext("failed to create hard link to %.0s%s");
      }
      else if ( *__errno_location() == 122
             || *__errno_location() == 17
             || *__errno_location() == 28
             || *__errno_location() == 30 )
      {
        v41 = gettext("failed to create hard link %s");
      }
      else
      {
        v41 = gettext("failed to create hard link %s => %s");
      }
      v40 = v41;
    }
    v42 = __errno_location();
    error(0, *v42, v40, v38, v37);
    if ( newa && rename(newa, a2) )
    {
      v43 = sub_4056CB(a2);
      v44 = gettext("cannot un-backup %s");
      v45 = __errno_location();
      error(0, *v45, v44, v43);
    }
  }
  free(newa);
  return v48;
}
