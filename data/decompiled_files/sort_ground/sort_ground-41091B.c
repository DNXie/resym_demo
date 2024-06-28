#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_41091B(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int (__fastcall *a4)(_QWORD, __int64))
{
  unsigned __int64 i; // [rsp+28h] [rbp-18h]
  __int64 v7; // [rsp+30h] [rbp-10h]
  __int64 v8; // [rsp+38h] [rbp-8h]

  v8 = *(_QWORD *)(8 * a3 + a1);
  for ( i = a3; a2 >> 1 >= i; i = v7 )
  {
    v7 = 2 * i;
    if ( 2 * i < a2 && a4(*(_QWORD *)(16 * i + a1), *(_QWORD *)(8 * (2 * i + 1) + a1)) < 0 )
      ++v7;
    if ( a4(*(_QWORD *)(8 * v7 + a1), v8) <= 0 )
      break;
    *(_QWORD *)(a1 + 8 * i) = *(_QWORD *)(8 * v7 + a1);
  }
  *(_QWORD *)(a1 + 8 * i) = v8;
  return i;
}
