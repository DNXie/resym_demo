#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_410A45(__int64 a1, unsigned __int64 a2, int (__fastcall *a3)(_QWORD, __int64))
{
  __int64 result; // rax
  unsigned __int64 v5; // [rsp+20h] [rbp-10h]
  __int64 v6; // [rsp+28h] [rbp-8h]

  v5 = a2;
  v6 = *(_QWORD *)(8 * a2 + a1);
  while ( v5 != 1 && a3(*(_QWORD *)(8 * (v5 >> 1) + a1), v6) <= 0 )
  {
    *(_QWORD *)(a1 + 8 * v5) = *(_QWORD *)(8 * (v5 >> 1) + a1);
    v5 >>= 1;
  }
  result = v6;
  *(_QWORD *)(a1 + 8 * v5) = v6;
  return result;
}
