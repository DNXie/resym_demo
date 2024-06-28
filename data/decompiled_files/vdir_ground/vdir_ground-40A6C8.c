#include "/share/binary_recovery/clang-parser/defs.hh"
int sub_40A6C8()
{
  char v1; // [rsp+Fh] [rbp-21h]
  unsigned __int64 i; // [rsp+10h] [rbp-20h]
  unsigned __int64 v3; // [rsp+18h] [rbp-18h]
  __int64 v4; // [rsp+20h] [rbp-10h]
  __int64 v5; // [rsp+28h] [rbp-8h]

  v3 = 0LL;
  for ( i = 0LL; i < qword_61D638; ++i )
  {
    v4 = *((_QWORD *)qword_61D640 + i);
    v5 = sub_40A223(v4);
    if ( i )
    {
      if ( v3 + v5 + 2 >= qword_61D720 )
      {
        v3 = 0LL;
        v1 = 10;
      }
      else
      {
        v3 += 2LL;
        v1 = 32;
      }
      putchar_unlocked(44);
      putchar_unlocked(v1);
    }
    sub_409A65(v4, v3);
    v3 += v5;
  }
  return putchar_unlocked(10);
}
