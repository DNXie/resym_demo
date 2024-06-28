#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40790D(__int64 a1, __int64 a2, size_t a3)
{
  size_t v3; // r12
  _QWORD *v5; // rbx
  __int64 i; // r13
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // [rsp+0h] [rbp-50h]
  int (*compar)(const void *, const void *); // [rsp+20h] [rbp-30h]
  void *v11; // [rsp+28h] [rbp-28h]

  v3 = a3;
  compar = *(int (**)(const void *, const void *))(a1 + 64);
  if ( *(_QWORD *)(a1 + 56) < a3 )
  {
    *(_QWORD *)(a1 + 56) = a3 + 40;
    if ( *(_QWORD *)(a1 + 56) > 0x1FFFFFFFFFFFFFFFuLL
      || (v11 = realloc(*(void **)(a1 + 16), 8LL * *(_QWORD *)(a1 + 56))) == 0LL )
    {
      free(*(void **)(a1 + 16));
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_QWORD *)(a1 + 56) = 0LL;
      return a2;
    }
    *(_QWORD *)(a1 + 16) = v11;
  }
  v5 = *(_QWORD **)(a1 + 16);
  for ( i = a2; i; i = *(_QWORD *)(i + 16) )
  {
    v7 = v5++;
    *v7 = i;
  }
  qsort(*(void **)(a1 + 16), v3, 8uLL, compar);
  v8 = *(_QWORD **)(a1 + 16);
  v9 = *v8;
  while ( --v3 )
  {
    *(_QWORD *)(*v8 + 16LL) = v8[1];
    ++v8;
  }
  *(_QWORD *)(*v8 + 16LL) = 0LL;
  return v9;
}
