#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *__fastcall sub_401E2E(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *result; // rax
  _QWORD *v6; // [rsp+28h] [rbp-18h]

  if ( !*(_QWORD *)(a1 + 48) )
  {
    *(_QWORD *)(a1 + 56) = sub_401DF7();
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 56);
  }
  if ( **(_QWORD **)(a1 + 56) == 80LL )
  {
    v3 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(v3 + 1304) = sub_401DF7();
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 1304LL);
  }
  v6 = *(_QWORD **)(a1 + 56);
  v6[2 * v6[1] + 4] = a2;
  v6[2 * v6[1] + 3] = a3;
  ++*v6;
  result = v6;
  ++v6[1];
  return result;
}
