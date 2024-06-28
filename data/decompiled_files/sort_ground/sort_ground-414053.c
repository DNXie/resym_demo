#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_414053(__int64 a1)
{
  __int64 result; // rax
  __int64 src[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v3; // [rsp+30h] [rbp-30h]
  __int64 v4; // [rsp+38h] [rbp-28h]
  __int64 v5; // [rsp+40h] [rbp-20h]
  struct obstack *v6; // [rsp+48h] [rbp-18h]
  struct obstack *v7; // [rsp+50h] [rbp-10h]
  struct obstack *v8; // [rsp+58h] [rbp-8h]

  src[1] = a1 + 24;
  src[0] = (unsigned int)(*(_DWORD *)(a1 + 48) - *(_DWORD *)(a1 + 40) - 1);
  v3 = a1 + 24;
  v4 = *(_QWORD *)(a1 + 40);
  if ( *(_QWORD *)(a1 + 48) == v4 )
    *(_BYTE *)(v3 + 80) |= 2u;
  *(_QWORD *)(v3 + 24) = (*(int *)(v3 + 48) + *(_QWORD *)(v3 + 24)) & ~*(_DWORD *)(v3 + 48);
  if ( *(_QWORD *)(v3 + 24) - *(_QWORD *)(v3 + 8) > *(_QWORD *)(v3 + 32) - *(_QWORD *)(v3 + 8) )
    *(_QWORD *)(v3 + 24) = *(_QWORD *)(v3 + 32);
  *(_QWORD *)(v3 + 16) = *(_QWORD *)(v3 + 24);
  v5 = v4;
  v6 = (struct obstack *)(a1 + 112);
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 136) + 8LL) > *(_QWORD *)(a1 + 144) )
    _obstack_newchunk(v6, 8);
  v7 = v6;
  *(_QWORD *)v6->next_free = v5;
  v7->next_free += 8;
  v8 = (struct obstack *)(a1 + 200);
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 224) + 8LL) > *(_QWORD *)(a1 + 232) )
    _obstack_newchunk(v8, 8);
  memcpy(v8->next_free, src, 8uLL);
  v8->next_free += 8;
  result = a1;
  ++*(_QWORD *)a1;
  return result;
}
