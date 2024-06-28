#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_4034FA(__int64 a1, unsigned int a2, __uid_t a3, __gid_t a4, int a5, int a6, __int64 a7)
{
  int v7; // eax
  char *v8; // rbx
  int *v9; // rax
  char *v10; // rbx
  int *v11; // rax
  bool v17; // [rsp+3Bh] [rbp-25h]
  __int64 i; // [rsp+40h] [rbp-20h]
  __int64 v19; // [rsp+48h] [rbp-18h]

  v17 = 1;
  if ( a5 == -1 && a6 == -1 && !*(_BYTE *)(a7 + 16) && *(_DWORD *)a7 == 2 )
    v7 = 8;
  else
    v7 = 0;
  for ( i = sub_408DD6(a1, v7 | a2, 0LL); ; v17 = (v17 & (unsigned __int8)sub_402A87(i, v19, a3, a4, a5, a6, a7)) != 0 )
  {
    v19 = fts_read(i);
    if ( !v19 )
      break;
  }
  if ( *__errno_location() )
  {
    if ( *(_BYTE *)(a7 + 17) != 1 )
    {
      v8 = gettext("fts_read failed");
      v9 = __errno_location();
      error(0, *v9, v8);
    }
    v17 = 0;
  }
  if ( (unsigned int)fts_close(i) )
  {
    v10 = gettext("fts_close failed");
    v11 = __errno_location();
    error(0, *v11, v10);
    v17 = 0;
  }
  return v17;
}
