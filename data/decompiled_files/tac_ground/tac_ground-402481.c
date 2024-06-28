#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_402481(const char *a1)
{
  int v1; // eax
  __int64 v2; // r12
  char *v3; // rbx
  int *v4; // rax
  bool v6; // al
  __int64 v7; // r12
  char *v8; // rbx
  int *v9; // rax
  char *s1; // [rsp+8h] [rbp-28h]
  bool v11; // [rsp+12h] [rbp-1Eh]
  bool v12; // [rsp+13h] [rbp-1Dh]
  int fd; // [rsp+14h] [rbp-1Ch]

  s1 = (char *)a1;
  v1 = strcmp(a1, "-");
  v12 = v1 == 0;
  if ( v1 )
  {
    fd = open(a1, 0);
    if ( fd < 0 )
    {
      v2 = sub_402CEE(a1);
      v3 = gettext("cannot open %s for reading");
      v4 = __errno_location();
      error(0, *v4, v3, v2);
      return 0LL;
    }
  }
  else
  {
    byte_6082A8 = 1;
    fd = 0;
    s1 = gettext("standard input");
  }
  if ( lseek(fd, 0LL, 2) < 0 || isatty(fd) )
    v6 = sub_402422(fd, (__int64)s1);
  else
    v6 = (unsigned __int8)sub_401AA0(fd, (__int64)s1) != 0;
  v11 = v6;
  if ( !v12 )
  {
    if ( close(fd) )
    {
      v7 = sub_404307(s1);
      v8 = gettext("%s: read error");
      v9 = __errno_location();
      error(0, *v9, v8, v7);
      v11 = 0;
    }
  }
  return v11;
}
