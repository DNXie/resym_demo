#include "/share/binary_recovery/clang-parser/defs.hh"
bool __fastcall sub_41423D(FILE *a1, __int64 a2)
{
  _BYTE *v2; // rax
  _BYTE *v3; // rax
  int v5; // [rsp+1Ch] [rbp-54h]
  __int64 v6; // [rsp+50h] [rbp-20h]
  __int64 v7; // [rsp+60h] [rbp-10h]

  while ( 1 )
  {
    v5 = fgetc(a1);
    if ( v5 == -1 )
      break;
    if ( (unsigned __int64)(*(_QWORD *)(a2 + 48) + 1LL) > *(_QWORD *)(a2 + 56) )
      _obstack_newchunk((struct obstack *)(a2 + 24), 1);
    v3 = *(_BYTE **)(a2 + 48);
    *(_QWORD *)(a2 + 48) = v3 + 1;
    *v3 = v5;
    if ( !v5 )
      sub_414053(a2);
  }
  if ( *(_DWORD *)(a2 + 48) != *(_DWORD *)(a2 + 40) )
  {
    if ( (unsigned __int64)(*(_QWORD *)(a2 + 48) + 1LL) > *(_QWORD *)(a2 + 56) )
      _obstack_newchunk((struct obstack *)(a2 + 24), 1);
    v2 = *(_BYTE **)(a2 + 48);
    *(_QWORD *)(a2 + 48) = v2 + 1;
    *v2 = 0;
    sub_414053(a2);
  }
  if ( (unsigned __int64)(*(_QWORD *)(a2 + 136) + 8LL) > *(_QWORD *)(a2 + 144) )
    _obstack_newchunk((struct obstack *)(a2 + 112), 8);
  **(_QWORD **)(a2 + 136) = 0LL;
  *(_QWORD *)(a2 + 136) += 8LL;
  v6 = *(_QWORD *)(a2 + 128);
  if ( *(_QWORD *)(a2 + 136) == v6 )
    *(_BYTE *)(a2 + 192) |= 2u;
  *(_QWORD *)(a2 + 136) = (*(int *)(a2 + 160) + *(_QWORD *)(a2 + 136)) & ~*(_DWORD *)(a2 + 160);
  if ( *(_QWORD *)(a2 + 136) - *(_QWORD *)(a2 + 120) > *(_QWORD *)(a2 + 144) - *(_QWORD *)(a2 + 120) )
    *(_QWORD *)(a2 + 136) = *(_QWORD *)(a2 + 144);
  *(_QWORD *)(a2 + 128) = *(_QWORD *)(a2 + 136);
  *(_QWORD *)(a2 + 8) = v6;
  v7 = *(_QWORD *)(a2 + 216);
  if ( *(_QWORD *)(a2 + 224) == v7 )
    *(_BYTE *)(a2 + 280) |= 2u;
  *(_QWORD *)(a2 + 224) = (*(int *)(a2 + 248) + *(_QWORD *)(a2 + 224)) & ~*(_DWORD *)(a2 + 248);
  if ( *(_QWORD *)(a2 + 224) - *(_QWORD *)(a2 + 208) > *(_QWORD *)(a2 + 232) - *(_QWORD *)(a2 + 208) )
    *(_QWORD *)(a2 + 224) = *(_QWORD *)(a2 + 232);
  *(_QWORD *)(a2 + 216) = *(_QWORD *)(a2 + 224);
  *(_QWORD *)(a2 + 16) = v7;
  return ferror(a1) == 0;
}
