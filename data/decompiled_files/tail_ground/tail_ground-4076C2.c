#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4076C2(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // [rsp+18h] [rbp-8h]

  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v3 )
    abort();
  return 16 * v3 + *(_QWORD *)a1;
}
