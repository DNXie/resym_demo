#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_402779(char *a1)
{
  int v1; // eax
  bool v2; // al
  __int64 v3; // rbx
  char *v4; // rax
  bool v6; // [rsp+1Bh] [rbp-A5h]
  int errnum; // [rsp+1Ch] [rbp-A4h]
  struct stat stat_buf; // [rsp+20h] [rbp-A0h] BYREF

  if ( (unsigned int)sub_415420(a1, &stat_buf) )
    v1 = *__errno_location();
  else
    v1 = 0;
  errnum = v1;
  v2 = !v1 && (stat_buf.st_mode & 0xF000) == 0x4000;
  v6 = v2;
  if ( errnum && errnum != 2 )
  {
    v3 = sub_40D278(a1);
    v4 = gettext("accessing %s");
    error(1, errnum, v4, v3);
  }
  return v6;
}
