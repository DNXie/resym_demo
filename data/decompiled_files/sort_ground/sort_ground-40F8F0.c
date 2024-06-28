#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40F8F0(__int64 a1)
{
  __int64 result; // rax
  _QWORD *i; // [rsp+18h] [rbp-18h]
  _QWORD *j; // [rsp+20h] [rbp-10h]
  _QWORD *v4; // [rsp+28h] [rbp-8h]

  for ( i = *(_QWORD **)a1; *(_QWORD *)(a1 + 8) > (unsigned __int64)i; i += 2 )
  {
    if ( *i )
    {
      for ( j = (_QWORD *)i[1]; j; j = v4 )
      {
        if ( *(_QWORD *)(a1 + 64) )
          (*(void (__fastcall **)(_QWORD))(a1 + 64))(*j);
        *j = 0LL;
        v4 = (_QWORD *)j[1];
        j[1] = *(_QWORD *)(a1 + 72);
        *(_QWORD *)(a1 + 72) = j;
      }
      if ( *(_QWORD *)(a1 + 64) )
        (*(void (__fastcall **)(_QWORD))(a1 + 64))(*i);
      *i = 0LL;
      i[1] = 0LL;
    }
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
