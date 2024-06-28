#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4046C9(char *a1, _DWORD *a2)
{
  char *v2; // rbx
  int *v3; // rax
  __int64 result; // rax
  __int64 v5; // r12
  char *v6; // rbx
  int *v7; // rax
  size_t v8; // rax
  void *v9; // rsp
  __int64 v10; // r12
  char *v11; // rbx
  int *v12; // rax
  __int64 v13; // r12
  char *v14; // rbx
  int *v15; // rax
  __int64 v16; // r12
  char *v17; // rbx
  int *v18; // rax
  __int64 v19; // r12
  char *v20; // rbx
  int *v21; // rax
  char *v22; // rbx
  int *v23; // rax
  char *path; // [rsp+8h] [rbp-188h] BYREF
  int v25; // [rsp+1Ch] [rbp-174h]
  __int64 v26; // [rsp+20h] [rbp-170h]
  void *ptr; // [rsp+28h] [rbp-168h]
  char *s; // [rsp+30h] [rbp-160h]
  size_t n; // [rsp+38h] [rbp-158h]
  void *dest; // [rsp+40h] [rbp-150h]
  char *v31; // [rsp+48h] [rbp-148h]
  char v32[16]; // [rsp+50h] [rbp-140h] BYREF
  struct stat stat_buf; // [rsp+60h] [rbp-130h] BYREF
  struct stat v34; // [rsp+F0h] [rbp-A0h] BYREF

  path = a1;
  v26 = 0LL;
  if ( (unsigned int)sub_40881E(v32) )
  {
    v2 = gettext("cannot get current directory");
    v3 = __errno_location();
    error(0, *v3, v2);
    result = 0LL;
  }
  else if ( (a2[6] & 0xF000) == 0x4000 )
  {
    qmemcpy(&stat_buf, a2, sizeof(stat_buf));
    if ( chdir(path) >= 0 )
      goto LABEL_10;
    v5 = sub_407086(path);
    v6 = gettext("cannot change to directory %s");
    v7 = __errno_location();
    error(0, *v7, v6, v5);
    result = 0LL;
  }
  else
  {
    ptr = (void *)sub_404BAB(path);
    s = (char *)ptr;
    v8 = strlen((const char *)ptr);
    n = v8 + 1;
    v9 = alloca(16 * ((v8 + 31) / 0x10));
    dest = (void *)(16 * (((unsigned __int64)&path + 7) >> 4));
    v31 = (char *)memcpy(dest, ptr, v8 + 1);
    free(ptr);
    if ( chdir(v31) >= 0 )
    {
      if ( (int)sub_413F40(".", &stat_buf) >= 0 )
      {
        while ( 1 )
        {
LABEL_10:
          if ( (int)sub_413F40("..", &v34) < 0 )
          {
            v16 = sub_407086("..");
            v17 = gettext("cannot stat %s");
            v18 = __errno_location();
            error(0, *v18, v17, v16);
            goto LABEL_18;
          }
          if ( v34.st_dev != stat_buf.st_dev || v34.st_ino == stat_buf.st_ino )
            break;
          if ( chdir("..") < 0 )
          {
            v19 = sub_407086("..");
            v20 = gettext("cannot change to directory %s");
            v21 = __errno_location();
            error(0, *v21, v20, v19);
            goto LABEL_18;
          }
          qmemcpy(&stat_buf, &v34, sizeof(stat_buf));
        }
        v26 = sub_409A23();
      }
      else
      {
        v13 = sub_407086(v31);
        v14 = gettext("cannot stat current directory (now %s)");
        v15 = __errno_location();
        error(0, *v15, v14, v13);
      }
LABEL_18:
      v25 = *__errno_location();
      if ( (unsigned int)sub_4088A5(v32) )
      {
        v22 = gettext("failed to return to initial working directory");
        v23 = __errno_location();
        error(1, *v23, v22);
      }
      sub_4088DC(v32);
      *__errno_location() = v25;
      result = v26;
    }
    else
    {
      v10 = sub_407086(v31);
      v11 = gettext("cannot change to directory %s");
      v12 = __errno_location();
      error(0, *v12, v11, v10);
      result = 0LL;
    }
  }
  return result;
}
