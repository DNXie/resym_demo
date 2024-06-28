#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_401B3F(__int64 a1, const void *a2, size_t a3)
{
  unsigned __int64 v5; // [rsp+20h] [rbp-20h]
  __int64 v6; // [rsp+28h] [rbp-18h]
  __int64 v7; // [rsp+30h] [rbp-10h]
  size_t n; // [rsp+38h] [rbp-8h]

  v5 = *(_QWORD *)(a1 + 16) - *(_QWORD *)a1;
  if ( a3 + 1 > v5 )
  {
    v6 = *(_QWORD *)(a1 + 8) + a3 + 1;
    v7 = sub_4047F5(2LL, v6);
    n = *(_QWORD *)(a1 + 8) - v5;
    *(_QWORD *)(a1 + 16) = v7 + 2 * v6 - n;
    memcpy(*(void **)(a1 + 16), (const void *)(*(_QWORD *)a1 + v5), n);
    free(*(void **)a1);
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = 2 * v6;
  }
  *(_QWORD *)(a1 + 16) += ~a3;
  **(_BYTE **)(a1 + 16) = 47;
  return memcpy((void *)(*(_QWORD *)(a1 + 16) + 1LL), a2, a3);
}
