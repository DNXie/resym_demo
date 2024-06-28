#include "/share/binary_recovery/clang-parser/defs.hh"
_BYTE *__fastcall sub_40D642(char *a1, __int64 a2, __int64 (__fastcall *a3)(char *, char *, __int64), __int64 a4)
{
  int v4; // eax
  char *v6; // rax
  char v9; // [rsp+2Ah] [rbp-26h]
  char v10; // [rsp+2Bh] [rbp-25h]
  int v11; // [rsp+2Ch] [rbp-24h]
  unsigned int v12; // [rsp+30h] [rbp-20h]
  int v13; // [rsp+34h] [rbp-1Ch]
  char *v14; // [rsp+38h] [rbp-18h]
  char *v15; // [rsp+40h] [rbp-10h]
  char *v16; // [rsp+48h] [rbp-8h]

  v14 = 0LL;
  v15 = a1;
  v16 = a1;
  v9 = 0;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        v6 = v16++;
        v10 = *v6;
        if ( !*v6 )
          return (_BYTE *)(v15 - a1);
        if ( *v16 != 47 )
          break;
        if ( v10 != 47 )
          v14 = v16;
      }
    }
    while ( v10 != 47 || !*v16 || !v14 );
    if ( v14 - v15 != 1 || *v15 != 46 )
      break;
LABEL_29:
    v15 = v16;
  }
  v11 = 0;
  v12 = 0;
  *v14 = 0;
  if ( v14 - v15 == 2 && *v15 == 46 && v15[1] == 46 )
  {
    v9 = 0;
    goto LABEL_20;
  }
  v4 = a3(a1, v15, a4);
  switch ( v4 )
  {
    case 0:
      v12 = 2;
      goto LABEL_19;
    case 1:
LABEL_19:
      v9 = 1;
      break;
    case -1:
      v11 = *__errno_location();
      break;
  }
LABEL_20:
  if ( v9 )
    v12 |= 1u;
  v13 = sub_410184(a2, v15, v12, 0LL);
  if ( v13 != -1 )
    *v14 = 47;
  if ( !v13 )
    goto LABEL_29;
  if ( v11 && *__errno_location() == 2 )
    *__errno_location() = v11;
  return (_BYTE *)v13;
}
