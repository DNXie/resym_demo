#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401B1A(__int64 a1)
{
  const unsigned __int16 *v1; // rbx
  const unsigned __int16 *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 i; // [rsp+10h] [rbp-30h]
  unsigned __int64 v6; // [rsp+18h] [rbp-28h]
  __int64 v7; // [rsp+20h] [rbp-20h]
  unsigned __int64 v8; // [rsp+28h] [rbp-18h]

  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(_QWORD *)(a1 + 8) - 1LL;
  v6 = 0LL;
  for ( i = 0LL; i < qword_6092C8 && v6 < v8; ++i )
  {
    while ( v6 < v8 )
    {
      v1 = *__ctype_b_loc();
      if ( (v1[(unsigned __int8)sub_40181D(*(_BYTE *)(v7 + v6))] & 1) == 0 )
        break;
      ++v6;
    }
    while ( v6 < v8 )
    {
      v2 = *__ctype_b_loc();
      if ( (v2[(unsigned __int8)sub_40181D(*(_BYTE *)(v7 + v6))] & 1) != 0 )
        break;
      ++v6;
    }
  }
  v3 = qword_6092D0;
  if ( v8 - v6 <= qword_6092D0 )
    v3 = v8 - v6;
  return *(_QWORD *)(a1 + 16) + v3 + v6;
}
