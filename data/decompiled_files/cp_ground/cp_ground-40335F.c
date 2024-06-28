#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_40335F(char *a1, struct stat *a2, _BYTE *a3)
{
  int v3; // eax
  bool v4; // al
  __int64 v5; // rbx
  char *v6; // rax
  bool v9; // [rsp+2Bh] [rbp-15h]
  int errnum; // [rsp+2Ch] [rbp-14h]

  if ( (unsigned int)sub_416100(a1, a2) )
    v3 = *__errno_location();
  else
    v3 = 0;
  errnum = v3;
  v4 = !v3 && (a2->st_mode & 0xF000) == 0x4000;
  v9 = v4;
  if ( errnum )
  {
    if ( errnum != 2 )
    {
      v5 = sub_40E491(a1);
      v6 = gettext("accessing %s");
      error(1, errnum, v6, v5);
    }
    *a3 = 1;
  }
  return v9;
}
