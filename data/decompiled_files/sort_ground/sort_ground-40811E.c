#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40811E(__int64 a1, unsigned __int64 a2, __int64 *a3)
{
  FILE *v3; // rax
  int i; // [rsp+24h] [rbp-1Ch]
  __int64 v7; // [rsp+28h] [rbp-18h]

  *a3 = sub_414E49(a2, 8LL);
  v7 = *a3;
  for ( i = 0; i < a2; ++i )
  {
    v3 = *(_QWORD *)(16LL * i + a1 + 8) && *(_BYTE *)(*(_QWORD *)(16LL * i + a1 + 8) + 12LL) ? sub_403A7E(*(_QWORD *)(16LL * i + a1 + 8)) : sub_40352E(*(const char **)(16LL * i + a1), "r");
    *(_QWORD *)(8LL * i + v7) = v3;
    if ( !*(_QWORD *)(8LL * i + v7) )
      break;
  }
  return i;
}
