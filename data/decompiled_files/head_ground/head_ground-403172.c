#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403172(const char *a1, size_t a2, char a3, char a4)
{
  int v4; // eax
  unsigned __int8 v5; // al
  __int64 v6; // r12
  char *v7; // rbx
  int *v8; // rax
  __int64 v10; // r12
  char *v11; // rbx
  int *v12; // rax
  const char *s1; // [rsp+18h] [rbp-28h]
  bool v16; // [rsp+2Ah] [rbp-16h]
  unsigned __int8 v17; // [rsp+2Bh] [rbp-15h]
  int fd; // [rsp+2Ch] [rbp-14h]

  s1 = a1;
  v4 = strcmp(a1, "-");
  v16 = v4 == 0;
  if ( v4 )
  {
    fd = open(a1, 0);
    if ( fd < 0 )
    {
      v6 = sub_403DCC(a1);
      v7 = gettext("cannot open %s for reading");
      v8 = __errno_location();
      error(0, *v8, v7, v6);
      return 0LL;
    }
    v5 = sub_4030CF(a1, fd, a2, a3, a4);
  }
  else
  {
    byte_60927B = 1;
    fd = 0;
    s1 = gettext("standard input");
    v5 = sub_4030CF(s1, 0, a2, a3, a4);
  }
  v17 = v5;
  if ( v16 || !close(fd) )
    return v17;
  v10 = sub_403DCC(s1);
  v11 = gettext("closing %s");
  v12 = __errno_location();
  error(0, *v12, v11, v10);
  return 0LL;
}
