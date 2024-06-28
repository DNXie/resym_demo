#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40C2C6(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // [rsp+10h] [rbp-10h]
  unsigned __int64 v4; // [rsp+18h] [rbp-8h]

  v3 = sub_40C180(a1, a2);
  v4 = v3;
  do
  {
    if ( *(_QWORD *)v4 == a2 && *(_QWORD *)(v4 + 8) )
      return **(_QWORD **)(v4 + 8);
    v4 = *(_QWORD *)(v4 + 8);
  }
  while ( v4 );
  while ( 1 )
  {
    v3 += 16LL;
    if ( v3 >= *(_QWORD *)(a1 + 8) )
      break;
    if ( *(_QWORD *)v3 )
      return *(_QWORD *)v3;
  }
  return 0LL;
}
