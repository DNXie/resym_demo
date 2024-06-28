#include "/share/binary_recovery/clang-parser/defs.hh"
_BYTE *__fastcall sub_405A0B(char *a1, unsigned int *a2, __int64 (__fastcall *a3)(char *, char *, __int64), __int64 a4, int a5, int a6)
{
  int v6; // eax
  char *v8; // rax
  char v11; // [rsp+2Ah] [rbp-26h]
  char v12; // [rsp+2Bh] [rbp-25h]
  int v13; // [rsp+2Ch] [rbp-24h]
  char v14; // [rsp+30h] [rbp-20h]
  int v15; // [rsp+34h] [rbp-1Ch]
  char *v16; // [rsp+38h] [rbp-18h]
  char *v17; // [rsp+40h] [rbp-10h]
  char *v18; // [rsp+48h] [rbp-8h]

  v16 = 0LL;
  v17 = a1;
  v18 = a1;
  v11 = 0;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        v8 = v18++;
        v12 = *v8;
        if ( !*v8 )
          return (_BYTE *)(v17 - a1);
        if ( *v18 != 47 )
          break;
        if ( v12 != 47 )
          v16 = v18;
      }
    }
    while ( v12 != 47 || !*v18 || !v16 );
    if ( v16 - v17 != 1 || *v17 != 46 )
      break;
LABEL_29:
    v17 = v18;
  }
  v13 = 0;
  v14 = 0;
  *v16 = 0;
  if ( v16 - v17 == 2 && *v17 == 46 && v17[1] == 46 )
  {
    v11 = 0;
    goto LABEL_20;
  }
  v6 = a3(a1, v17, a4);
  switch ( v6 )
  {
    case 0:
      v14 = 2;
      goto LABEL_19;
    case 1:
LABEL_19:
      v11 = 1;
      break;
    case -1:
      v13 = *__errno_location();
      break;
  }
LABEL_20:
  if ( v11 )
    v14 |= 1u;
  v15 = sub_404662(a2, (__int64)v17, v14, 0LL, a5, a6);
  if ( v15 != -1 )
    *v16 = 47;
  if ( !v15 )
    goto LABEL_29;
  if ( v13 && *__errno_location() == 2 )
    *__errno_location() = v13;
  return (_BYTE *)v15;
}
