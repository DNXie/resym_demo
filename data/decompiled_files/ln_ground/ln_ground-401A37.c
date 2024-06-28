#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_401A37(char *a1)
{
  bool v1; // al
  int v2; // eax
  int v3; // eax
  bool v4; // al
  __int64 v5; // rbx
  char *v6; // rax
  __int64 v7; // rbx
  char *v8; // rax
  bool v10; // [rsp+16h] [rbp-BAh]
  bool v11; // [rsp+17h] [rbp-B9h]
  int errnum; // [rsp+1Ch] [rbp-B4h]
  char *s; // [rsp+20h] [rbp-B0h]
  size_t v14; // [rsp+28h] [rbp-A8h]
  struct stat stat_buf; // [rsp+30h] [rbp-A0h] BYREF

  s = (char *)sub_40375A(a1);
  v14 = strlen(s);
  v1 = !v14 || s[v14 - 1] == 47;
  v10 = v1;
  if ( byte_60C220 )
    v2 = sub_408E40(a1, &stat_buf);
  else
    v2 = sub_408E50(a1, &stat_buf);
  if ( v2 )
    v3 = *__errno_location();
  else
    v3 = 0;
  errnum = v3;
  v4 = !v3 && (stat_buf.st_mode & 0xF000) == 0x4000;
  v11 = v4;
  if ( errnum && errnum != 2 )
  {
    v5 = sub_4056CB(a1);
    v6 = gettext("accessing %s");
    error(1, errnum, v6, v5);
  }
  if ( v11 < v10 )
  {
    v7 = sub_4056CB(a1);
    v8 = gettext("target %s is not a directory");
    error(1, errnum, v8, v7);
  }
  return v11;
}
