#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int8 **__fastcall sub_408FB4(unsigned __int8 **a1, unsigned __int64 a2, unsigned __int8 **a3)
{
  unsigned __int8 **result; // rax
  unsigned __int8 **v5; // [rsp+18h] [rbp-28h]
  unsigned __int64 v6; // [rsp+28h] [rbp-18h]
  unsigned __int64 v7; // [rsp+30h] [rbp-10h]
  unsigned __int8 **v8; // [rsp+38h] [rbp-8h]

  v5 = a1;
  v6 = a2 >> 1;
  v7 = a2 - (a2 >> 1);
  v8 = &a1[-4 * (a2 >> 1)];
  do
  {
    while ( (int)sub_407AC9(a3 - 4, v8 - 4) <= 0 )
    {
      v5 -= 4;
      a3 -= 4;
      result = v5;
      *v5 = *a3;
      v5[1] = a3[1];
      v5[2] = a3[2];
      v5[3] = a3[3];
      if ( !--v6 )
        return result;
    }
    v5 -= 4;
    v8 -= 4;
    *v5 = *v8;
    v5[1] = v8[1];
    v5[2] = v8[2];
    v5[3] = v8[3];
    --v7;
  }
  while ( v7 );
  do
  {
    v5 -= 4;
    a3 -= 4;
    result = v5;
    *v5 = *a3;
    v5[1] = a3[1];
    v5[2] = a3[2];
    v5[3] = a3[3];
    --v6;
  }
  while ( v6 );
  return result;
}
