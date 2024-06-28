#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_405391(__int64 a1, _BYTE *a2)
{
  bool v3; // [rsp+1Bh] [rbp-25h]
  unsigned __int64 i; // [rsp+20h] [rbp-20h]
  unsigned __int64 v5; // [rsp+28h] [rbp-18h]
  __int64 v6; // [rsp+30h] [rbp-10h]

  v5 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(a1 + 16);
  v3 = (*(_DWORD *)(v6 + 8) & 0x20000000) != 0;
  for ( i = 0LL; i < v5; ++i )
  {
    if ( sub_4052D5(*(_QWORD *)(16 * i + v6), a2, *(_DWORD *)(16 * i + v6 + 8)) )
      return !v3;
  }
  return v3;
}
