#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int8 *__fastcall sub_404BF1(__int64 a1, __int64 a2)
{
  unsigned __int8 *v4; // rax
  unsigned __int8 *v6; // [rsp+10h] [rbp-20h]
  __int64 v7; // [rsp+18h] [rbp-18h]
  unsigned __int64 v8; // [rsp+20h] [rbp-10h]
  __int64 v9; // [rsp+28h] [rbp-8h]

  v6 = *(unsigned __int8 **)a1;
  v8 = *(_QWORD *)(a1 + 8) - 1LL + *(_QWORD *)a1;
  v7 = *(_QWORD *)(a2 + 16);
  v9 = *(_QWORD *)(a2 + 24);
  if ( !v9 )
    ++v7;
  if ( dword_61D4E8 == 128 )
  {
    while ( (unsigned __int64)v6 < v8 )
    {
      if ( !v7-- )
        break;
      while ( (unsigned __int64)v6 < v8 && byte_61D5E0[(unsigned __int8)sub_402B35(*v6)] )
        ++v6;
      while ( (unsigned __int64)v6 < v8 && byte_61D5E0[(unsigned __int8)sub_402B35(*v6)] != 1 )
        ++v6;
    }
  }
  else
  {
    while ( (unsigned __int64)v6 < v8 )
    {
      if ( !v7-- )
        break;
      while ( (unsigned __int64)v6 < v8 && (char)*v6 != dword_61D4E8 )
        ++v6;
      if ( (unsigned __int64)v6 < v8 && (v7 || v9) )
        ++v6;
    }
  }
  if ( v9 )
  {
    if ( *(_BYTE *)(a2 + 49) )
    {
      while ( (unsigned __int64)v6 < v8 && byte_61D5E0[(unsigned __int8)sub_402B35(*v6)] )
        ++v6;
    }
    v4 = (unsigned __int8 *)v8;
    if ( (unsigned __int64)&v6[v9] <= v8 )
      v4 = &v6[v9];
    v6 = v4;
  }
  return v6;
}
