#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401740(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  _QWORD *v11; // [rsp+10h] [rbp-30h]
  int v12; // [rsp+18h] [rbp-28h]
  int v13; // [rsp+1Ch] [rbp-24h]
  int i; // [rsp+1Ch] [rbp-24h]
  int v15; // [rsp+1Ch] [rbp-24h]
  int j; // [rsp+1Ch] [rbp-24h]
  _QWORD *v17; // [rsp+20h] [rbp-20h]
  __int64 v18; // [rsp+28h] [rbp-18h]

  if ( !a2 || !a1 || !*(_QWORD *)(a1 + 8) )
    return 0LL;
  *(_QWORD *)a1 &= **(_QWORD **)(a1 + 8);
  v18 = a2;
  do
  {
    v13 = *(char *)(v18 + 17);
    if ( sub_401594(*(_BYTE *)(v18 + 17), *(_QWORD *)a1) )
      v3 = *(_QWORD *)(v18 + 32);
    else
      v3 = *(_QWORD *)(v18 + 24);
    v18 = v3;
  }
  while ( v13 < *(char *)(v3 + 17) );
  if ( *(_QWORD *)a1 == *(_QWORD *)v3 )
  {
    for ( i = 0; i < *(unsigned __int8 *)(v3 + 16); ++i )
    {
      if ( **(_QWORD **)(a1 + 8) == *(_QWORD *)(*(_QWORD *)(v3 + 8) + 16LL * i) )
      {
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 16LL * i + 8) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
        free(*(void **)(a1 + 8));
        free((void *)a1);
        return v18;
      }
    }
    v11 = malloc(16LL * (*(unsigned __int8 *)(v3 + 16) + 1));
    v12 = 0;
    v15 = 0;
    v17 = v11;
    while ( v15 < *(unsigned __int8 *)(v18 + 16) )
    {
      if ( **(_QWORD **)(a1 + 8) <= *(_QWORD *)(*(_QWORD *)(v18 + 8) + 16LL * v15) )
      {
        v6 = *(_QWORD **)(a1 + 8);
        v7 = v6[1];
        *v17 = *v6;
        v17[1] = v7;
        **(_QWORD **)(a1 + 8) = 0xFFFFFFFFLL;
        v12 = 1;
      }
      else
      {
        v4 = (_QWORD *)(*(_QWORD *)(v18 + 8) + 16LL * v15);
        v5 = v4[1];
        *v17 = *v4;
        v17[1] = v5;
        ++v15;
      }
      v17 += 2;
    }
    if ( !v12 )
    {
      v8 = *(_QWORD **)(a1 + 8);
      v9 = v8[1];
      *v17 = *v8;
      v17[1] = v9;
    }
    free(*(void **)(a1 + 8));
    free((void *)a1);
    ++*(_BYTE *)(v18 + 16);
    free(*(void **)(v18 + 8));
    *(_QWORD *)(v18 + 8) = v11;
    result = v18;
  }
  else
  {
    for ( j = 1; j <= 31; ++j )
    {
      v10 = sub_401594(j, *(_QWORD *)a1);
      if ( v10 != sub_401594(j, *(_QWORD *)v18) )
        break;
    }
    if ( sub_401594(*(_BYTE *)(a2 + 17), *(_QWORD *)a1) )
      *(_QWORD *)(a2 + 32) = sub_40162E(*(_QWORD *)(a2 + 32), a1, j, a2);
    else
      *(_QWORD *)(a2 + 24) = sub_40162E(*(_QWORD *)(a2 + 24), a1, j, a2);
    result = a1;
  }
  return result;
}
