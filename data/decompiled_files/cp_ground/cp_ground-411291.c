#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_411291(__int64 a1, __int64 **a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 *v5; // [rsp+18h] [rbp-18h]

  v5 = *a2;
  if ( (*a2)[1] == 1073741822 && v5[3] == 1073741822 )
    return 1LL;
  if ( v5[1] == 0x3FFFFFFF && v5[3] == 0x3FFFFFFF )
  {
    *a2 = 0LL;
    result = 0LL;
  }
  else
  {
    if ( v5[1] == 1073741822 )
    {
      *v5 = sub_4110DF(a1);
      v5[1] = v3;
    }
    else if ( v5[1] == 0x3FFFFFFF )
    {
      sub_41360D(v5);
    }
    if ( v5[3] == 1073741822 )
    {
      v5[2] = sub_4110F5(a1);
      v5[3] = v4;
    }
    else if ( v5[3] == 0x3FFFFFFF )
    {
      sub_41360D(v5 + 2);
    }
    result = 0LL;
  }
  return result;
}
