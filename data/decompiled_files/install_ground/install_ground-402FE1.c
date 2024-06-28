#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_402FE1(char *a1)
{
  bool v1; // al
  int v2; // eax
  bool v3; // al
  __int64 v4; // rbx
  char *v5; // rax
  __int64 v6; // rbx
  char *v7; // rax
  bool v9; // [rsp+1Ah] [rbp-B6h]
  bool v10; // [rsp+1Bh] [rbp-B5h]
  int errnum; // [rsp+1Ch] [rbp-B4h]
  char *s; // [rsp+20h] [rbp-B0h]
  size_t v13; // [rsp+28h] [rbp-A8h]
  struct stat stat_buf; // [rsp+30h] [rbp-A0h] BYREF

  s = (char *)sub_40B393(a1);
  v13 = strlen(s);
  v1 = !v13 || s[v13 - 1] == 47;
  v9 = v1;
  if ( (unsigned int)sub_419BC0(a1, &stat_buf) )
    v2 = *__errno_location();
  else
    v2 = 0;
  errnum = v2;
  v3 = !v2 && (stat_buf.st_mode & 0xF000) == 0x4000;
  v10 = v3;
  if ( errnum && errnum != 2 )
  {
    v4 = sub_40E392(a1);
    v5 = gettext("accessing %s");
    error(1, errnum, v5, v4);
  }
  if ( v10 < v9 )
  {
    v6 = sub_40E392(a1);
    v7 = gettext("target %s is not a directory");
    error(1, errnum, v7, v6);
  }
  return v10;
}
