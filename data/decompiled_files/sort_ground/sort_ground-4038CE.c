#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_4038CE(FILE **a1, char a2)
{
  int v3; // eax
  char *v4; // r12
  char *v5; // rbx
  int *v6; // rax
  char *v7; // rbx
  char *v8; // rax
  int fd; // [rsp+1Ch] [rbp-24h] BYREF
  int v10; // [rsp+20h] [rbp-20h] BYREF
  int v11; // [rsp+24h] [rbp-1Ch]
  char *v12; // [rsp+28h] [rbp-18h]

  v12 = (char *)sub_40330E(&fd, a2);
  if ( !v12 )
    return 0LL;
  v12[12] = 0;
  if ( s1 )
  {
    v3 = sub_403701(&v10, 4LL);
    *((_DWORD *)v12 + 2) = v3;
    if ( *((int *)v12 + 2) <= 0 )
    {
      if ( !*((_DWORD *)v12 + 2) )
      {
        close(v11);
        sub_4036B0(fd, 1);
        close(fd);
        sub_4036B0(v10, 0);
        close(v10);
        if ( execlp(s1, s1, 0LL) < 0 )
        {
          v4 = s1;
          v5 = gettext("couldn't execute %s");
          v6 = __errno_location();
          error(2, *v6, v5, v4);
        }
      }
    }
    else
    {
      close(fd);
      close(v10);
      fd = v11;
      sub_403143((__int64)v12);
    }
  }
  *a1 = fdopen(fd, "w");
  if ( !*a1 )
  {
    v7 = v12 + 13;
    v8 = gettext("couldn't create temporary file");
    sub_402C5C(v8, v7);
  }
  return v12;
}
