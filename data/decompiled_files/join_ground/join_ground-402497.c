#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_402497(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  char v4; // al
  unsigned __int64 result; // rax
  char v6; // [rsp+2Fh] [rbp-11h]
  unsigned __int64 i; // [rsp+30h] [rbp-10h]
  unsigned __int64 j; // [rsp+30h] [rbp-10h]
  unsigned __int64 v9; // [rsp+38h] [rbp-8h]

  if ( !byte_60A310 )
    a3 = *(_QWORD *)(a1 + 24);
  v9 = a3;
  if ( c < 0 )
    v4 = 32;
  else
    v4 = c;
  v6 = v4;
  for ( i = 0LL; i < a2 && i < v9; ++i )
  {
    putchar_unlocked(v6);
    sub_4023D9(i, a1);
  }
  for ( j = a2 + 1; ; ++j )
  {
    result = j;
    if ( j >= v9 )
      break;
    putchar_unlocked(v6);
    sub_4023D9(j, a1);
  }
  return result;
}
