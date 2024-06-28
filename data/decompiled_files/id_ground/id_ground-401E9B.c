#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_401E9B(__int64 a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  __int64 v3; // rbx
  char *v4; // rax
  __int64 v5; // rbx
  char *v6; // rax
  __int64 v7; // rbx
  char *v8; // rax
  unsigned int v9; // eax
  __int64 v10; // r12
  char *v11; // rbx
  int *v12; // rax
  char *v13; // rbx
  int *v14; // rax
  FILE *v15; // rbx
  char *v16; // rax
  char *v17; // rbx
  char *v18; // rax
  int i; // [rsp+10h] [rbp-30h]
  int v20; // [rsp+14h] [rbp-2Ch]
  void *ptr; // [rsp+18h] [rbp-28h] BYREF
  struct passwd *v22; // [rsp+20h] [rbp-20h]
  struct group *v23; // [rsp+28h] [rbp-18h]

  v1 = uid;
  v2 = gettext("uid=%lu");
  printf(v2, v1);
  v22 = getpwuid(uid);
  if ( v22 )
    printf("(%s)", v22->pw_name);
  v3 = gid;
  v4 = gettext(" gid=%lu");
  printf(v4, v3);
  v23 = getgrgid(gid);
  if ( v23 )
    printf("(%s)", v23->gr_name);
  if ( dword_60728C != uid )
  {
    v5 = dword_60728C;
    v6 = gettext(" euid=%lu");
    printf(v6, v5);
    v22 = getpwuid(dword_60728C);
    if ( v22 )
      printf("(%s)", v22->pw_name);
  }
  if ( dword_607294 != gid )
  {
    v7 = dword_607294;
    v8 = gettext(" egid=%lu");
    printf(v8, v7);
    v23 = getgrgid(dword_607294);
    if ( v23 )
      printf("(%s)", v23->gr_name);
  }
  if ( v22 )
    v9 = v22->pw_gid;
  else
    v9 = -1;
  v20 = sub_4049DE(a1, v9, &ptr);
  if ( v20 >= 0 )
  {
    if ( v20 > 0 )
    {
      v15 = stdout;
      v16 = gettext(" groups=");
      fputs_unlocked(v16, v15);
    }
    for ( i = 0; i < v20; ++i )
    {
      if ( i > 0 )
        putchar_unlocked(44);
      printf("%lu", *((unsigned int *)ptr + i));
      v23 = getgrgid(*((_DWORD *)ptr + i));
      if ( v23 )
        printf("(%s)", v23->gr_name);
    }
    free(ptr);
    if ( s && !getenv("POSIXLY_CORRECT") )
    {
      v17 = s;
      v18 = gettext(" context=%s");
      printf(v18, v17);
    }
  }
  else
  {
    if ( a1 )
    {
      v10 = sub_4026F5(a1);
      v11 = gettext("failed to get groups for user %s");
      v12 = __errno_location();
      error(0, *v12, v11, v10);
    }
    else
    {
      v13 = gettext("failed to get groups for the current process");
      v14 = __errno_location();
      error(0, *v14, v13);
    }
    byte_6071F0 = 0;
  }
}
