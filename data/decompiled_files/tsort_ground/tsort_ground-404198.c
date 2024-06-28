#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404198(FILE *a1, __int64 a2, unsigned __int64 a3, __int64 *a4)
{
  __int64 v5; // rax
  char v8; // [rsp+2Ah] [rbp-26h]
  int v9; // [rsp+2Ch] [rbp-24h]
  __int64 v10; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+38h] [rbp-18h]
  unsigned __int64 i; // [rsp+40h] [rbp-10h]
  unsigned __int64 j; // [rsp+48h] [rbp-8h]

  if ( !a2 && !qword_6073C0 )
    abort();
  v8 = 0;
  if ( a2 != qword_6073C0 && qword_6073C0 )
  {
    v8 = 1;
    for ( i = 0LL; i < a3; ++i )
    {
      if ( *(_BYTE *)(a2 + i) != *(_BYTE *)(qword_6073C0 + i) )
      {
        v8 = 0;
        break;
      }
    }
  }
  if ( v8 != 1 )
  {
    qword_6073C0 = a2;
    memset(byte_6073E0, 0, sizeof(byte_6073E0));
    for ( j = 0LL; j < a3; ++j )
      byte_6073E0[*(unsigned __int8 *)(a2 + j)] = 1;
  }
  do
    v9 = getc_unlocked(a1);
  while ( v9 >= 0 && byte_6073E0[v9] );
  v11 = a4[1];
  v10 = *a4;
  i = 0LL;
  while ( 1 )
  {
    if ( v9 < 0 && !i )
      return -1LL;
    if ( i == v10 )
      v11 = sub_404E6D(v11, &v10, 1LL);
    if ( v9 < 0 )
    {
      *(_BYTE *)(v11 + i) = 0;
      goto LABEL_28;
    }
    if ( byte_6073E0[v9] )
      break;
    v5 = i++;
    *(_BYTE *)(v5 + v11) = v9;
    v9 = getc_unlocked(a1);
  }
  *(_BYTE *)(v11 + i) = 0;
LABEL_28:
  a4[1] = v11;
  *a4 = v10;
  return i;
}
