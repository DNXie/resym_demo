#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401A69(__int64 a1, __uid_t a2, unsigned int a3, unsigned int a4, unsigned __int8 a5)
{
  unsigned int v5; // eax
  __int64 v6; // r12
  char *v7; // rbx
  int *v8; // rax
  char *v9; // rbx
  int *v10; // rax
  __int64 result; // rax
  unsigned __int8 v15; // [rsp+27h] [rbp-29h]
  int i; // [rsp+28h] [rbp-28h]
  int v17; // [rsp+2Ch] [rbp-24h]
  void *ptr; // [rsp+30h] [rbp-20h] BYREF
  struct passwd *v19; // [rsp+38h] [rbp-18h]

  v15 = 1;
  v19 = getpwuid(a2);
  if ( !v19 )
    v15 = 0;
  if ( (unsigned __int8)sub_401C24(a3, a5) != 1 )
    v15 = 0;
  if ( a4 != a3 )
  {
    putchar_unlocked(32);
    if ( (unsigned __int8)sub_401C24(a4, a5) != 1 )
      v15 = 0;
  }
  if ( v19 )
    v5 = v19->pw_gid;
  else
    v5 = -1;
  v17 = sub_404289(a1, v5, &ptr);
  if ( v17 >= 0 )
  {
    for ( i = 0; i < v17; ++i )
    {
      if ( *((_DWORD *)ptr + i) != a3 && *((_DWORD *)ptr + i) != a4 )
      {
        putchar_unlocked(32);
        if ( (unsigned __int8)sub_401C24(*((unsigned int *)ptr + i), a5) != 1 )
          v15 = 0;
      }
    }
    free(ptr);
    result = v15;
  }
  else
  {
    if ( a1 )
    {
      v6 = sub_401FA0(a1);
      v7 = gettext("failed to get groups for user %s");
      v8 = __errno_location();
      error(0, *v8, v7, v6);
    }
    else
    {
      v9 = gettext("failed to get groups for the current process");
      v10 = __errno_location();
      error(0, *v10, v9);
    }
    result = 0LL;
  }
  return result;
}
