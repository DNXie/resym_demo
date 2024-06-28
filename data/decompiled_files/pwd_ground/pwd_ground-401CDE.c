#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401CDE(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r12
  char *v5; // rbx
  int *v6; // rax
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 v9; // r12
  char *v10; // rbx
  int *v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r12
  char *v15; // rbx
  int *v16; // rax
  size_t v17; // rax
  __int64 v18; // rax
  __int64 v19; // r12
  char *v20; // rbx
  int *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbx
  char *v24; // rax
  __int64 result; // rax
  char v27; // [rsp+2Eh] [rbp-152h]
  bool v28; // [rsp+2Fh] [rbp-151h]
  int fd; // [rsp+30h] [rbp-150h]
  int v30; // [rsp+34h] [rbp-14Ch]
  DIR *dirp; // [rsp+38h] [rbp-148h]
  __ino_t v32; // [rsp+40h] [rbp-140h]
  struct dirent *v33; // [rsp+48h] [rbp-138h]
  struct stat stat_buf; // [rsp+50h] [rbp-130h] BYREF
  struct stat v35; // [rsp+E0h] [rbp-A0h] BYREF

  dirp = opendir("..");
  if ( !dirp )
  {
    v3 = sub_401C70(a3);
    v4 = sub_40280C(v3);
    v5 = gettext("cannot open directory %s");
    v6 = __errno_location();
    error(1, *v6, v5, v4);
  }
  fd = dirfd(dirp);
  if ( fd < 0 )
    v7 = (unsigned int)chdir("..") >> 31;
  else
    v7 = (unsigned int)fchdir(fd) >> 31;
  if ( (_BYTE)v7 )
  {
    v8 = sub_401C70(a3);
    v9 = sub_40280C(v8);
    v10 = gettext("failed to chdir to %s");
    v11 = __errno_location();
    error(1, *v11, v10, v9);
  }
  if ( fd < 0 )
    v12 = (unsigned int)sub_405640(".", &stat_buf) >> 31;
  else
    v12 = (unsigned int)sub_405650(fd, &stat_buf) >> 31;
  if ( (_BYTE)v12 )
  {
    v13 = sub_401C70(a3);
    v14 = sub_40280C(v13);
    v15 = gettext("failed to stat %s");
    v16 = __errno_location();
    error(1, *v16, v15, v14);
  }
  v28 = stat_buf.st_dev != *a1;
  v27 = 0;
  while ( 1 )
  {
    *__errno_location() = 0;
    v33 = sub_40185C(dirp);
    if ( !v33 )
      break;
    v32 = v33->d_ino;
    if ( v33->d_ino && !v28 )
      goto LABEL_22;
    if ( (int)sub_405660(v33->d_name, &v35) >= 0 )
    {
      v32 = v35.st_ino;
LABEL_22:
      if ( a1[1] == v32 && (!v28 || v35.st_dev == *a1) )
      {
        v17 = strlen(v33->d_name);
        sub_401B3F(a2, v33->d_name, v17);
        v27 = 1;
        goto LABEL_26;
      }
    }
  }
  if ( *__errno_location() )
  {
    v30 = *__errno_location();
    closedir(dirp);
    *__errno_location() = v30;
    dirp = 0LL;
  }
LABEL_26:
  if ( !dirp || closedir(dirp) )
  {
    v18 = sub_401C70(a3);
    v19 = sub_40280C(v18);
    v20 = gettext("reading directory %s");
    v21 = __errno_location();
    error(1, *v21, v20, v19);
  }
  if ( v27 != 1 )
  {
    v22 = sub_401C70(a3);
    v23 = sub_40280C(v22);
    v24 = gettext("couldn't find directory entry in %s with matching i-node");
    error(1, 0, v24, v23);
  }
  result = 18LL;
  qmemcpy(a1, &stat_buf, 0x90uLL);
  return result;
}
