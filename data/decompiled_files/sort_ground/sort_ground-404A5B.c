#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int8 *__fastcall sub_404A5B(__int64 a1, __int64 *a2)
{
  unsigned __int8 *result; // rax
  unsigned __int8 *v5; // [rsp+10h] [rbp-20h]
  __int64 v6; // [rsp+18h] [rbp-18h]
  unsigned __int64 v7; // [rsp+20h] [rbp-10h]
  __int64 v8; // [rsp+28h] [rbp-8h]

  v5 = *(unsigned __int8 **)a1;
  v7 = *(_QWORD *)(a1 + 8) - 1LL + *(_QWORD *)a1;
  v6 = *a2;
  v8 = a2[1];
  if ( dword_61D4E8 == 128 )
  {
    while ( (unsigned __int64)v5 < v7 )
    {
      if ( !v6-- )
        break;
      while ( (unsigned __int64)v5 < v7 && byte_61D5E0[(unsigned __int8)sub_402B35(*v5)] )
        ++v5;
      while ( (unsigned __int64)v5 < v7 && byte_61D5E0[(unsigned __int8)sub_402B35(*v5)] != 1 )
        ++v5;
    }
  }
  else
  {
    while ( (unsigned __int64)v5 < v7 )
    {
      if ( !v6-- )
        break;
      while ( (unsigned __int64)v5 < v7 && (char)*v5 != dword_61D4E8 )
        ++v5;
      if ( (unsigned __int64)v5 < v7 )
        ++v5;
    }
  }
  if ( *((_BYTE *)a2 + 48) )
  {
    while ( (unsigned __int64)v5 < v7 && byte_61D5E0[(unsigned __int8)sub_402B35(*v5)] )
      ++v5;
  }
  result = (unsigned __int8 *)v7;
  if ( (unsigned __int64)&v5[v8] <= v7 )
    result = &v5[v8];
  return result;
}
