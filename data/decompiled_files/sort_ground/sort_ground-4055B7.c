#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4055B7(unsigned __int8 *a1, unsigned __int8 **a2)
{
  unsigned __int8 v3; // al
  unsigned __int8 v4; // bl
  unsigned __int8 v5; // al
  unsigned __int8 v6; // bl
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]
  unsigned __int64 v9; // [rsp+20h] [rbp-28h]
  unsigned __int8 *v10; // [rsp+28h] [rbp-20h]
  unsigned __int8 *i; // [rsp+30h] [rbp-18h]
  unsigned __int64 v12; // [rsp+38h] [rbp-10h]

  v8 = 0LL;
  v9 = 12LL;
  while ( byte_61D5E0[(unsigned __int8)sub_402B35(*a1)] )
    ++a1;
  while ( 2 )
  {
    v12 = (v8 + v9) >> 1;
    v10 = a1;
    for ( i = (unsigned __int8 *)(&off_61D420)[2 * v12]; ; ++i )
    {
      if ( !*i )
      {
        if ( a2 )
          *a2 = v10;
        return (unsigned int)dword_61D428[4 * v12];
      }
      v3 = sub_402B35(*v10);
      v4 = sub_402B35(byte_61D8E0[v3]);
      if ( v4 < (unsigned __int8)sub_402B35(*i) )
      {
        v9 = (v8 + v9) >> 1;
        goto LABEL_14;
      }
      v5 = sub_402B35(*v10);
      v6 = sub_402B35(byte_61D8E0[v5]);
      if ( v6 > (unsigned __int8)sub_402B35(*i) )
        break;
      ++v10;
    }
    v8 = v12 + 1;
LABEL_14:
    if ( v8 < v9 )
      continue;
    return 0LL;
  }
}
