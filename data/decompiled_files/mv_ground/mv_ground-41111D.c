#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_41111D(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v5; // [rsp+18h] [rbp-30h]
  unsigned __int64 v6; // [rsp+20h] [rbp-28h]
  unsigned __int64 i; // [rsp+28h] [rbp-20h]
  unsigned __int64 v8; // [rsp+30h] [rbp-18h]

  if ( a1 )
  {
    if ( a2 )
    {
      v6 = a1;
      for ( i = a2; ; i = v8 )
      {
        v8 = v6 % i;
        if ( !(v6 % i) )
          break;
        v6 = i;
      }
      if ( a2 * (a1 / i) <= a3 && a2 * (a1 / i) / a2 == a1 / i )
        return a2 * (a1 / i);
    }
    v5 = a1;
  }
  else
  {
    if ( a2 )
      v3 = a2;
    else
      v3 = 0x2000LL;
    v5 = v3;
  }
  result = a3;
  if ( v5 <= a3 )
    result = v5;
  return result;
}
