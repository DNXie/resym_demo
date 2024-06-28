#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_402D9A(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  const char *v4; // rbx
  int *v5; // rax
  bool v6; // al
  int *v7; // rax
  unsigned __int64 result; // rax
  unsigned __int8 v11; // [rsp+2Fh] [rbp-41h]
  unsigned __int64 v12; // [rsp+30h] [rbp-40h]
  unsigned __int64 v13; // [rsp+38h] [rbp-38h]
  unsigned __int64 v14; // [rsp+40h] [rbp-30h]
  __int64 v15; // [rsp+48h] [rbp-28h]
  unsigned __int64 v16; // [rsp+50h] [rbp-20h]

  v11 = 1;
  v14 = a1;
  v16 = 0LL;
  do
  {
    v12 = sub_4053C5(0LL, a2, a3);
    if ( v12 < a3 && *__errno_location() )
    {
      v4 = s1;
      v5 = __errno_location();
      error(1, *v5, "%s", v4);
    }
    v15 = a2;
    v13 = v12;
    while ( v13 >= v14 )
    {
      sub_402C91(v11, v15, v14);
      v16 += v11;
      v6 = !a4 || v16 < a4;
      v11 = v6;
      if ( !v6 )
      {
        v7 = __errno_location();
        if ( sub_402178(*v7) )
        {
          v12 = 0LL;
          goto LABEL_18;
        }
      }
      v15 += v14;
      v13 -= v14;
      v14 = a1;
    }
    if ( v13 )
    {
      sub_402C91(v11, v15, v13);
      v16 += v11;
      v14 -= v13;
      v11 = 0;
    }
LABEL_18:
    ;
  }
  while ( v12 == a3 );
  while ( 1 )
  {
    result = v16++;
    if ( result >= a4 )
      break;
    sub_402C91(1, 0LL, 0LL);
  }
  return result;
}
