#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_4026A7(__int64 a1, unsigned int a2)
{
  char *v2; // rbx
  int *v3; // rax
  char *v4; // rbx
  int *v5; // rax
  bool v7; // [rsp+1Fh] [rbp-21h]
  __int64 i; // [rsp+20h] [rbp-20h]
  __int64 v9; // [rsp+28h] [rbp-18h]

  v7 = 1;
  for ( i = sub_408B29(a1, a2, 0LL); ; v7 = (v7 & (unsigned __int8)sub_4021B7(i, v9)) != 0 )
  {
    v9 = fts_read(i);
    if ( !v9 )
      break;
  }
  if ( *__errno_location() )
  {
    v2 = gettext("fts_read failed");
    v3 = __errno_location();
    error(0, *v3, v2);
    v7 = 0;
  }
  if ( (unsigned int)fts_close(i) )
  {
    v4 = gettext("fts_close failed");
    v5 = __errno_location();
    error(0, *v5, v4);
    v7 = 0;
  }
  return v7;
}
