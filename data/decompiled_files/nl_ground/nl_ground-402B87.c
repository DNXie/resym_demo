#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 *__fastcall sub_402B87(__int64 *a1, FILE *a2, char a3)
{
  _BYTE *v4; // rax
  int v6; // [rsp+2Ch] [rbp-24h]
  __int64 v7; // [rsp+30h] [rbp-20h]
  _BYTE *v8; // [rsp+38h] [rbp-18h]
  __int64 v9; // [rsp+40h] [rbp-10h]
  __int64 v10; // [rsp+48h] [rbp-8h]

  v7 = a1[2];
  v8 = (_BYTE *)v7;
  v9 = *a1 + v7;
  if ( feof_unlocked(a2) )
    return 0LL;
  while ( 1 )
  {
    v6 = getc_unlocked(a2);
    if ( v6 == -1 )
      break;
LABEL_9:
    if ( v8 == (_BYTE *)v9 )
    {
      v10 = *a1;
      v7 = sub_404FB9(v7, a1);
      v8 = (_BYTE *)(v7 + v10);
      a1[2] = v7;
      v9 = *a1 + v7;
    }
    v4 = v8++;
    *v4 = v6;
    if ( a3 == v6 )
      goto LABEL_12;
  }
  if ( v8 == (_BYTE *)v7 || ferror_unlocked(a2) )
    return 0LL;
  if ( *(v8 - 1) != a3 )
  {
    v6 = a3;
    goto LABEL_9;
  }
LABEL_12:
  a1[1] = (__int64)&v8[-v7];
  return a1;
}
