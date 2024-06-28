#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403A46(__int64 a1)
{
  __int64 result; // rax
  _QWORD *i; // [rsp+10h] [rbp-8h]

  for ( i = *(_QWORD **)(a1 + 8); ; i = (_QWORD *)i[1] )
  {
    result = i[11];
    if ( result < 0 )
      break;
    result = i[4];
    if ( result )
      break;
    i[4] = 1LL;
  }
  return result;
}
