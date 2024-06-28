#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_402A0D()
{
  char *v0; // rax
  __int64 v2; // rax
  int i; // [rsp+4h] [rbp-2Ch]
  unsigned __int64 v4; // [rsp+8h] [rbp-28h] BYREF
  unsigned __int64 v5; // [rsp+10h] [rbp-20h]
  unsigned __int64 v6; // [rsp+18h] [rbp-18h]

  qword_61E0B0 = 5LL;
  do
  {
    v5 = qword_61E0B0;
    qword_61E0B0 = 0LL;
    for ( i = 0; i <= 11; ++i )
    {
      v4 = v5;
      v0 = nl_langinfo(i + 131086);
      v6 = sub_40F12B(v0, (char *)&unk_61D920 + 161 * i, 161LL, &v4, 0LL, 0LL);
      if ( v6 == -1LL || v6 > 0xA0 )
      {
        qword_61E0B0 = 0LL;
        return 0LL;
      }
      v2 = qword_61E0B0;
      if ( v4 >= qword_61E0B0 )
        v2 = v4;
      qword_61E0B0 = v2;
    }
  }
  while ( v5 > qword_61E0B0 );
  return qword_61E0B0;
}
