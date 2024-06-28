#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401E1F(__int64 a1, __int64 (__fastcall *a2)(__int64))
{
  if ( !*(_QWORD *)(a1 + 8) && !*(_QWORD *)(a1 + 16) )
    return a2(a1);
  if ( *(_QWORD *)(a1 + 8) && (unsigned __int8)sub_401E1F(*(_QWORD *)(a1 + 8), a2) )
    return 1LL;
  if ( (unsigned __int8)a2(a1) )
    return 1LL;
  return *(_QWORD *)(a1 + 16) && (unsigned __int8)sub_401E1F(*(_QWORD *)(a1 + 16), a2);
}
