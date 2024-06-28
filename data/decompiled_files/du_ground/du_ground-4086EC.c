#include "/share/binary_recovery/clang-parser/defs.hh"
FILE *__fastcall sub_4086EC(const char *a1, const char *a2, FILE *a3)
{
  int v3; // eax
  FILE *streama; // [rsp+8h] [rbp-28h]
  char v7; // [rsp+29h] [rbp-7h]
  char v8; // [rsp+2Ah] [rbp-6h]
  char v9; // [rsp+2Bh] [rbp-5h]
  int v10; // [rsp+2Ch] [rbp-4h]

  v7 = 0;
  v8 = 0;
  v9 = 0;
  v3 = fileno(a3);
  if ( v3 != 1 )
  {
    if ( v3 != 2 )
    {
      if ( !v3 )
        goto LABEL_10;
      if ( dup2(2, 2) != 2 )
        v9 = 1;
    }
    if ( dup2(1, 1) != 1 )
      v8 = 1;
  }
  if ( dup2(0, 0) )
    v7 = 1;
LABEL_10:
  if ( v7 && (unsigned __int8)sub_408699(0) != 1 )
  {
    streama = 0LL;
  }
  else if ( v8 && (unsigned __int8)sub_408699(1) != 1 )
  {
    streama = 0LL;
  }
  else if ( v9 && (unsigned __int8)sub_408699(2) != 1 )
  {
    streama = 0LL;
  }
  else
  {
    streama = freopen(a1, a2, a3);
  }
  v10 = *__errno_location();
  if ( v9 )
    close(2);
  if ( v8 )
    close(1);
  if ( v7 )
    close(0);
  if ( !streama )
    *__errno_location() = v10;
  return streama;
}
